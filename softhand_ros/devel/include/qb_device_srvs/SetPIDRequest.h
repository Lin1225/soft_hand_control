// Generated by gencpp from file qb_device_srvs/SetPIDRequest.msg
// DO NOT EDIT!


#ifndef QB_DEVICE_SRVS_MESSAGE_SETPIDREQUEST_H
#define QB_DEVICE_SRVS_MESSAGE_SETPIDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace qb_device_srvs
{
template <class ContainerAllocator>
struct SetPIDRequest_
{
  typedef SetPIDRequest_<ContainerAllocator> Type;

  SetPIDRequest_()
    : id(0)
    , max_repeats(0)
    , p(0.0)
    , i(0.0)
    , d(0.0)  {
    }
  SetPIDRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , max_repeats(0)
    , p(0.0)
    , i(0.0)
    , d(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _max_repeats_type;
  _max_repeats_type max_repeats;

   typedef float _p_type;
  _p_type p;

   typedef float _i_type;
  _i_type i;

   typedef float _d_type;
  _d_type d;





  typedef boost::shared_ptr< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPIDRequest_

typedef ::qb_device_srvs::SetPIDRequest_<std::allocator<void> > SetPIDRequest;

typedef boost::shared_ptr< ::qb_device_srvs::SetPIDRequest > SetPIDRequestPtr;
typedef boost::shared_ptr< ::qb_device_srvs::SetPIDRequest const> SetPIDRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace qb_device_srvs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'qb_device_msgs': ['/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc65c5e2e1370541c789de54fc9b025c";
  }

  static const char* value(const ::qb_device_srvs::SetPIDRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc65c5e2e1370541ULL;
  static const uint64_t static_value2 = 0xc789de54fc9b025cULL;
};

template<class ContainerAllocator>
struct DataType< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qb_device_srvs/SetPIDRequest";
  }

  static const char* value(const ::qb_device_srvs::SetPIDRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
int32 id\n\
int32 max_repeats\n\
float32 p\n\
float32 i\n\
float32 d\n\
";
  }

  static const char* value(const ::qb_device_srvs::SetPIDRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.max_repeats);
      stream.next(m.p);
      stream.next(m.i);
      stream.next(m.d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPIDRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qb_device_srvs::SetPIDRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qb_device_srvs::SetPIDRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "max_repeats: ";
    Printer<int32_t>::stream(s, indent + "  ", v.max_repeats);
    s << indent << "p: ";
    Printer<float>::stream(s, indent + "  ", v.p);
    s << indent << "i: ";
    Printer<float>::stream(s, indent + "  ", v.i);
    s << indent << "d: ";
    Printer<float>::stream(s, indent + "  ", v.d);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QB_DEVICE_SRVS_MESSAGE_SETPIDREQUEST_H