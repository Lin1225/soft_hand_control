// Generated by gencpp from file qb_device_srvs/InitializeDeviceRequest.msg
// DO NOT EDIT!


#ifndef QB_DEVICE_SRVS_MESSAGE_INITIALIZEDEVICEREQUEST_H
#define QB_DEVICE_SRVS_MESSAGE_INITIALIZEDEVICEREQUEST_H


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
struct InitializeDeviceRequest_
{
  typedef InitializeDeviceRequest_<ContainerAllocator> Type;

  InitializeDeviceRequest_()
    : id(0)
    , activate(false)
    , rescan(false)
    , max_repeats(0)  {
    }
  InitializeDeviceRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , activate(false)
    , rescan(false)
    , max_repeats(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef uint8_t _activate_type;
  _activate_type activate;

   typedef uint8_t _rescan_type;
  _rescan_type rescan;

   typedef int32_t _max_repeats_type;
  _max_repeats_type max_repeats;





  typedef boost::shared_ptr< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InitializeDeviceRequest_

typedef ::qb_device_srvs::InitializeDeviceRequest_<std::allocator<void> > InitializeDeviceRequest;

typedef boost::shared_ptr< ::qb_device_srvs::InitializeDeviceRequest > InitializeDeviceRequestPtr;
typedef boost::shared_ptr< ::qb_device_srvs::InitializeDeviceRequest const> InitializeDeviceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d69fcec3a38c9f637f3b8a74cff24b49";
  }

  static const char* value(const ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd69fcec3a38c9f63ULL;
  static const uint64_t static_value2 = 0x7f3b8a74cff24b49ULL;
};

template<class ContainerAllocator>
struct DataType< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qb_device_srvs/InitializeDeviceRequest";
  }

  static const char* value(const ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
int32 id\n\
bool activate\n\
bool rescan\n\
int32 max_repeats\n\
";
  }

  static const char* value(const ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.activate);
      stream.next(m.rescan);
      stream.next(m.max_repeats);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InitializeDeviceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qb_device_srvs::InitializeDeviceRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "activate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.activate);
    s << indent << "rescan: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rescan);
    s << indent << "max_repeats: ";
    Printer<int32_t>::stream(s, indent + "  ", v.max_repeats);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QB_DEVICE_SRVS_MESSAGE_INITIALIZEDEVICEREQUEST_H