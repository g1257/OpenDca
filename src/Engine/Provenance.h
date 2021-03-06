/*
Copyright (c) 2014, UT-Battelle, LLC

OpenDca, Version 1.0

This file is part of OpenDca.
OpenDca is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
OpenDca is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with OpenDca. If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef PROVENANCE_H
#define PROVENANCE_H
#include "Version.h" // do not commit this file, created dynamically

class Provenance {

public:

}; // Provenance

std::ostream& operator<<(std::ostream& os,const Provenance &prov)
{
	os<<"OpenDca: revision: "<<dynamicClusterApproxRevision<<"\n";
	os<<"OpenDca: diff: "<<dynamicClusterApproxDiff<<"\n";
	os<<"PsimagLite: revision: "<<psimagLiteRevision<<"\n";
	os<<"PsimagLite: diff: "<<psimagLiteDiff<<"\n";
	return os;
}

#endif // PROVENANCE_H

