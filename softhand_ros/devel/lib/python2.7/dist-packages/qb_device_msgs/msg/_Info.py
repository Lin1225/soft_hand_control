# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from qb_device_msgs/Info.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Info(genpy.Message):
  _md5sum = "23e1d3369475a5fe4f6f0a023216ba00"
  _type = "qb_device_msgs/Info"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Standard device-independent info message

int32 id
string serial_port
int32 max_repeats
bool get_positions
bool get_currents
bool get_distinct_packages
bool set_commands
bool set_commands_async
int32[] position_limits
int32[] encoder_resolutions"""
  __slots__ = ['id','serial_port','max_repeats','get_positions','get_currents','get_distinct_packages','set_commands','set_commands_async','position_limits','encoder_resolutions']
  _slot_types = ['int32','string','int32','bool','bool','bool','bool','bool','int32[]','int32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,serial_port,max_repeats,get_positions,get_currents,get_distinct_packages,set_commands,set_commands_async,position_limits,encoder_resolutions

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Info, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.serial_port is None:
        self.serial_port = ''
      if self.max_repeats is None:
        self.max_repeats = 0
      if self.get_positions is None:
        self.get_positions = False
      if self.get_currents is None:
        self.get_currents = False
      if self.get_distinct_packages is None:
        self.get_distinct_packages = False
      if self.set_commands is None:
        self.set_commands = False
      if self.set_commands_async is None:
        self.set_commands_async = False
      if self.position_limits is None:
        self.position_limits = []
      if self.encoder_resolutions is None:
        self.encoder_resolutions = []
    else:
      self.id = 0
      self.serial_port = ''
      self.max_repeats = 0
      self.get_positions = False
      self.get_currents = False
      self.get_distinct_packages = False
      self.set_commands = False
      self.set_commands_async = False
      self.position_limits = []
      self.encoder_resolutions = []

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
      buff.write(_get_struct_i().pack(self.id))
      _x = self.serial_port
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_i5B().pack(_x.max_repeats, _x.get_positions, _x.get_currents, _x.get_distinct_packages, _x.set_commands, _x.set_commands_async))
      length = len(self.position_limits)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.position_limits))
      length = len(self.encoder_resolutions)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.encoder_resolutions))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (self.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.serial_port = str[start:end].decode('utf-8')
      else:
        self.serial_port = str[start:end]
      _x = self
      start = end
      end += 9
      (_x.max_repeats, _x.get_positions, _x.get_currents, _x.get_distinct_packages, _x.set_commands, _x.set_commands_async,) = _get_struct_i5B().unpack(str[start:end])
      self.get_positions = bool(self.get_positions)
      self.get_currents = bool(self.get_currents)
      self.get_distinct_packages = bool(self.get_distinct_packages)
      self.set_commands = bool(self.set_commands)
      self.set_commands_async = bool(self.set_commands_async)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.position_limits = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.encoder_resolutions = struct.unpack(pattern, str[start:end])
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
      buff.write(_get_struct_i().pack(self.id))
      _x = self.serial_port
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_i5B().pack(_x.max_repeats, _x.get_positions, _x.get_currents, _x.get_distinct_packages, _x.set_commands, _x.set_commands_async))
      length = len(self.position_limits)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.position_limits.tostring())
      length = len(self.encoder_resolutions)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.encoder_resolutions.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (self.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.serial_port = str[start:end].decode('utf-8')
      else:
        self.serial_port = str[start:end]
      _x = self
      start = end
      end += 9
      (_x.max_repeats, _x.get_positions, _x.get_currents, _x.get_distinct_packages, _x.set_commands, _x.set_commands_async,) = _get_struct_i5B().unpack(str[start:end])
      self.get_positions = bool(self.get_positions)
      self.get_currents = bool(self.get_currents)
      self.get_distinct_packages = bool(self.get_distinct_packages)
      self.set_commands = bool(self.set_commands)
      self.set_commands_async = bool(self.set_commands_async)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.position_limits = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.encoder_resolutions = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
_struct_i5B = None
def _get_struct_i5B():
    global _struct_i5B
    if _struct_i5B is None:
        _struct_i5B = struct.Struct("<i5B")
    return _struct_i5B
