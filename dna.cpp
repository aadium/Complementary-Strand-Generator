#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  char user_input[10000]{};
  char user_output[10000]{};
  
  cout << "Enter the DNA sequence: ";
  const int N = 10000;

  char x = cin.get();				
  int i = 0;						
  while (x != '\n' && i < N-1){	
    user_input[i] = x;			
    i++;						
    x = cin.get();				
  }
  user_input[i] = 0;	

  bool invalid_input = false;

  for (int i = 0; i < strlen(user_input); i++){
    if (user_input[i] == 'G')
    {
      user_output[i] = 'C';
    }

    else if (user_input[i] == 'A')
    {
      user_output[i] = 'T';
    }

    else if (user_input[i] == 'C')
    {
      user_output[i] = 'G';
    }

    else if (user_input[i] == 'T')
    {
      user_output[i] = 'A';
    }
    
    else
    {
      invalid_input = true;
      break;
    }
  }

  if (invalid_input)
  {
    cout << "Invalid DNA strand input." << endl;
    return -1;
  }

  cout << "Complementary strand: " << user_output << endl;
  return 0;
}
