//
// Created by Zdeněk Pašek on 16/12/2018.
//

#include "Osoba.h"

Osoba::Osoba() {}

Osoba::Osoba(const string &jmeno, const string &prijmeni, const string &datumNar) : jmeno(jmeno), prijmeni(prijmeni),
                                                                                    datumNar(datumNar) {

    this->jmeno = jmeno;
    this->prijmeni = prijmeni;
    this->datumNar = datumNar;
}
//gettery
const string &Osoba::getJmeno() const {
    return jmeno;
}
const string &Osoba::getPrijmeni() const {
    return prijmeni;
}
const string &Osoba::getDatumNar() const {
    return datumNar;
}


//settery
void Osoba::setJmeno(const string &jmeno) {
    Osoba::jmeno = jmeno;
}
void Osoba::setPrijmeni(const string &prijmeni) {
    Osoba::prijmeni = prijmeni;
}
void Osoba::setDatumNar(const string &datumNar) {
    Osoba::datumNar = datumNar;
}
