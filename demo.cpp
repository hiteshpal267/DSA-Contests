#include <bits/stdc++.h>

using namespace std;

bool winnerOfGame(string colors) {
        int n = colors.size();

        int cntA = 0 ,cntB = 0;
        int A = 0 , B = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(colors[i] == 'A')
            {
                cntA++;
                if(cntB >= 3)
                {
                    B += (cntB - 2);
                }
                cntB = 0;
            }
            else if(colors[i] == 'B'){
                cntB++;
                if(cntA >= 3)
                {
                    A += (cntA - 2);
                }
                
                cntA = 0;
            }

           
            cout<<"cntA-> "<<cntA<<endl;
            cout<<"cntB-> "<<cntB<<endl;
            cout<<"A-> "<<A<<endl;
            cout<<"B-> "<<B<<endl;

            cout<<endl;
            cout<<endl;
        }
        if(cntB >= 3)
        {
            B += (cntB - 2);
        }
        cntB = 0;

         if(cntA >= 3)
        {
            A += (cntA - 2);
        }
                
        cntA = 0;
        
        cout<<"A->"<<A<<endl;
        cout<<"B->"<<B<<endl;

        if(A > B) return true;
        return false;
    }

int main()
{
      string colors = "AAAABBBB";
   
    cout<<winnerOfGame(colors)<<endl;
    // int ind = lower_bound(nums.begin() , nums.end() , 5) - nums.begin();    
    // cout<<"ind->"<<ind<<endl;
    return 0;
}