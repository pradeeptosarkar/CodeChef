#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
{
    int nSeasons = 0;
        long long int time = 0;
        int temp = 0;
        vector<int> esDuration;
        cin >> nSeasons;
        temp = nSeasons;
        while(temp--){
            int val = 0;
            cin >> val;
            esDuration.push_back(val);
        }
        for(int s=0; s<nSeasons; s++){
            int episodes = 0;
            int startEpisode = 0;
            cin >> episodes;
            cin >> startEpisode;
            time += startEpisode;
            for (int e=1; e<episodes; e++){
                int duration;
                cin >> duration;
                time += duration - esDuration[s];
            }
        }
        cout << time << '\n';
}

return 0;
}
