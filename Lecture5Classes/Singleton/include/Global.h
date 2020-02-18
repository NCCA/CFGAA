#ifndef GLOBAL_H__
#define GLOBAL_H__

#include <iostream>
#include <string>
/// @file Global.h
/// @class Global
/// @brief a simple demonstration of a singleton pattern
/// @author Jon Macey
/// @date 18/10/2010

class Global
{
	public :
    /// @brief to return the instance of the class
    /// @returns the constructed class
		static Global* Instance();
		inline int getPointSize() const {return m_pointSize;}
		inline std::string getColour() const {return m_colour;}
		inline std::string getDrawMode() const {return m_drawMode;}

	private :
    /// @brief the instance of the class
		static Global* m_pinstance;

    int m_pointSize;
    std::string m_colour;
    std::string m_drawMode;

    /// @brief private dtor so it can't be called
    inline ~Global(){;}
    /// @brief private ctor so it can't be called
    inline Global();
    /// @brief private copy ctor so it can't be called
    inline Global(const Global &_g ){;}

};

#endif
