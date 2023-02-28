#include<iostream>
using namespace std;
class Page {
protected:
	char* title, * dataofpage;
public:
	Page() {
		title = dataofpage = NULL;
	}
	void operator=(Page p) {
		p.title = new char[20];
		p.dataofpage = new char[80];
		for (int i = 0;i < 20;i++) {
			p.title[i] = title[i];
		}
		for (int i = 0;i < 80;i++) {
			p.dataofpage[i] = dataofpage[i];
		}
	}
	friend ostream& operator<<(ostream& op, Page& p) {
		for (int i = 0;p.title[i] != '\0';i++) {
			op << p.title[i];
		}
		cout << " : ";
		for (int i = 0;p.dataofpage[i] != '\0';i++) {
			op << p.dataofpage[i];
		}
		cout << endl;
		return op;
	}
	friend istream& operator>>(istream& ip, Page& p) {
		p.title = new char[20];
		cout << " Enter title for page: ";
		p.dataofpage = new char[80];
		ip.getline(p.title, 20);
		cout << " Enter data for page: ";
		ip.getline(p.dataofpage, 80);
		return ip;
	}
	void disp() {
	}
	~Page() {
		delete []title;
		delete []dataofpage;
	}
};
class Skillspage:public Page {};
class ExperiencePage : public Page {};
class IntroductionPage : public Page {};
class TableOfContentsPage : public Page {};
class Document {
protected:
	Page* pagelist;
public:
	Document() {
		createpages();
	}
	virtual void createpages() {}
	virtual void WriteDocument() {}//input>> in all pages from user
	virtual void PrintDocument() {}//print<< all pages to console. 
};
class Resume :public Document {
	Skillspage s1;ExperiencePage e1;
public:
	void createpage() {
		Page* pagelist[2];
		pagelist[0] = new Skillspage;
		pagelist[1] = new ExperiencePage;
	}
	void WriteDocument() {
		cout << " Enter titles(Skills,exp): \n";
		cin >> s1;
		cin >> e1;
	}
	void PrintDocument() {
		cout << " Intro and Table content is : \n";
		cout << s1;
		cout << endl;
		cout << e1;
	}
};
class Report : public Document {
	IntroductionPage i1;TableOfContentsPage t1;
public:
	void CreatePages() {
		Page* pagelist[2];
		pagelist[0] = new IntroductionPage;
		pagelist[1] = new TableOfContentsPage;
	}
	void WriteDocument() {
		cout << " Enter titles(Introduction,Table): \n";
		cin >> i1;
		cin >> t1;
	}
	void PrintDocument() {
		cout << " Intro and Table content is :\n ";
		cout << i1;
		cout << endl;
		cout << t1;
	}
};
int main() {
	Document* documents[2];
	documents[1] = new Report();
	documents[0] = new Resume();
	documents[0]->createpages();
	documents[1]->createpages();
	documents[0]->WriteDocument();
	documents[1]->WriteDocument();
	cout << endl;
	documents[0]->PrintDocument();
	cout << endl;
	documents[1]->PrintDocument();
	for (int i = 0;i < 2;i++) {
		delete documents[i];
	}
	return 0;
}
