#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Warlock{
	private:
		string name;
		string title;
		Warlock();
		Warlock(const Warlock& obj);
		Warlock& operator=(const Warlock& obj);
	public:
		~Warlock();
		Warlock(const string &name, const string &title);
	
		void 	setName(const string& name);
		void 	setTitle(const string& t);
		const 	string& getTitle() const;
		const 	string& getName() const;
		void	introduce() const;
};

#endif