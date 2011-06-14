///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtx_matrix_major_storage
/// @file glm/gtx/matrix_major_storage.hpp
/// @date 2006-04-19 / 2011-06-07
/// @author Christophe Riccio
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_matrix_major_storage GLM_GTX_matrix_major_storage: Build matrix
/// @ingroup gtx
/// 
/// @brief Build matrices with specific matrix order, row or column
/// 
/// <glm/gtx/matrix_major_storage.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#ifndef GLM_GTX_matrix_major_storage
#define GLM_GTX_matrix_major_storage 50

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTX_matrix_major_storage extension included")
#endif

namespace glm
{
	/// @addtogroup gtx_matrix_major_storage
	/// @{

	//! Build a row major matrix from row vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat2x2<T> rowMajor2(
		const detail::tvec2<T>& v1, 
		const detail::tvec2<T>& v2);
		
	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat2x2<T> rowMajor2(
		const detail::tmat2x2<T>& m);

	//! Build a row major matrix from row vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat3x3<T> rowMajor3(
		const detail::tvec3<T>& v1, 
		const detail::tvec3<T>& v2, 
		const detail::tvec3<T>& v3);

	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat3x3<T> rowMajor3(
		const detail::tmat3x3<T>& m);

	//! Build a row major matrix from row vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat4x4<T> rowMajor4(
		const detail::tvec4<T>& v1, 
		const detail::tvec4<T>& v2,
		const detail::tvec4<T>& v3, 
		const detail::tvec4<T>& v4);

	//! Build a row major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat4x4<T> rowMajor4(
		const detail::tmat4x4<T>& m);

	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat2x2<T> colMajor2(
		const detail::tvec2<T>& v1, 
		const detail::tvec2<T>& v2);
		
	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat2x2<T> colMajor2(
		const detail::tmat2x2<T>& m);

	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat3x3<T> colMajor3(
		const detail::tvec3<T>& v1, 
		const detail::tvec3<T>& v2, 
		const detail::tvec3<T>& v3);
		
	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat3x3<T> colMajor3(
		const detail::tmat3x3<T>& m);
		
	//! Build a column major matrix from column vectors.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat4x4<T> colMajor4(
		const detail::tvec4<T>& v1, 
		const detail::tvec4<T>& v2, 
		const detail::tvec4<T>& v3, 
		const detail::tvec4<T>& v4);
				
	//! Build a column major matrix from other matrix.
	//! From GLM_GTX_matrix_major_storage extension.
	template <typename T> 
	detail::tmat4x4<T> colMajor4(
		const detail::tmat4x4<T>& m);

	/// @}
}//namespace glm

#include "matrix_major_storage.inl"

#endif//GLM_GTX_matrix_major_storage
