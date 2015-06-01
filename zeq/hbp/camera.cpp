// Generated by zerobufCxx.py
#include "camera.h"
#include <zerobuf/jsoncpp/json/json.h>
#include <iostream>

namespace zeq
{
namespace hbp
{
template< class Alloc >
typename CameraBase< Alloc >::Matrix CameraBase< Alloc >::getMatrix()
{
    return Matrix( getAllocator( ));
}

template< class Alloc >
typename CameraBase< Alloc >::ConstMatrix CameraBase< Alloc >::getMatrix() const
{
    return ConstMatrix( getAllocator( ));
}

template< class Alloc >
void CameraBase< Alloc >::setMatrix( float const * value, size_t size )
{
    _setZerobufArray( value, size * sizeof( float ), 0 );
}

template< class Alloc >
std::string CameraBase< Alloc >::getMatrixString() const
{
    const uint8_t* ptr = getAllocator()->template getDynamic< const uint8_t >( 0 );
    return std::string( ptr, ptr + getAllocator()->template getItem< uint64_t >( 12 ));
}

template< class Alloc >
void CameraBase< Alloc >::setMatrix( const std::string& value )
{
    _setZerobufArray( value.c_str(), value.length(), 0 );
}


template< class Alloc >
bool CameraBase< Alloc >::readJSON( const std::string& json )
{
    Json::Value dict;
    if( !_parseJSON( json, dict ))
        return false;

    if( dict.isMember( "matrix" ))
        std::cout << "matrix" << ':' << dict[ "matrix" ].toStyledString() << std::endl;
    return true;
}

template< class Alloc >
CameraBase< Alloc >::CameraBase()
    : zerobuf::Zerobuf( new Alloc( 20, 1 ))
{}


template< class Alloc >
CameraBase< Alloc >::CameraBase( const CameraBase& from )
    : zerobuf::Zerobuf( new Alloc( *static_cast< const Alloc* >( from.getAllocator( ))))
{}

template< class Alloc >
CameraBase< Alloc >& CameraBase< Alloc >::operator = ( const CameraBase& rhs )
{
    ::zerobuf::Zerobuf::operator = ( rhs );
    return *this;
}

template< class Alloc >
template< class T > void CameraBase< Alloc >::_setZerobufArray( const T* data, const size_t size, const size_t arrayNum )
{
    void* array = getAllocator()->updateAllocation( arrayNum, size );
    ::memcpy( array, data, size );
}


template class CameraBase< ::zerobuf::NonMovingAllocator >;
}
}
