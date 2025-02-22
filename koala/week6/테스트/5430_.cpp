#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;

deque<int> dq;
bool rev;

bool dq_cmd(string &cmd);
void dq_prn();
void dq_input();
int main(){
    int n;
    string cmd;
    int arr_len;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>cmd;
        cin>>arr_len;
        rev=false;
        dq_input();
        if(dq_cmd(cmd)){
            dq_prn();
        }
        else{
            cout<<"error"<<'\n';
        }
        dq.clear();
    }
}

bool dq_cmd(string &cmd){
    for(int i=0;i<cmd.length();i++){
        switch ((int)cmd[i])
        {
        case (int)'R':
            rev=!rev;
            break;
        case (int)'D':
            if(dq.empty()){
                return false;
            }
            if(rev){
                dq.pop_back();
            }
            else{
                dq.pop_front();
            }
            break;  
        default:
            break;
        }
    }
    return true;
}
void dq_prn(){
    if(rev){
        reverse(dq.begin(),dq.end());
    }
    cout<<'[';
    while(!dq.empty()){
        cout<<dq.front();
        dq.pop_front();
        if(!dq.empty()){
            cout<<',';
        }
    }
    cout<<']'<<'\n';
}
void dq_input(){
    string nums;
    cin>>nums;
    string temp = "";
		for (int i = 1; i < nums.length(); i++)
		{
			if (nums[i] == ',' || nums[i] == ']')
			{
				if (temp != "")
				{
					dq.push_back(stoi(temp));
					temp = "";
				}
			}
			else
			{
				temp += nums[i];
			}
		}

}