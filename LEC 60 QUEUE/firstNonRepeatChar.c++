#include<unordered_map>
#include<queue>
char firstNonRepeatingCharacter(string str) {

            unordered_map<char, int> count;
            queue<int> q;
            string ans = "";

            for(int i=0; i<str.length();i++){
                char ch = str[i];

                // increase count
                count[ch]++;

               // push to Queue
                q.push(ch);

                while(!q.empty()){
                    if(count[q.front()] > 1) {
                        // repeating char
                        q.pop();
                    }
                    else{
                        // found  non -repeating char
                        ans.push_back(q.front());
                        break;
                    }
                }

                if(q.empty())
                    ans.push_back('#');
            }
              return ans;
     }
