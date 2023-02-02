#pragma once

enum Education {
	bez_ukonceneho_vzdelania,
	zakladne_vzdelanie,
	stredne_odborne_vzdelanie,
	uplne_stredne_vzdelanie,
	vyssie_odborne_vzdelanie,
	vysokoskolske_vzdelanie,
	bez_skolskeho_vzdelania,
	nezistene,
	neexituje
};

class EduTrans {
public:
	Education educationINInt(int edu) {
		switch (edu)
		{
		case 0:
			return bez_skolskeho_vzdelania;
		case 1:
			return zakladne_vzdelanie;
		case 2:
			return stredne_odborne_vzdelanie;
		case 3:
			return uplne_stredne_vzdelanie;
		case 4:
			return vyssie_odborne_vzdelanie;
		case 5:
			return vysokoskolske_vzdelanie;
		case 6:
			return bez_skolskeho_vzdelania;
		case 7:
			return nezistene;
		default:
			return neexituje;
		}
	}

	std::wstring educationOUTString(int edu) {
		switch (edu)
		{
		case 0:
			return L"Bez �kolsk�ho vzdelania";
		case 1:
			return  L"z�kladn� vzdelanie";
		case 2:
			return  L"stredn� odborn� (u��ovsk�) vzdelanie (bez maturity)";
		case 3:
			return L"�pln� stredn� vzdelanie (s maturitou)";
		case 4:
			return L"vy��ie odborn� vzdelanie";
		case 5:
			return L"vysoko�kolsk� vzdelanie";
		case 6:
			return L"bez �kolsk�ho vzdelania � osoby vo veku 15 rokov a viac";
		case 7:
			return L"nezisten�";
		default:
			return L"pod zadanym cislom neevidujeme ziadne vzdelanie";
		}
	}
};