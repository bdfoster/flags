/**
 * @file        Flags.cpp
 * @author      Brian D. Foster
 * @copyright   The MIT License (MIT)
 */

#ifndef _FLAGS_CPP_
#define _FLAGS_CPP_

// Include header file
#include "Flags.h"

//
// Flags (void)
//
Flags::Flags (void)
{
}

//
// ~Flags (void)
//
Flags::~Flags (void)
{
}

//
// void set (flag)
//
void Flags::set (std::string flag)
{
    for (size_t i = 0; i < this->_key->size(); i++) {
        if (this->_key->at(i) == flag) {
            this->_value->at(i) = true;
            return;
        }
    }

    this->_key->push_back(flag);
    this->_value->push_back(true);
}

//
// void unset (flag)
//
void Flags::unset (std::string flag)
{
    for (size_t i = 0; i < this->_key->size(); i++) {
        if (this->_key->at(i) == flag) {
            this->_value->at(i) == false;
            return;
        }
    }
}

//
// bool read (std::string flag)
//
bool Flags::read (std::string flag)
{
    for (size_t i = 0; i < this->_key->size(); i++) {
        if (this->_key->at(i) == flag) {
            return this->_value->at(i);
        }
    }
    return false; 
}

//
// void clear (void)
//
void Flags::clear (void)
{
    this->_key->clear();
    this->_value->clear();
}

#endif // _FLAGS_CPP_
