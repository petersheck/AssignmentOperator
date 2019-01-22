/*
 * CMyString.hpp
 *
 *  Created on: Jan 14, 2019
 *      Author: petersheck
 */

#include <cstddef>

#ifndef CMYSTRING_HPP_
#define CMYSTRING_HPP_

class CMyString
{
public:
    CMyString();
    CMyString(char* pData);
    CMyString(const CMyString& other);
    virtual ~CMyString();
    CMyString& operator=(const CMyString& other);
    char* getMyString() const;
private:
    char* m_pData;
};

#endif /* CMYSTRING_HPP_ */
