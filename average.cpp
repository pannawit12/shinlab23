#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc,char *argv[]){
    if(argc==1) {
        cout<<"Please input numbers to find average.";
        return 0;
    }
    double x;
    for(int i=0;i<argc;i++){
        x+=atoi(argv[i]);
    }
    cout<<"---------------------------------\nAverage of "<<argc-1<<" numbers = "<<x/(argc-1)<<"\n---------------------------------";
    return 0;
}