#include <bits/stdc++.h>
using namespace std;
int main(){
	string x;
	string y;
	int z;
	int a;
	cout<<"(T14 1st Album 20photos)"<<endl;
	cout<<"Enter Folder Number(14 in T14)"<<endl;
	cin>>x;
	cout<<"Enter Album Number"<<endl;
	cin>>y;
	cout<<"Total Number number of photos"<<endl;
	cin>>z;
	cout<<"col-md-??"<<endl;
	cin>>a;
	string str="";
	string filename = "T\'"+x+"_P"+y+".html";
	ifstream outfile;
	outfile.open(filename.c_str());
	string content = "";
	int i;

    for(i=0 ; outfile.eof()!=true ; i++) // get content of outfile
    	content += outfile.get();

    i--;
    content.erase(content.end()-1);     // erase last character
    string str2="<!-- Main -->";
    outfile.close();
    std::size_t found = content.find(str2);

    ofstream myfile;
    myfile.open (filename.c_str());
    myfile<<content.substr(0,found);
    myfile<<endl<<str2<<endl;
    myfile<<"<section class='main-body'>"<<endl;
    myfile<<"<div class='container'>"<<endl;
    myfile<<"<div class='tiles'>"<<endl;

    myfile<<"<div class='row'>"<<endl;
    for(int i=1; i<=z; i++){
    	if( i % (12/a) == 1 ){
    		myfile<<"</div>"<<endl;
    		myfile<<"<div class='row'>"<<endl;
    	}
    	myfile<<"<div class='col-md-"<<a<<"'>"<<endl;
    	myfile<<"<a href='#test-popup-"<<i<<"' class='open-popup-link'>"<<endl;
    	myfile<<"<img src=\"./photos/T'"<<x<<"/"<<y<<"/"<<i<<".jpg\" class='img-responsive' alt='Responsive image'>"<<endl;
    	myfile<<"</a>"<<endl;
    	myfile<<"<div id='test-popup-"<<i<<"' class='white-popup mfp-hide'>"<<endl;
    	myfile<<"<div class='container-fluid'>"<<endl;
    	myfile<<"<div class='row'>"<<endl;
    	myfile<<"<div class='pop-up-color'>"<<endl;
    	myfile<<"<div class='col-md-12 p-l-0 p-r-0'>"<<endl;
    	myfile<<"<img src=\"./photos/T'"<<x<<"/"<<y<<"/"<<i<<".jpg\" class='img-responsive' alt='Responsive image'>"<<endl;
    	myfile<<"</div>"<<endl;
    	myfile<<"</div>"<<endl;
    	myfile<<"</div>"<<endl;
    	myfile<<"</div>"<<endl;
    	myfile<<"</div>"<<endl;
    	myfile<<"</div>"<<endl;
    }
    myfile<<"</div>"<<endl;
    myfile<<"</div>"<<endl;
    myfile<<"</div>"<<endl;
    myfile<<"</section>"<<endl;



    myfile<<"<script src=\"./Volcán_files/jquery-3.1.0.min.js\"></script>"<<endl;
    myfile<<"<script src=\"./Volcán_files/bootstrap.min.js\"></script>"<<endl;
    myfile<<"<script src=\"./Volcán_files/jquery.magnific-popup.min.js\"></script>"<<endl;

    myfile<<"<script src=\"./Volcán_files/script.js\"></script>"<<endl;



    myfile<<"</body>"<<endl;
    myfile<<"</html>"<<endl;




    myfile.close();
    return 0;
}