#include <iostream>

bool eh_primo(int x){
	for (size_t i = 2; i < x; i++)
    if (x%i == 0) return false;
  return true;
}

int main(){
	int x;
	std::cin>>x;

	if(eh_primo(x))  std::cout<<"S"<<"\n";
	else std::cout<<"N"<<"\n";
}
