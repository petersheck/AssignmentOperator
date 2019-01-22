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
    std::cout << "Default Constructing" << std::endl;
    m_pData = NULL;
}

// Constructor
CMyString::CMyString(char* pData)
{
    m_pData = new char[strlen(pData) + 1];
    strcpy(m_pData, pData);
    std::cout << "Constructing = " << m_pData << " @ "
            << static_cast<void*>(m_pData) << std::endl;
}

// Copy Constructor
CMyString::CMyString(const CMyString& other)
{
    m_pData = new char[strlen(other.m_pData) + 1];
    strcpy(m_pData, other.m_pData);
    std::cout << "Copy Constructing = " << m_pData << " @ "
            << static_cast<void*>(m_pData) << " from "
            << static_cast<void*>(other.m_pData) << std::endl;
}

// Move Constructor
CMyString::CMyString(CMyString&& other)
{
    m_pData = other.m_pData;
    m_pData = nullptr;
    std::cout << "Move Constructing = " << m_pData << " @ "
            << static_cast<void*>(m_pData) << std::endl;
}

// Copy Assignment Operator
CMyString& CMyString::operator=(const CMyString& other)
{
    if (this == &other)
    {
        return *this;
    }

    freeMemory();

    m_pData = new char[strlen(other.m_pData) + 1];
    strcpy(m_pData, other.m_pData);

    std::cout << "Copy Assigning = " << m_pData << " @ "
            << static_cast<void*>(m_pData) << " from "
            << static_cast<void*>(other.m_pData) << std::endl;

    return *this;
}

// Move Assignment Operator
CMyString& CMyString::operator=(CMyString&& other)
{
    if (this == &other)
    {
        return *this;
    }

    freeMemory();

    m_pData = other.m_pData;
    other.m_pData = nullptr;

    std::cout << "Move Assigning = " << m_pData << " @ "
            << static_cast<void*>(m_pData) << std::endl;

    return *this;
}

// Default Destructor
CMyString::~CMyString()
{
    freeMemory();
}

void CMyString::freeMemory()
{
    if (m_pData == nullptr)
    {
        std::cout << "No Memory to Free = nullptr" << std::endl;
    }
    else
    {
        std::cout << "Free Memory = " << m_pData << " @ "
                << static_cast<void*>(m_pData) << std::endl;
        delete[] m_pData;
    }
}

char* CMyString::getMyString() const
{
    return m_pData;
}
