// Generated by gencpp from file qb_device_srvs/SetCommandsRequest.msg
// DO NOT EDIT!


#ifndef QB_DEVICE_SRVS_MESSAGE_SETCOMMANDSREQUEST_H
#define QB_DEVICE_SRVS_MESSAGE_SETCOMMANDSREQUEST_H


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
struct SetCommandsRequest_
{
  typedef SetCommandsRequest_<ContainerAllocator> Type;

  SetCommandsRequest_()
    : id(0)
    , max_repeats(0)
    , set_commands(false)
    , set_commands_async(false)
    , commands()  {
    }
  SetCommandsRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , max_repeats(0)
    , set_commands(false)
    , set_commands_async(false)
    , commands(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _max_repeats_type;
  _max_repeats_type max_repeats;

   typedef uint8_t _set_commands_type;
  _set_commands_type set_commands;

   typedef uint8_t _set_commands_async_type;
  _set_commands_async_type set_commands_async;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _commands_type;
  _commands_type commands;





  typedef boost::shared_ptr< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCommandsRequest_

typedef ::qb_device_srvs::SetCommandsRequest_<std::allocator<void> > SetCommandsRequest;

typedef boost::shared_ptr< ::qb_device_srvs::SetCommandsRequest > SetCommandsRequestPtr;
typedef boost::shared_ptr< ::qb_device_srvs::SetCommandsRequest const> SetCommandsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ed52285e2ef154a04295dd634f128ae";
  }

  static const char* value(const ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ed52285e2ef154aULL;
  static const uint64_t static_value2 = 0x04295dd634f128aeULL;
};

template<class ContainerAllocator>
struct DataType< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qb_device_srvs/SetCommandsRequest";
  }

  static const char* value(const ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
int32 id\n\
int32 max_repeats\n\
bool set_commands\n\
bool set_commands_async\n\
int16[] commands\n\
";
  }

  static const char* value(const ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.max_repeats);
      stream.next(m.set_commands);
      stream.next(m.set_commands_async);
      stream.next(m.commands);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCommandsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qb_device_srvs::SetCommandsRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "max_repeats: ";
    Printer<int32_t>::stream(s, indent + "  ", v.max_repeats);
    s << indent << "set_commands: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.set_commands);
    s << indent << "set_commands_async: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.set_commands_async);
    s << indent << "commands[]" << std::endl;
    for (size_t i = 0; i < v.commands.size(); ++i)
    {
      s << indent << "  commands[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.commands[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // QB_DEVICE_SRVS_MESSAGE_SETCOMMANDSREQUEST_H
