// Generated by gencpp from file qb_device_srvs/GetMeasurementsResponse.msg
// DO NOT EDIT!


#ifndef QB_DEVICE_SRVS_MESSAGE_GETMEASUREMENTSRESPONSE_H
#define QB_DEVICE_SRVS_MESSAGE_GETMEASUREMENTSRESPONSE_H


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
struct GetMeasurementsResponse_
{
  typedef GetMeasurementsResponse_<ContainerAllocator> Type;

  GetMeasurementsResponse_()
    : success(false)
    , failures(0)
    , positions()
    , currents()
    , stamp()  {
    }
  GetMeasurementsResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , failures(0)
    , positions(_alloc)
    , currents(_alloc)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef int32_t _failures_type;
  _failures_type failures;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _positions_type;
  _positions_type positions;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _currents_type;
  _currents_type currents;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetMeasurementsResponse_

typedef ::qb_device_srvs::GetMeasurementsResponse_<std::allocator<void> > GetMeasurementsResponse;

typedef boost::shared_ptr< ::qb_device_srvs::GetMeasurementsResponse > GetMeasurementsResponsePtr;
typedef boost::shared_ptr< ::qb_device_srvs::GetMeasurementsResponse const> GetMeasurementsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d756e2f3b6c32ca114fce72984e55547";
  }

  static const char* value(const ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd756e2f3b6c32ca1ULL;
  static const uint64_t static_value2 = 0x14fce72984e55547ULL;
};

template<class ContainerAllocator>
struct DataType< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qb_device_srvs/GetMeasurementsResponse";
  }

  static const char* value(const ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool success\n\
int32 failures\n\
int16[] positions\n\
int16[] currents\n\
time stamp\n\
";
  }

  static const char* value(const ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.failures);
      stream.next(m.positions);
      stream.next(m.currents);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMeasurementsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qb_device_srvs::GetMeasurementsResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "failures: ";
    Printer<int32_t>::stream(s, indent + "  ", v.failures);
    s << indent << "positions[]" << std::endl;
    for (size_t i = 0; i < v.positions.size(); ++i)
    {
      s << indent << "  positions[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.positions[i]);
    }
    s << indent << "currents[]" << std::endl;
    for (size_t i = 0; i < v.currents.size(); ++i)
    {
      s << indent << "  currents[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.currents[i]);
    }
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QB_DEVICE_SRVS_MESSAGE_GETMEASUREMENTSRESPONSE_H
