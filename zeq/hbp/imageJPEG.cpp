// Generated by zerobufCxx.py
#include "imageJPEG.h"
#include <zerobuf/jsoncpp/json/json.h>
#include <iostream>

namespace zeq
{
namespace hbp
{
template< class Alloc >
typename ImageJPEGBase< Alloc >::Data ImageJPEGBase< Alloc >::getData()
{
    return Data( getAllocator( ));
}

template< class Alloc >
typename ImageJPEGBase< Alloc >::ConstData ImageJPEGBase< Alloc >::getData() const
{
    return ConstData( getAllocator( ));
}

template< class Alloc >
void ImageJPEGBase< Alloc >::setData( uint8_t const * value, size_t size )
{
    _setZerobufArray( value, size * sizeof( uint8_t ), 0 );
}

template< class Alloc >
std::string ImageJPEGBase< Alloc >::getDataString() const
{
    const uint8_t* ptr = getAllocator()->template getDynamic< const uint8_t >( 0 );
    return std::string( ptr, ptr + getAllocator()->template getItem< uint64_t >( 12 ));
}

template< class Alloc >
void ImageJPEGBase< Alloc >::setData( const std::string& value )
{
    _setZerobufArray( value.c_str(), value.length(), 0 );
}


template< class Alloc >
bool ImageJPEGBase< Alloc >::readJSON( const std::string& json )
{
    Json::Value dict;
    if( !_parseJSON( json, dict ))
        return false;

    if( dict.isMember( "data" ))
        std::cout << "data" << ':' << dict[ "data" ].toStyledString() << std::endl;
    return true;
}

template< class Alloc >
ImageJPEGBase< Alloc >::ImageJPEGBase()
    : zerobuf::Zerobuf( new Alloc( 20, 1 ))
{}


template< class Alloc >
ImageJPEGBase< Alloc >::ImageJPEGBase( const ImageJPEGBase& from )
    : zerobuf::Zerobuf( new Alloc( *static_cast< const Alloc* >( from.getAllocator( ))))
{}

template< class Alloc >
ImageJPEGBase< Alloc >& ImageJPEGBase< Alloc >::operator = ( const ImageJPEGBase& rhs )
{
    ::zerobuf::Zerobuf::operator = ( rhs );
    return *this;
}

template< class Alloc >
template< class T > void ImageJPEGBase< Alloc >::_setZerobufArray( const T* data, const size_t size, const size_t arrayNum )
{
    void* array = getAllocator()->updateAllocation( arrayNum, size );
    ::memcpy( array, data, size );
}


template class ImageJPEGBase< ::zerobuf::NonMovingAllocator >;
}
}
