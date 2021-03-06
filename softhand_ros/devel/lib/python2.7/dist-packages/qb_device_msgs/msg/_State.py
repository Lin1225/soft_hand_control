# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from qb_device_msgs/State.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import qb_device_msgs.msg

class State(genpy.Message):
  _md5sum = "035992012f0af1c782c17a0f8f6e544c"
  _type = "qb_device_msgs/State"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# State message valid for either qbhand or qbmove

# either qbhand or qbmove:
#  - motors: position, command in [ticks], velocity in [ticks/s], effort in [mA]
qb_device_msgs/ResourceData[] actuators

# qbhand:
#  - closure: position, command in [0,1], velocity in [percent/s],  effort in [A].
# qbmove:
#  - shaft: position, command in [radians], velocity in [radians/s], effort in [A];
#  - preset: position, command in [0,1], velocity in [percent/s], effort is not used.
qb_device_msgs/ResourceData[] joints

# Reliability of the retrieved measurements
bool is_reliable
int32 consecutive_failures
================================================================================
MSG: qb_device_msgs/ResourceData
# Device-independent resource data message

string name
float64 position
float64 velocity
float64 effort
float64 command"""
  __slots__ = ['actuators','joints','is_reliable','consecutive_failures']
  _slot_types = ['qb_device_msgs/ResourceData[]','qb_device_msgs/ResourceData[]','bool','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       actuators,joints,is_reliable,consecutive_failures

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(State, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.actuators is None:
        self.actuators = []
      if self.joints is None:
        self.joints = []
      if self.is_reliable is None:
        self.is_reliable = False
      if self.consecutive_failures is None:
        self.consecutive_failures = 0
    else:
      self.actuators = []
      self.joints = []
      self.is_reliable = False
      self.consecutive_failures = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.actuators)
      buff.write(_struct_I.pack(length))
      for val1 in self.actuators:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_4d().pack(_x.position, _x.velocity, _x.effort, _x.command))
      length = len(self.joints)
      buff.write(_struct_I.pack(length))
      for val1 in self.joints:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_4d().pack(_x.position, _x.velocity, _x.effort, _x.command))
      _x = self
      buff.write(_get_struct_Bi().pack(_x.is_reliable, _x.consecutive_failures))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.actuators is None:
        self.actuators = None
      if self.joints is None:
        self.joints = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.actuators = []
      for i in range(0, length):
        val1 = qb_device_msgs.msg.ResourceData()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 32
        (_x.position, _x.velocity, _x.effort, _x.command,) = _get_struct_4d().unpack(str[start:end])
        self.actuators.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joints = []
      for i in range(0, length):
        val1 = qb_device_msgs.msg.ResourceData()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 32
        (_x.position, _x.velocity, _x.effort, _x.command,) = _get_struct_4d().unpack(str[start:end])
        self.joints.append(val1)
      _x = self
      start = end
      end += 5
      (_x.is_reliable, _x.consecutive_failures,) = _get_struct_Bi().unpack(str[start:end])
      self.is_reliable = bool(self.is_reliable)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.actuators)
      buff.write(_struct_I.pack(length))
      for val1 in self.actuators:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_4d().pack(_x.position, _x.velocity, _x.effort, _x.command))
      length = len(self.joints)
      buff.write(_struct_I.pack(length))
      for val1 in self.joints:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_4d().pack(_x.position, _x.velocity, _x.effort, _x.command))
      _x = self
      buff.write(_get_struct_Bi().pack(_x.is_reliable, _x.consecutive_failures))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.actuators is None:
        self.actuators = None
      if self.joints is None:
        self.joints = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.actuators = []
      for i in range(0, length):
        val1 = qb_device_msgs.msg.ResourceData()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 32
        (_x.position, _x.velocity, _x.effort, _x.command,) = _get_struct_4d().unpack(str[start:end])
        self.actuators.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joints = []
      for i in range(0, length):
        val1 = qb_device_msgs.msg.ResourceData()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 32
        (_x.position, _x.velocity, _x.effort, _x.command,) = _get_struct_4d().unpack(str[start:end])
        self.joints.append(val1)
      _x = self
      start = end
      end += 5
      (_x.is_reliable, _x.consecutive_failures,) = _get_struct_Bi().unpack(str[start:end])
      self.is_reliable = bool(self.is_reliable)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_Bi = None
def _get_struct_Bi():
    global _struct_Bi
    if _struct_Bi is None:
        _struct_Bi = struct.Struct("<Bi")
    return _struct_Bi
