/*
 * CMyString.cpp
 *
 *  Created on: January 14, 2019
 *      Author: petersheck
 */
#include <cstddef>
#include <iostream>
#include <cstring>
#include "CMyString.hpp"

// Default Constructor
CMyString::CMyString()
{
    std::cout << "Default Construct" << std::endl;
    m_pData = NULL;
}

// Constructor
CMyString::CMyString(char* pData)
{
    std::cout << "Construct" << std::endl;
    m_pData = new char[strlen(pData) + 1];
    strcpy(m_pData, pData);
}

// Copy Constructor
CMyString::CMyString(const CMyString& other)
{
    std::cout << "Copy Construct" << std::endl;
    m_pData = new char[strlen(other.m_pData) + 1];
    strcpy(m_pData, other.m_pData);
}

// Assignment Operator
CMyString& CMyString::operator=(const CMyString& other)
{
    std::cout << "Assignment" << std::endl;
    if (this == &other)
    {
        return *this;
    }

    delete[] m_pData;
    m_pData = new char[strlen(other.m_pData) + 1];
    strcpy(m_pData, other.m_pData);

    return *this;
}

// Default Destructor
CMyString::~CMyString()
{
    std::cout << "Destructor" << std::endl;
    delete[] m_pData;
}

char* CMyString::getMyString() const
{
    return m_pData;
}
