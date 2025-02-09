#include<iostream>
using namespace std;
class PET{
    private:
        int o_weight;
        int w_weight;
        int pet_state();
        void cmd_E(int val);
        void cmd_F(int val);
    public:
        void p_def(int o,int w);
        void playing();
        void prn_state();
};
void PET::p_def(int o,int w){
    o_weight=o;
    w_weight=w;
}
int PET::pet_state(){
    if(w_weight<=0){
        return 0;
    }
    else if(o_weight<w_weight*2&&w_weight<o_weight*2){
        return 1;
    }
    else{
        return 2;
    }
}
void PET::prn_state(){
    const char *line[3]={"RIP",":-)",":-("};
    cout<<line[pet_state()]<<'\n';
}
void PET::playing(){
    char cmd;
    int val;
    while(1){
        cin>>cmd;
        if(cmd=='#'){
            cin>>val;
            break;
        }
        cin>>val;
        if(cmd=='F'){
            cmd_F(val);
        }
        else if(cmd=='E'){
            cmd_E(val);
        }
    }
}
void PET::cmd_E(int val){
    if(!pet_state()){
        return;
    }
    w_weight-=val;
}
void PET::cmd_F(int val){
    if(!pet_state()){
        return;
    }
    w_weight+=val;
}
int main(){
    int o,w;
    int idx=1;
    PET p;
    while(1){
        cin>>o;
        if(!o){
            break;
        }
        cin>>w;
        p.p_def(o,w);
        p.playing();
        cout<<idx++<<" ";
        p.prn_state();
    }
    return 0;
}