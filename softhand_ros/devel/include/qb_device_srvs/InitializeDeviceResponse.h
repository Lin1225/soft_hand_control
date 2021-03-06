// Generated by gencpp from file qb_device_srvs/InitializeDeviceResponse.msg
// DO NOT EDIT!


#ifndef QB_DEVICE_SRVS_MESSAGE_INITIALIZEDEVICERESPONSE_H
#define QB_DEVICE_SRVS_MESSAGE_INITIALIZEDEVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <qb_device_msgs/Info.h>

namespace qb_device_srvs
{
template <class ContainerAllocator>
struct InitializeDeviceResponse_
{
  typedef InitializeDeviceResponse_<ContainerAllocator> Type;

  InitializeDeviceResponse_()
    : success(false)
    , failures(0)
    , message()
    , info()  {
    }
  InitializeDeviceResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , failures(0)
    , message(_alloc)
    , info(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef int32_t _failures_type;
  _failures_type failures;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;

   typedef  ::qb_device_msgs::Info_<ContainerAllocator>  _info_type;
  _info_type info;





  typedef boost::shared_ptr< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct InitializeDeviceResponse_

typedef ::qb_device_srvs::InitializeDeviceResponse_<std::allocator<void> > InitializeDeviceResponse;

typedef boost::shared_ptr< ::qb_device_srvs::InitializeDeviceResponse > InitializeDeviceResponsePtr;
typedef boost::shared_ptr< ::qb_device_srvs::InitializeDeviceResponse const> InitializeDeviceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace qb_device_srvs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'qb_device_msgs': ['/home/iclab/softhand_ros/src/qbdevice-ros/qb_device_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ca8d9ac609becacaeb0eb6f956dfdcc";
  }

  static const char* value(const ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ca8d9ac609becacULL;
  static const uint64_t static_value2 = 0xaeb0eb6f956dfdccULL;
};

template<class ContainerAllocator>
struct DataType< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qb_device_srvs/InitializeDeviceResponse";
  }

  static const char* value(const ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool success\n\
int32 failures\n\
string message\n\
qb_device_msgs/Info info\n\
\n\
================================================================================\n\
MSG: qb_device_msgs/Info\n\
# Standard device-independent info message\n\
\n\
int32 id\n\
string serial_port\n\
int32 max_repeats\n\
bool get_positions\n\
bool get_currents\n\
bool get_distinct_packages\n\
bool set_commands\n\
bool set_commands_async\n\
int32[] position_limits\n\
int32[] encoder_resolutions\n\
";
  }

  static const char* value(const ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.failures);
      stream.next(m.message);
      stream.next(m.info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InitializeDeviceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qb_device_srvs::InitializeDeviceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "failures: ";
    Printer<int32_t>::stream(s, indent + "  ", v.failures);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
    s << indent << "info: ";
    s << std::endl;
    Printer< ::qb_device_msgs::Info_<ContainerAllocator> >::stream(s, indent + "  ", v.info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QB_DEVICE_SRVS_MESSAGE_INITIALIZEDEVICERESPONSE_H
