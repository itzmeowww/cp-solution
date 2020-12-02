#include <bits/stdc++.h>
using namespace std;
int main(){

    int ns,nc,s,c;
    map<int,int>room;
    list<int>l;
    list<int>::iterator it;
    scanf(" %d %d",&nc,&ns);
    for(int i = 1;i<=ns;i++){
        scanf(" %d %d",&c,&s);
        room[s] = c;
    }
    char op;
    int id;
    while(1){
        scanf(" %c",&op);
        if(op == 'E'){
           scanf(" %d",&id);
           int have  = 0;
           int add=0;
           for(it = l.begin();it!=l.end();++it){
                //cout << room[*it] << " " << room[id] << endl;
                if(room[*it] == room[id]) have = 1;
                else if(have == 1){
                    l.insert(it,id);
                    add = 1;
                    break;
                }
           }

           if(have == 0){
                l.insert(l.end(),id);
           }
           if(have == 1 && add == 0){
                l.insert(l.end(),id);
           }

        }
        else if(op == 'D'){
            printf("%d\n",l.front());
            l.pop_front();
        }
        else if(op == 'X'){
            break;
        }
    //cout << endl;
    //for(it = l.begin();it!=l.end();++it){
    //    cout << *it <<" , ";
    //}
    //cout << endl;


    }
    printf("0");
}
