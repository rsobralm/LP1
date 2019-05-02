#define MAXCANAL 66
#define MINCANAL 0

class Televisao
{
private:
	int volume, canal;

public:
	Televisao();
	int getVolume();
	int getCanal(); 
	void setCanal(int c);	
	void aumentarVolume();
	void diminuirVolume();
	void aumentarCanal();
	void diminuirCanal();
	
};




