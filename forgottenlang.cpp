#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--)
    {
        int dict_size, phrases_case, phrases_size;
        cin >> dict_size >> phrases_case;
        string dict[dict_size];
        
        
        for(int i = 0; i < dict_size; i++)
        {
            cin >> dict[i];
        }
        
        for(int i = 0; i < phrases_case; i++)
        {
            cin >> phrases_size;
            string phrases[phrases_size];
            string flag[dict_size];
            
            for(int i = 0; i < phrases_size; i++)
            {
                cin >> phrases[i];
                for(int j = 0; j < dict_size; i++)
                {
                    if(dict[j] == phrases[i])
                    {
                        flag[j] = "YES";
                    }
                    else
                    {
                        flag[j] = "NO";
                    }
                }
            }
            for(int i = 0; i < dict_size; i++)
            {
                cout << flag[i] << endl;
            }
        }
    }
	return 0;
}
