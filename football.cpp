#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int num;
	    cin >> num;
	    int goal[num], foul[num];
	    int score[num] = {0};
	    for(int i = 0; i < num; i++)
	    {
	        cin >> goal[i];
	    }
	    for(int i =0 ; i < num; i++)
	    {
	        cin >> foul[i];
	    }
	    for(int i = 0; i < num; i++)
	    {
	        score[i] = goal[i]*20 - foul[i]*10;
	        if(score[i] < 0)
	            score[i] = 0;
	    }
	    sort(score, score + num);
	    cout << score[num-1] << endl;
	}
	return 0;
}
