#ifndef SDDS_CARGO_H
#define SDDS_CARGO_H

namespace sdds {


	const int MAX_DESC = 20;


	struct Cargo {

		char name[MAX_DESC + 1];
		double weight;

	};


}

#endif