// Generated by gencpp from file qb_device_srvs/SetPIDResponse.msg
// DO NOT EDIT!


#ifndef QB_DEVICE_SRVS_MESSAGE_SETPIDRESPONSE_H
#define QB_DEVICE_SRVS_MESSAGE_SETPIDRESPONSE_H


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
struct SetPIDResponse_
{
  typedef SetPIDResponse_<ContainerAllocator> Type;

  SetPIDResponse_()
    : success(false)
    , failures(0)  {
    }
  SetPIDResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , failures(0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef int32_t _failures_type;
  _failures_type failures;





  typedef boost::shared_ptr< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetPIDResponse_

typedef ::qb_device_srvs::SetPIDResponse_<std::allocator<void> > SetPIDResponse;

typedef boost::shared_ptr< ::qb_device_srvs::SetPIDResponse > SetPIDResponsePtr;
typedef boost::shared_ptr< ::qb_device_srvs::SetPIDResponse const> SetPIDResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45434ccc588901681d58dcbb05939d8a";
  }

  static const char* value(const ::qb_device_srvs::SetPIDResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45434ccc58890168ULL;
  static const uint64_t static_value2 = 0x1d58dcbb05939d8aULL;
};

template<class ContainerAllocator>
struct DataType< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qb_device_srvs/SetPIDResponse";
  }

  static const char* value(const ::qb_device_srvs::SetPIDResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool success\n\
int32 failures\n\
";
  }

  static const char* value(const ::qb_device_srvs::SetPIDResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.failures);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPIDResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qb_device_srvs::SetPIDResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qb_device_srvs::SetPIDResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "failures: ";
    Printer<int32_t>::stream(s, indent + "  ", v.failures);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QB_DEVICE_SRVS_MESSAGE_SETPIDRESPONSE_H