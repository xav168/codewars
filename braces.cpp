
bool valid_braces(std :: string braces) 
{
    std :: stack <char> s;
    int j = braces.length();
  for (int i = 0; i < j; i++)
  {
      if (braces[i] == '(' || braces[i] == '{' || braces[i] == '[')
      {
          s.push(braces[i]);
      }
      if (braces[i] == ')')
      {
          if (s.empty() == true)
          {
              return false;
          }
          if (s.top() == '(')
          {
              s.pop();
          }
          else
          {
              return false;
              break;
          }
          continue;
      }
      if (braces[i] == '}')
      {
          if (s.empty() == true)
          {
              return false;
          }
          if (s.top() == '{')
          {
              s.pop();
          }
          else
          {
              return false;
              break;
          }
          continue;
      }
      if (braces[i] == ']')
      {
          if (s.empty() == true)
          {
              return false;
          }
          if (s.top() ==  '[')
          {
              s.pop();
          }
          else
          {
              return false;
              break;
          }
          continue; 
      }
  }
  if (s.empty() == true)
  {
      return true;
  }
  else return false;
}