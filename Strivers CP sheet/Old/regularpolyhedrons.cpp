#include<bits/stdc++.h> 
using namespace std; 

int main(){
  int n;
  cin >> n;
  string name;
  map<string, int> mapper;
  for (int i = 0; i <= n - 1;i++)
  {
    cin >> name;
    if(name=="Tetrahedron")
      mapper["Tedrahedron"] = mapper["Tedrahedron"] + 4;
    else if (name == "Cube")
        mapper["Cube"] = mapper["Cube"] + 6;
    else if (name == "Octahedron")
        mapper["Octahedron"] = mapper["Octahedron"] + 8;
    else if (name == "Dodecahedron")
        mapper["Dodecahedron"] = mapper["Dodecahedron"] + 12;
    else mapper["Icosahedron"] = mapper["Icosahedron"] + 20;
}
int sum = 0;
for(auto pair:mapper){
  sum = sum + pair.second
}

cout << sum << endl;

return 0;
}