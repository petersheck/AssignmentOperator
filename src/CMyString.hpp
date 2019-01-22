/*
 * CMyString.hpp
 *
 *  Created on: January 14, 2019
 *      Author: petersheck
 */

#include <cstddef>

#ifndef CMYSTRING_HPP_
#define CMYSTRING_HPP_

class CMyString
{
public:
    // Constructors
    CMyString();
    CMyString(char* pData);
    CMyString(const CMyString& other);
    // Destructors
    virtual ~CMyString();
    // Assignment
    CMyString& operator=(const CMyString& other);
    // Accessors
    char* getMyString() const;
private:
    char* m_pData;
};

#endif /* CMYSTRING_HPP_ */
