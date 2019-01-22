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
    CMyString(); // Default
    CMyString(char* pData); // Custom
    CMyString(const CMyString& other); // Copy
    CMyString(CMyString&& other); // Move
    // Destructors
    virtual ~CMyString();
    // Assignments
    CMyString& operator=(const CMyString& other); // Copy
    CMyString& operator=(CMyString&& other); // Move
    // Accessors
    char* getMyString() const;
private:
    void freeMemory();
    char* m_pData;
};

#endif /* CMYSTRING_HPP_ */
