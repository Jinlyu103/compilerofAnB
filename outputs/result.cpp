/******************************
  Program "result.m" compiled by "Caching Murphi Release 5.4.9.1"

  Murphi Last Compiled date: "Aug  7 2019"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9.1"
#define MURPHI_DATE "Aug  7 2019"
#define PROTOCOL_NAME "result"
#define BITS_IN_WORLD 7576
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_indexType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_indexType& val) { return mu__byte::operator=((int) val); };
  mu_1_indexType (const char *name, int os): mu__byte(0, 20, 5, name, os) {};
  mu_1_indexType (void): mu__byte(0, 20, 5) {};
  mu_1_indexType (int val): mu__byte(0, 20, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_indexType mu_1_indexType_undefined_var;

class mu_1_roleHostNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleHostNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleHostNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleHostNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleHostNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleHostNums mu_1_roleHostNums_undefined_var;

class mu_1_roleGatewayNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleGatewayNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleGatewayNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleGatewayNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleGatewayNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleGatewayNums mu_1_roleGatewayNums_undefined_var;

class mu_1_roleServerNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleServerNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleServerNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleServerNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleServerNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleServerNums mu_1_roleServerNums_undefined_var;

class mu_1_msgLen: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_msgLen& val) { return mu__byte::operator=((int) val); };
  mu_1_msgLen (const char *name, int os): mu__byte(0, 20, 5, name, os) {};
  mu_1_msgLen (void): mu__byte(0, 20, 5) {};
  mu_1_msgLen (int val): mu__byte(0, 20, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_msgLen mu_1_msgLen_undefined_var;

class mu_1_chanNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_chanNums& val) { return mu__byte::operator=((int) val); };
  mu_1_chanNums (const char *name, int os): mu__byte(1, 30, 5, name, os) {};
  mu_1_chanNums (void): mu__byte(1, 30, 5) {};
  mu_1_chanNums (int val): mu__byte(1, 30, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_chanNums mu_1_chanNums_undefined_var;

class mu_1_AgentType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AgentType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AgentType& val)
  {
    if (val.defined())
      return ( s << mu_1_AgentType::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_AgentType (const char *name, int os): mu__byte(1, 4, 3, name, os) {};
  mu_1_AgentType (void): mu__byte(1, 4, 3) {};
  mu_1_AgentType (int val): mu__byte(1, 4, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AgentType::values[] = {"HostID","Intruder","ServerIP","GatewayIP",NULL };

/*** end of enum declaration ***/
mu_1_AgentType mu_1_AgentType_undefined_var;

class mu_1_NonceType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NonceType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NonceType& val)
  {
    if (val.defined())
      return ( s << mu_1_NonceType::values[ int(val) - 5] );
    else return ( s << "Undefined" );
  };

  mu_1_NonceType (const char *name, int os): mu__byte(5, 8, 3, name, os) {};
  mu_1_NonceType (void): mu__byte(5, 8, 3) {};
  mu_1_NonceType (int val): mu__byte(5, 8, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -5]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -5] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NonceType::values[] = {"Na2","Na1","Na3","Na4",NULL };

/*** end of enum declaration ***/
mu_1_NonceType mu_1_NonceType_undefined_var;

class mu_1_EncryptType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_EncryptType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_EncryptType& val)
  {
    if (val.defined())
      return ( s << mu_1_EncryptType::values[ int(val) - 9] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(9, 11, 2, name, os) {};
  mu_1_EncryptType (void): mu__byte(9, 11, 2) {};
  mu_1_EncryptType (int val): mu__byte(9, 11, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -9]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -9] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_EncryptType::values[] = {"PK","SK","Symk",NULL };

/*** end of enum declaration ***/
mu_1_EncryptType mu_1_EncryptType_undefined_var;

class mu_1_KeyType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_EncryptType mu_encType;
  mu_1_AgentType mu_ag;
  mu_1_KeyType ( const char *n, int os ) { set_self(n,os); };
  mu_1_KeyType ( void ) {};

  virtual ~mu_1_KeyType(); 
friend int CompareWeight(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = CompareWeight(a.mu_encType, b.mu_encType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = Compare(a.mu_encType, b.mu_encType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_encType.MultisetSort();
    mu_ag.MultisetSort();
  }
  void print_statistic()
  {
    mu_encType.print_statistic();
    mu_ag.print_statistic();
  }
  void clear() {
    mu_encType.clear();
    mu_ag.clear();
 };
  void undefine() {
    mu_encType.undefine();
    mu_ag.undefine();
 };
  void reset() {
    mu_encType.reset();
    mu_ag.reset();
 };
  void print() {
    mu_encType.print();
    mu_ag.print();
  };
  void print_diff(state *prevstate) {
    mu_encType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_encType.to_state(thestate);
    mu_ag.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_KeyType& operator= (const mu_1_KeyType& from) {
    mu_encType.value(from.mu_encType.value());
    mu_ag.value(from.mu_ag.value());
    return *this;
  };
};

  void mu_1_KeyType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_KeyType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_KeyType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_encType.set_self_2(name, ".encType", os + 0 ); else mu_encType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
}

mu_1_KeyType::~mu_1_KeyType()
{
}

/*** end record declaration ***/
mu_1_KeyType mu_1_KeyType_undefined_var;

class mu_1_HostStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_HostStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_HostStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_HostStatus::values[ int(val) - 12] );
    else return ( s << "Undefined" );
  };

  mu_1_HostStatus (const char *name, int os): mu__byte(12, 16, 3, name, os) {};
  mu_1_HostStatus (void): mu__byte(12, 16, 3) {};
  mu_1_HostStatus (int val): mu__byte(12, 16, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -12]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -12] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_HostStatus::values[] = {"Host1","Host2","Host3","Host4","Host5",NULL };

/*** end of enum declaration ***/
mu_1_HostStatus mu_1_HostStatus_undefined_var;

class mu_1_GatewayStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_GatewayStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_GatewayStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_GatewayStatus::values[ int(val) - 17] );
    else return ( s << "Undefined" );
  };

  mu_1_GatewayStatus (const char *name, int os): mu__byte(17, 25, 4, name, os) {};
  mu_1_GatewayStatus (void): mu__byte(17, 25, 4) {};
  mu_1_GatewayStatus (int val): mu__byte(17, 25, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -17]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -17] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_GatewayStatus::values[] = {"Gateway1","Gateway2","Gateway3","Gateway4","Gateway5","Gateway6","Gateway7","Gateway8","Gateway9",NULL };

/*** end of enum declaration ***/
mu_1_GatewayStatus mu_1_GatewayStatus_undefined_var;

class mu_1_ServerStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ServerStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ServerStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_ServerStatus::values[ int(val) - 26] );
    else return ( s << "Undefined" );
  };

  mu_1_ServerStatus (const char *name, int os): mu__byte(26, 29, 3, name, os) {};
  mu_1_ServerStatus (void): mu__byte(26, 29, 3) {};
  mu_1_ServerStatus (int val): mu__byte(26, 29, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -26]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -26] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_ServerStatus::values[] = {"Server1","Server2","Server3","Server4",NULL };

/*** end of enum declaration ***/
mu_1_ServerStatus mu_1_ServerStatus_undefined_var;

class mu_1_MsgType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MsgType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MsgType& val)
  {
    if (val.defined())
      return ( s << mu_1_MsgType::values[ int(val) - 30] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(30, 37, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(30, 37, 4) {};
  mu_1_MsgType (int val): mu__byte(30, 37, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -30]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -30] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MsgType::values[] = {"null","agent","nonce","key","aenc","senc","concat","hash",NULL };

/*** end of enum declaration ***/
mu_1_MsgType mu_1_MsgType_undefined_var;

class mu_1_Message
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_MsgType mu_msgType;
  mu_1_AgentType mu_ag;
  mu_1_NonceType mu_noncePart;
  mu_1_KeyType mu_k;
  mu_1_indexType mu_aencMsg;
  mu_1_indexType mu_aencKey;
  mu_1_indexType mu_sencMsg;
  mu_1_indexType mu_sencKey;
  mu_1_indexType mu_concatPart1;
  mu_1_indexType mu_concatPart2;
  mu_1_indexType mu_concatPart3;
  mu_1_Message ( const char *n, int os ) { set_self(n,os); };
  mu_1_Message ( void ) {};

  virtual ~mu_1_Message(); 
friend int CompareWeight(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = CompareWeight(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = CompareWeight(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_concatPart1, b.mu_concatPart1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_concatPart2, b.mu_concatPart2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_concatPart3, b.mu_concatPart3);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = Compare(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = Compare(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = Compare(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = Compare(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = Compare(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = Compare(a.mu_concatPart1, b.mu_concatPart1);
    if (w!=0) return w;
    w = Compare(a.mu_concatPart2, b.mu_concatPart2);
    if (w!=0) return w;
    w = Compare(a.mu_concatPart3, b.mu_concatPart3);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msgType.MultisetSort();
    mu_ag.MultisetSort();
    mu_noncePart.MultisetSort();
    mu_k.MultisetSort();
    mu_aencMsg.MultisetSort();
    mu_aencKey.MultisetSort();
    mu_sencMsg.MultisetSort();
    mu_sencKey.MultisetSort();
    mu_concatPart1.MultisetSort();
    mu_concatPart2.MultisetSort();
    mu_concatPart3.MultisetSort();
  }
  void print_statistic()
  {
    mu_msgType.print_statistic();
    mu_ag.print_statistic();
    mu_noncePart.print_statistic();
    mu_k.print_statistic();
    mu_aencMsg.print_statistic();
    mu_aencKey.print_statistic();
    mu_sencMsg.print_statistic();
    mu_sencKey.print_statistic();
    mu_concatPart1.print_statistic();
    mu_concatPart2.print_statistic();
    mu_concatPart3.print_statistic();
  }
  void clear() {
    mu_msgType.clear();
    mu_ag.clear();
    mu_noncePart.clear();
    mu_k.clear();
    mu_aencMsg.clear();
    mu_aencKey.clear();
    mu_sencMsg.clear();
    mu_sencKey.clear();
    mu_concatPart1.clear();
    mu_concatPart2.clear();
    mu_concatPart3.clear();
 };
  void undefine() {
    mu_msgType.undefine();
    mu_ag.undefine();
    mu_noncePart.undefine();
    mu_k.undefine();
    mu_aencMsg.undefine();
    mu_aencKey.undefine();
    mu_sencMsg.undefine();
    mu_sencKey.undefine();
    mu_concatPart1.undefine();
    mu_concatPart2.undefine();
    mu_concatPart3.undefine();
 };
  void reset() {
    mu_msgType.reset();
    mu_ag.reset();
    mu_noncePart.reset();
    mu_k.reset();
    mu_aencMsg.reset();
    mu_aencKey.reset();
    mu_sencMsg.reset();
    mu_sencKey.reset();
    mu_concatPart1.reset();
    mu_concatPart2.reset();
    mu_concatPart3.reset();
 };
  void print() {
    mu_msgType.print();
    mu_ag.print();
    mu_noncePart.print();
    mu_k.print();
    mu_aencMsg.print();
    mu_aencKey.print();
    mu_sencMsg.print();
    mu_sencKey.print();
    mu_concatPart1.print();
    mu_concatPart2.print();
    mu_concatPart3.print();
  };
  void print_diff(state *prevstate) {
    mu_msgType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
    mu_noncePart.print_diff(prevstate);
    mu_k.print_diff(prevstate);
    mu_aencMsg.print_diff(prevstate);
    mu_aencKey.print_diff(prevstate);
    mu_sencMsg.print_diff(prevstate);
    mu_sencKey.print_diff(prevstate);
    mu_concatPart1.print_diff(prevstate);
    mu_concatPart2.print_diff(prevstate);
    mu_concatPart3.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msgType.to_state(thestate);
    mu_ag.to_state(thestate);
    mu_noncePart.to_state(thestate);
    mu_k.to_state(thestate);
    mu_aencMsg.to_state(thestate);
    mu_aencKey.to_state(thestate);
    mu_sencMsg.to_state(thestate);
    mu_sencKey.to_state(thestate);
    mu_concatPart1.to_state(thestate);
    mu_concatPart2.to_state(thestate);
    mu_concatPart3.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_msgType.value(from.mu_msgType.value());
    mu_ag.value(from.mu_ag.value());
    mu_noncePart.value(from.mu_noncePart.value());
    mu_k = from.mu_k;
    mu_aencMsg.value(from.mu_aencMsg.value());
    mu_aencKey.value(from.mu_aencKey.value());
    mu_sencMsg.value(from.mu_sencMsg.value());
    mu_sencKey.value(from.mu_sencKey.value());
    mu_concatPart1.value(from.mu_concatPart1.value());
    mu_concatPart2.value(from.mu_concatPart2.value());
    mu_concatPart3.value(from.mu_concatPart3.value());
    return *this;
  };
};

  void mu_1_Message::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Message::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Message::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msgType.set_self_2(name, ".msgType", os + 0 ); else mu_msgType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
  if (name) mu_noncePart.set_self_2(name, ".noncePart", os + 16 ); else mu_noncePart.set_self_2(NULL, NULL, 0);
  if (name) mu_k.set_self_2(name, ".k", os + 24 ); else mu_k.set_self_2(NULL, NULL, 0);
  if (name) mu_aencMsg.set_self_2(name, ".aencMsg", os + 40 ); else mu_aencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_aencKey.set_self_2(name, ".aencKey", os + 48 ); else mu_aencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_sencMsg.set_self_2(name, ".sencMsg", os + 56 ); else mu_sencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_sencKey.set_self_2(name, ".sencKey", os + 64 ); else mu_sencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart1.set_self_2(name, ".concatPart1", os + 72 ); else mu_concatPart1.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart2.set_self_2(name, ".concatPart2", os + 80 ); else mu_concatPart2.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart3.set_self_2(name, ".concatPart3", os + 88 ); else mu_concatPart3.set_self_2(NULL, NULL, 0);
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu_1_Channel
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_Message mu_msg;
  mu_1_AgentType mu_sender;
  mu_1_AgentType mu_receiver;
  mu_0_boolean mu_empty;
  mu_1_Channel ( const char *n, int os ) { set_self(n,os); };
  mu_1_Channel ( void ) {};

  virtual ~mu_1_Channel(); 
friend int CompareWeight(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = CompareWeight(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = CompareWeight(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = CompareWeight(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = Compare(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = Compare(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = Compare(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = Compare(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msg.MultisetSort();
    mu_sender.MultisetSort();
    mu_receiver.MultisetSort();
    mu_empty.MultisetSort();
  }
  void print_statistic()
  {
    mu_msg.print_statistic();
    mu_sender.print_statistic();
    mu_receiver.print_statistic();
    mu_empty.print_statistic();
  }
  void clear() {
    mu_msg.clear();
    mu_sender.clear();
    mu_receiver.clear();
    mu_empty.clear();
 };
  void undefine() {
    mu_msg.undefine();
    mu_sender.undefine();
    mu_receiver.undefine();
    mu_empty.undefine();
 };
  void reset() {
    mu_msg.reset();
    mu_sender.reset();
    mu_receiver.reset();
    mu_empty.reset();
 };
  void print() {
    mu_msg.print();
    mu_sender.print();
    mu_receiver.print();
    mu_empty.print();
  };
  void print_diff(state *prevstate) {
    mu_msg.print_diff(prevstate);
    mu_sender.print_diff(prevstate);
    mu_receiver.print_diff(prevstate);
    mu_empty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msg.to_state(thestate);
    mu_sender.to_state(thestate);
    mu_receiver.to_state(thestate);
    mu_empty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Channel& operator= (const mu_1_Channel& from) {
    mu_msg = from.mu_msg;
    mu_sender.value(from.mu_sender.value());
    mu_receiver.value(from.mu_receiver.value());
    mu_empty.value(from.mu_empty.value());
    return *this;
  };
};

  void mu_1_Channel::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Channel::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Channel::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msg.set_self_2(name, ".msg", os + 0 ); else mu_msg.set_self_2(NULL, NULL, 0);
  if (name) mu_sender.set_self_2(name, ".sender", os + 96 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 104 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 112 ); else mu_empty.set_self_2(NULL, NULL, 0);
}

mu_1_Channel::~mu_1_Channel()
{
}

/*** end record declaration ***/
mu_1_Channel mu_1_Channel_undefined_var;

class mu_1_RoleHost
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na2;
  mu_1_NonceType mu_Na1;
  mu_1_NonceType mu_Na3;
  mu_1_NonceType mu_Na4;
  mu_1_AgentType mu_Host;
  mu_1_AgentType mu_Gateway;
  mu_1_AgentType mu_Server;
  mu_1_NonceType mu_loc_Na2;
  mu_1_NonceType mu_loc_Na1;
  mu_1_NonceType mu_loc_Na3;
  mu_1_NonceType mu_loc_Na4;
  mu_1_AgentType mu_loc_Host;
  mu_1_AgentType mu_loc_Gateway;
  mu_1_AgentType mu_loc_Server;
  mu_1_HostStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleHost ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleHost ( void ) {};

  virtual ~mu_1_RoleHost(); 
friend int CompareWeight(mu_1_RoleHost& a, mu_1_RoleHost& b)
  {
    int w;
    w = CompareWeight(a.mu_Na2, b.mu_Na2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na1, b.mu_Na1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na3, b.mu_Na3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na4, b.mu_Na4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na2, b.mu_loc_Na2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na1, b.mu_loc_Na1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na3, b.mu_loc_Na3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na4, b.mu_loc_Na4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Host, b.mu_loc_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Gateway, b.mu_loc_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Server, b.mu_loc_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleHost& a, mu_1_RoleHost& b)
  {
    int w;
    w = Compare(a.mu_Na2, b.mu_Na2);
    if (w!=0) return w;
    w = Compare(a.mu_Na1, b.mu_Na1);
    if (w!=0) return w;
    w = Compare(a.mu_Na3, b.mu_Na3);
    if (w!=0) return w;
    w = Compare(a.mu_Na4, b.mu_Na4);
    if (w!=0) return w;
    w = Compare(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = Compare(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na2, b.mu_loc_Na2);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na1, b.mu_loc_Na1);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na3, b.mu_loc_Na3);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na4, b.mu_loc_Na4);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Host, b.mu_loc_Host);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Gateway, b.mu_loc_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Server, b.mu_loc_Server);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Na2.MultisetSort();
    mu_Na1.MultisetSort();
    mu_Na3.MultisetSort();
    mu_Na4.MultisetSort();
    mu_Host.MultisetSort();
    mu_Gateway.MultisetSort();
    mu_Server.MultisetSort();
    mu_loc_Na2.MultisetSort();
    mu_loc_Na1.MultisetSort();
    mu_loc_Na3.MultisetSort();
    mu_loc_Na4.MultisetSort();
    mu_loc_Host.MultisetSort();
    mu_loc_Gateway.MultisetSort();
    mu_loc_Server.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na2.print_statistic();
    mu_Na1.print_statistic();
    mu_Na3.print_statistic();
    mu_Na4.print_statistic();
    mu_Host.print_statistic();
    mu_Gateway.print_statistic();
    mu_Server.print_statistic();
    mu_loc_Na2.print_statistic();
    mu_loc_Na1.print_statistic();
    mu_loc_Na3.print_statistic();
    mu_loc_Na4.print_statistic();
    mu_loc_Host.print_statistic();
    mu_loc_Gateway.print_statistic();
    mu_loc_Server.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na2.clear();
    mu_Na1.clear();
    mu_Na3.clear();
    mu_Na4.clear();
    mu_Host.clear();
    mu_Gateway.clear();
    mu_Server.clear();
    mu_loc_Na2.clear();
    mu_loc_Na1.clear();
    mu_loc_Na3.clear();
    mu_loc_Na4.clear();
    mu_loc_Host.clear();
    mu_loc_Gateway.clear();
    mu_loc_Server.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na2.undefine();
    mu_Na1.undefine();
    mu_Na3.undefine();
    mu_Na4.undefine();
    mu_Host.undefine();
    mu_Gateway.undefine();
    mu_Server.undefine();
    mu_loc_Na2.undefine();
    mu_loc_Na1.undefine();
    mu_loc_Na3.undefine();
    mu_loc_Na4.undefine();
    mu_loc_Host.undefine();
    mu_loc_Gateway.undefine();
    mu_loc_Server.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na2.reset();
    mu_Na1.reset();
    mu_Na3.reset();
    mu_Na4.reset();
    mu_Host.reset();
    mu_Gateway.reset();
    mu_Server.reset();
    mu_loc_Na2.reset();
    mu_loc_Na1.reset();
    mu_loc_Na3.reset();
    mu_loc_Na4.reset();
    mu_loc_Host.reset();
    mu_loc_Gateway.reset();
    mu_loc_Server.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na2.print();
    mu_Na1.print();
    mu_Na3.print();
    mu_Na4.print();
    mu_Host.print();
    mu_Gateway.print();
    mu_Server.print();
    mu_loc_Na2.print();
    mu_loc_Na1.print();
    mu_loc_Na3.print();
    mu_loc_Na4.print();
    mu_loc_Host.print();
    mu_loc_Gateway.print();
    mu_loc_Server.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na2.print_diff(prevstate);
    mu_Na1.print_diff(prevstate);
    mu_Na3.print_diff(prevstate);
    mu_Na4.print_diff(prevstate);
    mu_Host.print_diff(prevstate);
    mu_Gateway.print_diff(prevstate);
    mu_Server.print_diff(prevstate);
    mu_loc_Na2.print_diff(prevstate);
    mu_loc_Na1.print_diff(prevstate);
    mu_loc_Na3.print_diff(prevstate);
    mu_loc_Na4.print_diff(prevstate);
    mu_loc_Host.print_diff(prevstate);
    mu_loc_Gateway.print_diff(prevstate);
    mu_loc_Server.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na2.to_state(thestate);
    mu_Na1.to_state(thestate);
    mu_Na3.to_state(thestate);
    mu_Na4.to_state(thestate);
    mu_Host.to_state(thestate);
    mu_Gateway.to_state(thestate);
    mu_Server.to_state(thestate);
    mu_loc_Na2.to_state(thestate);
    mu_loc_Na1.to_state(thestate);
    mu_loc_Na3.to_state(thestate);
    mu_loc_Na4.to_state(thestate);
    mu_loc_Host.to_state(thestate);
    mu_loc_Gateway.to_state(thestate);
    mu_loc_Server.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleHost& operator= (const mu_1_RoleHost& from) {
    mu_Na2.value(from.mu_Na2.value());
    mu_Na1.value(from.mu_Na1.value());
    mu_Na3.value(from.mu_Na3.value());
    mu_Na4.value(from.mu_Na4.value());
    mu_Host.value(from.mu_Host.value());
    mu_Gateway.value(from.mu_Gateway.value());
    mu_Server.value(from.mu_Server.value());
    mu_loc_Na2.value(from.mu_loc_Na2.value());
    mu_loc_Na1.value(from.mu_loc_Na1.value());
    mu_loc_Na3.value(from.mu_loc_Na3.value());
    mu_loc_Na4.value(from.mu_loc_Na4.value());
    mu_loc_Host.value(from.mu_loc_Host.value());
    mu_loc_Gateway.value(from.mu_loc_Gateway.value());
    mu_loc_Server.value(from.mu_loc_Server.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleHost::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleHost::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleHost::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na2.set_self_2(name, ".Na2", os + 0 ); else mu_Na2.set_self_2(NULL, NULL, 0);
  if (name) mu_Na1.set_self_2(name, ".Na1", os + 8 ); else mu_Na1.set_self_2(NULL, NULL, 0);
  if (name) mu_Na3.set_self_2(name, ".Na3", os + 16 ); else mu_Na3.set_self_2(NULL, NULL, 0);
  if (name) mu_Na4.set_self_2(name, ".Na4", os + 24 ); else mu_Na4.set_self_2(NULL, NULL, 0);
  if (name) mu_Host.set_self_2(name, ".Host", os + 32 ); else mu_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_Gateway.set_self_2(name, ".Gateway", os + 40 ); else mu_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_Server.set_self_2(name, ".Server", os + 48 ); else mu_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na2.set_self_2(name, ".loc_Na2", os + 56 ); else mu_loc_Na2.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na1.set_self_2(name, ".loc_Na1", os + 64 ); else mu_loc_Na1.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na3.set_self_2(name, ".loc_Na3", os + 72 ); else mu_loc_Na3.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na4.set_self_2(name, ".loc_Na4", os + 80 ); else mu_loc_Na4.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Host.set_self_2(name, ".loc_Host", os + 88 ); else mu_loc_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Gateway.set_self_2(name, ".loc_Gateway", os + 96 ); else mu_loc_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Server.set_self_2(name, ".loc_Server", os + 104 ); else mu_loc_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 112 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 120 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleHost::~mu_1_RoleHost()
{
}

/*** end record declaration ***/
mu_1_RoleHost mu_1_RoleHost_undefined_var;

class mu_1_RoleGateway
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na2;
  mu_1_NonceType mu_Na1;
  mu_1_NonceType mu_Na3;
  mu_1_NonceType mu_Na4;
  mu_1_AgentType mu_Host;
  mu_1_AgentType mu_Gateway;
  mu_1_AgentType mu_Server;
  mu_1_NonceType mu_loc_Na2;
  mu_1_NonceType mu_loc_Na1;
  mu_1_NonceType mu_loc_Na3;
  mu_1_NonceType mu_loc_Na4;
  mu_1_AgentType mu_loc_Host;
  mu_1_AgentType mu_loc_Gateway;
  mu_1_AgentType mu_loc_Server;
  mu_1_GatewayStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleGateway ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleGateway ( void ) {};

  virtual ~mu_1_RoleGateway(); 
friend int CompareWeight(mu_1_RoleGateway& a, mu_1_RoleGateway& b)
  {
    int w;
    w = CompareWeight(a.mu_Na2, b.mu_Na2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na1, b.mu_Na1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na3, b.mu_Na3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na4, b.mu_Na4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na2, b.mu_loc_Na2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na1, b.mu_loc_Na1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na3, b.mu_loc_Na3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na4, b.mu_loc_Na4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Host, b.mu_loc_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Gateway, b.mu_loc_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Server, b.mu_loc_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleGateway& a, mu_1_RoleGateway& b)
  {
    int w;
    w = Compare(a.mu_Na2, b.mu_Na2);
    if (w!=0) return w;
    w = Compare(a.mu_Na1, b.mu_Na1);
    if (w!=0) return w;
    w = Compare(a.mu_Na3, b.mu_Na3);
    if (w!=0) return w;
    w = Compare(a.mu_Na4, b.mu_Na4);
    if (w!=0) return w;
    w = Compare(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = Compare(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na2, b.mu_loc_Na2);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na1, b.mu_loc_Na1);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na3, b.mu_loc_Na3);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na4, b.mu_loc_Na4);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Host, b.mu_loc_Host);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Gateway, b.mu_loc_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Server, b.mu_loc_Server);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Na2.MultisetSort();
    mu_Na1.MultisetSort();
    mu_Na3.MultisetSort();
    mu_Na4.MultisetSort();
    mu_Host.MultisetSort();
    mu_Gateway.MultisetSort();
    mu_Server.MultisetSort();
    mu_loc_Na2.MultisetSort();
    mu_loc_Na1.MultisetSort();
    mu_loc_Na3.MultisetSort();
    mu_loc_Na4.MultisetSort();
    mu_loc_Host.MultisetSort();
    mu_loc_Gateway.MultisetSort();
    mu_loc_Server.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na2.print_statistic();
    mu_Na1.print_statistic();
    mu_Na3.print_statistic();
    mu_Na4.print_statistic();
    mu_Host.print_statistic();
    mu_Gateway.print_statistic();
    mu_Server.print_statistic();
    mu_loc_Na2.print_statistic();
    mu_loc_Na1.print_statistic();
    mu_loc_Na3.print_statistic();
    mu_loc_Na4.print_statistic();
    mu_loc_Host.print_statistic();
    mu_loc_Gateway.print_statistic();
    mu_loc_Server.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na2.clear();
    mu_Na1.clear();
    mu_Na3.clear();
    mu_Na4.clear();
    mu_Host.clear();
    mu_Gateway.clear();
    mu_Server.clear();
    mu_loc_Na2.clear();
    mu_loc_Na1.clear();
    mu_loc_Na3.clear();
    mu_loc_Na4.clear();
    mu_loc_Host.clear();
    mu_loc_Gateway.clear();
    mu_loc_Server.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na2.undefine();
    mu_Na1.undefine();
    mu_Na3.undefine();
    mu_Na4.undefine();
    mu_Host.undefine();
    mu_Gateway.undefine();
    mu_Server.undefine();
    mu_loc_Na2.undefine();
    mu_loc_Na1.undefine();
    mu_loc_Na3.undefine();
    mu_loc_Na4.undefine();
    mu_loc_Host.undefine();
    mu_loc_Gateway.undefine();
    mu_loc_Server.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na2.reset();
    mu_Na1.reset();
    mu_Na3.reset();
    mu_Na4.reset();
    mu_Host.reset();
    mu_Gateway.reset();
    mu_Server.reset();
    mu_loc_Na2.reset();
    mu_loc_Na1.reset();
    mu_loc_Na3.reset();
    mu_loc_Na4.reset();
    mu_loc_Host.reset();
    mu_loc_Gateway.reset();
    mu_loc_Server.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na2.print();
    mu_Na1.print();
    mu_Na3.print();
    mu_Na4.print();
    mu_Host.print();
    mu_Gateway.print();
    mu_Server.print();
    mu_loc_Na2.print();
    mu_loc_Na1.print();
    mu_loc_Na3.print();
    mu_loc_Na4.print();
    mu_loc_Host.print();
    mu_loc_Gateway.print();
    mu_loc_Server.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na2.print_diff(prevstate);
    mu_Na1.print_diff(prevstate);
    mu_Na3.print_diff(prevstate);
    mu_Na4.print_diff(prevstate);
    mu_Host.print_diff(prevstate);
    mu_Gateway.print_diff(prevstate);
    mu_Server.print_diff(prevstate);
    mu_loc_Na2.print_diff(prevstate);
    mu_loc_Na1.print_diff(prevstate);
    mu_loc_Na3.print_diff(prevstate);
    mu_loc_Na4.print_diff(prevstate);
    mu_loc_Host.print_diff(prevstate);
    mu_loc_Gateway.print_diff(prevstate);
    mu_loc_Server.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na2.to_state(thestate);
    mu_Na1.to_state(thestate);
    mu_Na3.to_state(thestate);
    mu_Na4.to_state(thestate);
    mu_Host.to_state(thestate);
    mu_Gateway.to_state(thestate);
    mu_Server.to_state(thestate);
    mu_loc_Na2.to_state(thestate);
    mu_loc_Na1.to_state(thestate);
    mu_loc_Na3.to_state(thestate);
    mu_loc_Na4.to_state(thestate);
    mu_loc_Host.to_state(thestate);
    mu_loc_Gateway.to_state(thestate);
    mu_loc_Server.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleGateway& operator= (const mu_1_RoleGateway& from) {
    mu_Na2.value(from.mu_Na2.value());
    mu_Na1.value(from.mu_Na1.value());
    mu_Na3.value(from.mu_Na3.value());
    mu_Na4.value(from.mu_Na4.value());
    mu_Host.value(from.mu_Host.value());
    mu_Gateway.value(from.mu_Gateway.value());
    mu_Server.value(from.mu_Server.value());
    mu_loc_Na2.value(from.mu_loc_Na2.value());
    mu_loc_Na1.value(from.mu_loc_Na1.value());
    mu_loc_Na3.value(from.mu_loc_Na3.value());
    mu_loc_Na4.value(from.mu_loc_Na4.value());
    mu_loc_Host.value(from.mu_loc_Host.value());
    mu_loc_Gateway.value(from.mu_loc_Gateway.value());
    mu_loc_Server.value(from.mu_loc_Server.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleGateway::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleGateway::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleGateway::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na2.set_self_2(name, ".Na2", os + 0 ); else mu_Na2.set_self_2(NULL, NULL, 0);
  if (name) mu_Na1.set_self_2(name, ".Na1", os + 8 ); else mu_Na1.set_self_2(NULL, NULL, 0);
  if (name) mu_Na3.set_self_2(name, ".Na3", os + 16 ); else mu_Na3.set_self_2(NULL, NULL, 0);
  if (name) mu_Na4.set_self_2(name, ".Na4", os + 24 ); else mu_Na4.set_self_2(NULL, NULL, 0);
  if (name) mu_Host.set_self_2(name, ".Host", os + 32 ); else mu_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_Gateway.set_self_2(name, ".Gateway", os + 40 ); else mu_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_Server.set_self_2(name, ".Server", os + 48 ); else mu_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na2.set_self_2(name, ".loc_Na2", os + 56 ); else mu_loc_Na2.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na1.set_self_2(name, ".loc_Na1", os + 64 ); else mu_loc_Na1.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na3.set_self_2(name, ".loc_Na3", os + 72 ); else mu_loc_Na3.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na4.set_self_2(name, ".loc_Na4", os + 80 ); else mu_loc_Na4.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Host.set_self_2(name, ".loc_Host", os + 88 ); else mu_loc_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Gateway.set_self_2(name, ".loc_Gateway", os + 96 ); else mu_loc_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Server.set_self_2(name, ".loc_Server", os + 104 ); else mu_loc_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 112 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 120 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleGateway::~mu_1_RoleGateway()
{
}

/*** end record declaration ***/
mu_1_RoleGateway mu_1_RoleGateway_undefined_var;

class mu_1_RoleServer
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na2;
  mu_1_NonceType mu_Na1;
  mu_1_NonceType mu_Na3;
  mu_1_NonceType mu_Na4;
  mu_1_AgentType mu_Host;
  mu_1_AgentType mu_Gateway;
  mu_1_AgentType mu_Server;
  mu_1_NonceType mu_loc_Na2;
  mu_1_NonceType mu_loc_Na1;
  mu_1_NonceType mu_loc_Na3;
  mu_1_NonceType mu_loc_Na4;
  mu_1_AgentType mu_loc_Host;
  mu_1_AgentType mu_loc_Gateway;
  mu_1_AgentType mu_loc_Server;
  mu_1_ServerStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleServer ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleServer ( void ) {};

  virtual ~mu_1_RoleServer(); 
friend int CompareWeight(mu_1_RoleServer& a, mu_1_RoleServer& b)
  {
    int w;
    w = CompareWeight(a.mu_Na2, b.mu_Na2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na1, b.mu_Na1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na3, b.mu_Na3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na4, b.mu_Na4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na2, b.mu_loc_Na2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na1, b.mu_loc_Na1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na3, b.mu_loc_Na3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Na4, b.mu_loc_Na4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Host, b.mu_loc_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Gateway, b.mu_loc_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loc_Server, b.mu_loc_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleServer& a, mu_1_RoleServer& b)
  {
    int w;
    w = Compare(a.mu_Na2, b.mu_Na2);
    if (w!=0) return w;
    w = Compare(a.mu_Na1, b.mu_Na1);
    if (w!=0) return w;
    w = Compare(a.mu_Na3, b.mu_Na3);
    if (w!=0) return w;
    w = Compare(a.mu_Na4, b.mu_Na4);
    if (w!=0) return w;
    w = Compare(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = Compare(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na2, b.mu_loc_Na2);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na1, b.mu_loc_Na1);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na3, b.mu_loc_Na3);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Na4, b.mu_loc_Na4);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Host, b.mu_loc_Host);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Gateway, b.mu_loc_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_loc_Server, b.mu_loc_Server);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Na2.MultisetSort();
    mu_Na1.MultisetSort();
    mu_Na3.MultisetSort();
    mu_Na4.MultisetSort();
    mu_Host.MultisetSort();
    mu_Gateway.MultisetSort();
    mu_Server.MultisetSort();
    mu_loc_Na2.MultisetSort();
    mu_loc_Na1.MultisetSort();
    mu_loc_Na3.MultisetSort();
    mu_loc_Na4.MultisetSort();
    mu_loc_Host.MultisetSort();
    mu_loc_Gateway.MultisetSort();
    mu_loc_Server.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na2.print_statistic();
    mu_Na1.print_statistic();
    mu_Na3.print_statistic();
    mu_Na4.print_statistic();
    mu_Host.print_statistic();
    mu_Gateway.print_statistic();
    mu_Server.print_statistic();
    mu_loc_Na2.print_statistic();
    mu_loc_Na1.print_statistic();
    mu_loc_Na3.print_statistic();
    mu_loc_Na4.print_statistic();
    mu_loc_Host.print_statistic();
    mu_loc_Gateway.print_statistic();
    mu_loc_Server.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na2.clear();
    mu_Na1.clear();
    mu_Na3.clear();
    mu_Na4.clear();
    mu_Host.clear();
    mu_Gateway.clear();
    mu_Server.clear();
    mu_loc_Na2.clear();
    mu_loc_Na1.clear();
    mu_loc_Na3.clear();
    mu_loc_Na4.clear();
    mu_loc_Host.clear();
    mu_loc_Gateway.clear();
    mu_loc_Server.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na2.undefine();
    mu_Na1.undefine();
    mu_Na3.undefine();
    mu_Na4.undefine();
    mu_Host.undefine();
    mu_Gateway.undefine();
    mu_Server.undefine();
    mu_loc_Na2.undefine();
    mu_loc_Na1.undefine();
    mu_loc_Na3.undefine();
    mu_loc_Na4.undefine();
    mu_loc_Host.undefine();
    mu_loc_Gateway.undefine();
    mu_loc_Server.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na2.reset();
    mu_Na1.reset();
    mu_Na3.reset();
    mu_Na4.reset();
    mu_Host.reset();
    mu_Gateway.reset();
    mu_Server.reset();
    mu_loc_Na2.reset();
    mu_loc_Na1.reset();
    mu_loc_Na3.reset();
    mu_loc_Na4.reset();
    mu_loc_Host.reset();
    mu_loc_Gateway.reset();
    mu_loc_Server.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na2.print();
    mu_Na1.print();
    mu_Na3.print();
    mu_Na4.print();
    mu_Host.print();
    mu_Gateway.print();
    mu_Server.print();
    mu_loc_Na2.print();
    mu_loc_Na1.print();
    mu_loc_Na3.print();
    mu_loc_Na4.print();
    mu_loc_Host.print();
    mu_loc_Gateway.print();
    mu_loc_Server.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na2.print_diff(prevstate);
    mu_Na1.print_diff(prevstate);
    mu_Na3.print_diff(prevstate);
    mu_Na4.print_diff(prevstate);
    mu_Host.print_diff(prevstate);
    mu_Gateway.print_diff(prevstate);
    mu_Server.print_diff(prevstate);
    mu_loc_Na2.print_diff(prevstate);
    mu_loc_Na1.print_diff(prevstate);
    mu_loc_Na3.print_diff(prevstate);
    mu_loc_Na4.print_diff(prevstate);
    mu_loc_Host.print_diff(prevstate);
    mu_loc_Gateway.print_diff(prevstate);
    mu_loc_Server.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na2.to_state(thestate);
    mu_Na1.to_state(thestate);
    mu_Na3.to_state(thestate);
    mu_Na4.to_state(thestate);
    mu_Host.to_state(thestate);
    mu_Gateway.to_state(thestate);
    mu_Server.to_state(thestate);
    mu_loc_Na2.to_state(thestate);
    mu_loc_Na1.to_state(thestate);
    mu_loc_Na3.to_state(thestate);
    mu_loc_Na4.to_state(thestate);
    mu_loc_Host.to_state(thestate);
    mu_loc_Gateway.to_state(thestate);
    mu_loc_Server.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleServer& operator= (const mu_1_RoleServer& from) {
    mu_Na2.value(from.mu_Na2.value());
    mu_Na1.value(from.mu_Na1.value());
    mu_Na3.value(from.mu_Na3.value());
    mu_Na4.value(from.mu_Na4.value());
    mu_Host.value(from.mu_Host.value());
    mu_Gateway.value(from.mu_Gateway.value());
    mu_Server.value(from.mu_Server.value());
    mu_loc_Na2.value(from.mu_loc_Na2.value());
    mu_loc_Na1.value(from.mu_loc_Na1.value());
    mu_loc_Na3.value(from.mu_loc_Na3.value());
    mu_loc_Na4.value(from.mu_loc_Na4.value());
    mu_loc_Host.value(from.mu_loc_Host.value());
    mu_loc_Gateway.value(from.mu_loc_Gateway.value());
    mu_loc_Server.value(from.mu_loc_Server.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleServer::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleServer::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleServer::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na2.set_self_2(name, ".Na2", os + 0 ); else mu_Na2.set_self_2(NULL, NULL, 0);
  if (name) mu_Na1.set_self_2(name, ".Na1", os + 8 ); else mu_Na1.set_self_2(NULL, NULL, 0);
  if (name) mu_Na3.set_self_2(name, ".Na3", os + 16 ); else mu_Na3.set_self_2(NULL, NULL, 0);
  if (name) mu_Na4.set_self_2(name, ".Na4", os + 24 ); else mu_Na4.set_self_2(NULL, NULL, 0);
  if (name) mu_Host.set_self_2(name, ".Host", os + 32 ); else mu_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_Gateway.set_self_2(name, ".Gateway", os + 40 ); else mu_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_Server.set_self_2(name, ".Server", os + 48 ); else mu_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na2.set_self_2(name, ".loc_Na2", os + 56 ); else mu_loc_Na2.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na1.set_self_2(name, ".loc_Na1", os + 64 ); else mu_loc_Na1.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na3.set_self_2(name, ".loc_Na3", os + 72 ); else mu_loc_Na3.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Na4.set_self_2(name, ".loc_Na4", os + 80 ); else mu_loc_Na4.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Host.set_self_2(name, ".loc_Host", os + 88 ); else mu_loc_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Gateway.set_self_2(name, ".loc_Gateway", os + 96 ); else mu_loc_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_loc_Server.set_self_2(name, ".loc_Server", os + 104 ); else mu_loc_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 112 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 120 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleServer::~mu_1_RoleServer()
{
}

/*** end record declaration ***/
mu_1_RoleServer mu_1_RoleServer_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_indexType array[ 21 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 20 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 21; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<21; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<21; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 21; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 21; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 21; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 21; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 21; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 21; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 21; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_msgSet
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_0 mu_content;
  mu_1_msgLen mu_length;
  mu_1_msgSet ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgSet ( void ) {};

  virtual ~mu_1_msgSet(); 
friend int CompareWeight(mu_1_msgSet& a, mu_1_msgSet& b)
  {
    int w;
    w = CompareWeight(a.mu_content, b.mu_content);
    if (w!=0) return w;
    w = CompareWeight(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_msgSet& a, mu_1_msgSet& b)
  {
    int w;
    w = Compare(a.mu_content, b.mu_content);
    if (w!=0) return w;
    w = Compare(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_content.MultisetSort();
    mu_length.MultisetSort();
  }
  void print_statistic()
  {
    mu_content.print_statistic();
    mu_length.print_statistic();
  }
  void clear() {
    mu_content.clear();
    mu_length.clear();
 };
  void undefine() {
    mu_content.undefine();
    mu_length.undefine();
 };
  void reset() {
    mu_content.reset();
    mu_length.reset();
 };
  void print() {
    mu_content.print();
    mu_length.print();
  };
  void print_diff(state *prevstate) {
    mu_content.print_diff(prevstate);
    mu_length.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_content.to_state(thestate);
    mu_length.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_msgSet& operator= (const mu_1_msgSet& from) {
    mu_content = from.mu_content;
    mu_length.value(from.mu_length.value());
    return *this;
  };
};

  void mu_1_msgSet::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgSet::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgSet::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_content.set_self_2(name, ".content", os + 0 ); else mu_content.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 168 ); else mu_length.set_self_2(NULL, NULL, 0);
}

mu_1_msgSet::~mu_1_msgSet()
{
}

/*** end record declaration ***/
mu_1_msgSet mu_1_msgSet_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_Channel array[ 30 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_Channel& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 30 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 30; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<30; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<30; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<30; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<30; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 30; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 30; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 30; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 30; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 30; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 30; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 30; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 120 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_RoleHost array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_RoleHost& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 128 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_RoleGateway array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_RoleGateway& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 128 + os);
    delete[] s;
  }
};
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_1_RoleServer array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_RoleServer& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 128 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_Message array[ 21 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 20 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 21; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<21; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<21; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 21; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 21; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 21; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 21; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 21; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 21; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 21; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 96 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_0_boolean array[ 21 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 20 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 21; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<21; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<21; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 21; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 21; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 21; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 21; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 21; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 21; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 21; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7
{
 public:
  mu_0_boolean array[ 21 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 20 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 21; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<21; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<21; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 21; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 21; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 21; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 21; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 21; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 21; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 21; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

const int mu_roleHostNum = 1;
const int mu_roleGatewayNum = 1;
const int mu_roleServerNum = 1;
const int mu_totalFact = 20;
const int mu_chanNum = 30;
const int mu_HostID = 1;
const int mu_Intruder = 2;
const int mu_ServerIP = 3;
const int mu_GatewayIP = 4;
const int mu_Na2 = 5;
const int mu_Na1 = 6;
const int mu_Na3 = 7;
const int mu_Na4 = 8;
const int mu_PK = 9;
const int mu_SK = 10;
const int mu_Symk = 11;
const int mu_Host1 = 12;
const int mu_Host2 = 13;
const int mu_Host3 = 14;
const int mu_Host4 = 15;
const int mu_Host5 = 16;
const int mu_Gateway1 = 17;
const int mu_Gateway2 = 18;
const int mu_Gateway3 = 19;
const int mu_Gateway4 = 20;
const int mu_Gateway5 = 21;
const int mu_Gateway6 = 22;
const int mu_Gateway7 = 23;
const int mu_Gateway8 = 24;
const int mu_Gateway9 = 25;
const int mu_Server1 = 26;
const int mu_Server2 = 27;
const int mu_Server3 = 28;
const int mu_Server4 = 29;
const int mu_null = 30;
const int mu_agent = 31;
const int mu_nonce = 32;
const int mu_key = 33;
const int mu_aenc = 34;
const int mu_senc = 35;
const int mu_concat = 36;
const int mu_hash = 37;
/*** Variable declaration ***/
mu_1__type_1 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_2 mu_roleHost("roleHost",3600);

/*** Variable declaration ***/
mu_1__type_3 mu_roleGateway("roleGateway",3728);

/*** Variable declaration ***/
mu_1__type_4 mu_roleServer("roleServer",3856);

/*** Variable declaration ***/
mu_1__type_5 mu_msgs("msgs",3984);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",6000);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",6008);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",6184);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",6360);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",6536);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",6712);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",6888);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",7064);

/*** Variable declaration ***/
mu_1__type_6 mu_Spy_known("Spy_known",7240);

/*** Variable declaration ***/
mu_1__type_7 mu_emit("emit",7408);

void mu_lookAddPat1(const mu_1_NonceType& mu_Na1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_Na1) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_nonce;
if (mu_Na1.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_Na1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat1(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_lookAddPat2(const mu_1_AgentType& mu_Gateway, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_Gateway) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_agent;
if (mu_Gateway.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_Gateway;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat2(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_agent) )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_lookAddPat3(const mu_1_NonceType& mu_Na1, const mu_1_AgentType& mu_Gateway, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",96);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",192);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",200);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",208);

mu_index = 0;
mu_lookAddPat1 ( mu_Na1, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_Gateway, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_concat) )
{
bool mu__boolexpr8;
  if (!((mu_msgs[mu_i].mu_concatPart1) == (mu_i1))) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = ((mu_msgs[mu_i].mu_concatPart2) == (mu_i2)) ; 
}
if ( mu__boolexpr8 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart1.undefine();
else
  mu_msgs[mu_index].mu_concatPart1 = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart2.undefine();
else
  mu_msgs[mu_index].mu_concatPart2 = mu_i2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat3(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
bool mu__boolexpr9;
  if (!((mu_msgs[mu_msg.mu_concatPart1].mu_msgType) == (mu_nonce))) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = ((mu_msgs[mu_msg.mu_concatPart2].mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr9 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_lookAddPat4(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",96);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",192);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",200);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",208);

mu_index = 0;
mu_lookAddPat2 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Na2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_concat) )
{
bool mu__boolexpr10;
  if (!((mu_msgs[mu_i].mu_concatPart1) == (mu_i1))) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = ((mu_msgs[mu_i].mu_concatPart2) == (mu_i2)) ; 
}
if ( mu__boolexpr10 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart1.undefine();
else
  mu_msgs[mu_index].mu_concatPart1 = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart2.undefine();
else
  mu_msgs[mu_index].mu_concatPart2 = mu_i2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat4(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
bool mu__boolexpr11;
  if (!((mu_msgs[mu_msg.mu_concatPart1].mu_msgType) == (mu_nonce))) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_msgs[mu_msg.mu_concatPart2].mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr11 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_lookAddPat5(const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr12;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK))) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_HostSk)) ; 
}
if ( mu__boolexpr12 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_SK;
if (mu_HostSk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_HostSk;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat5(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_key) )
{
if ( (mu_msg.mu_k.mu_encType) == (mu_SK) )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_lookAddPat6(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",96);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",192);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",200);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",208);

mu_index = 0;
mu_lookAddPat4 ( mu_Host, mu_Na2, mu_msg1, mu_i1 );
mu_lookAddPat5 ( mu_HostSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr13;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr13 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_aenc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_i2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat6(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat4 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat5 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr14;
  if (!(mu_flagPart1)) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = (mu_flagPart2) ; 
}
if ( mu__boolexpr14 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_lookAddPat7(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",96);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",192);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",288);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",296);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",304);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",312);

mu_index = 0;
mu_lookAddPat2 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Na2, mu_msg2, mu_i2 );
mu_lookAddPat6 ( mu_Host, mu_Na2, mu_Host, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_concat) )
{
bool mu__boolexpr15;
bool mu__boolexpr16;
  if (!((mu_msgs[mu_i].mu_concatPart1) == (mu_i1))) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_msgs[mu_i].mu_concatPart2) == (mu_i2)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_msgs[mu_i].mu_concatPart3) == (mu_i3)) ; 
}
if ( mu__boolexpr15 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart1.undefine();
else
  mu_msgs[mu_index].mu_concatPart1 = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart2.undefine();
else
  mu_msgs[mu_index].mu_concatPart2 = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart3.undefine();
else
  mu_msgs[mu_index].mu_concatPart3 = mu_i3;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat7(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
bool mu__boolexpr17;
  if (!((mu_msgs[mu_msg.mu_concatPart1].mu_msgType) == (mu_nonce))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_msgs[mu_msg.mu_concatPart2].mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr17 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_cons1(const mu_1_NonceType& mu_Na1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_Na1, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_AgentType& mu_Gateway, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_Gateway, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_NonceType& mu_Na1, const mu_1_AgentType& mu_Gateway, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_Na1, mu_Gateway, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct3(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na1, mu_1_AgentType& mu_Gateway)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",96);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",192);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart1];
mu_Na1 = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart2];
mu_Gateway = mu_msgNum2.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_Host, mu_Na2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct4(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_Na2)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",96);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",192);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart1];
mu_Host = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart2];
mu_Na2 = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_HostSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_Host, mu_Na2, mu_HostSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct6(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_Na2, mu_1_AgentType& mu_HostSk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",112);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",208);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_HostSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart1];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart2];
mu_Host = mu_msgNum1.mu_ag;
mu_Na2 = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_Host, mu_Na2, mu_HostSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct7(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_Na2, mu_1_AgentType& mu_HostSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",96);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",192);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",288);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart1];
mu_Host = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart2];
mu_Na2 = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart3];
mu_k = mu_msgs[mu_msgNum3.mu_aencKey].mu_k;
mu_HostSk = mu_k.mu_ag;
};
/*** end procedure declaration ***/

void mu_get_msgNo(mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
bool mu__boolexpr22;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr22) mu__boolexpr21 = TRUE ;
  else {
bool mu__boolexpr23;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr21 = (mu__boolexpr23) ; 
}
  if (mu__boolexpr21) mu__boolexpr20 = TRUE ;
  else {
bool mu__boolexpr24;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr24 = FALSE ;
  else {
bool mu__boolexpr25;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr24 = (mu__boolexpr25) ; 
}
  mu__boolexpr20 = (mu__boolexpr24) ; 
}
  if (mu__boolexpr20) mu__boolexpr19 = TRUE ;
  else {
bool mu__boolexpr26;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr26 = FALSE ;
  else {
bool mu__boolexpr27;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr26 = (mu__boolexpr27) ; 
}
  mu__boolexpr19 = (mu__boolexpr26) ; 
}
  if (mu__boolexpr19) mu__boolexpr18 = TRUE ;
  else {
bool mu__boolexpr28;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr28 = FALSE ;
  else {
bool mu__boolexpr29;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr28 = (mu__boolexpr29) ; 
}
  mu__boolexpr18 = (mu__boolexpr28) ; 
}
if ( mu__boolexpr18 )
{
mu_index = mu_i;
}
}
};
};
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_printMsg(mu_1_Message& mu_msg)
{
if ( (mu_msg.mu_msgType) == (mu_null) )
{
cout << "null\n";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_agent) )
{
cout << ( mu_msg.mu_ag );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
cout << ( mu_msg.mu_noncePart );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_key) )
{
if ( (mu_msg.mu_k.mu_encType) == (mu_PK) )
{
cout << "PK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encType) == (mu_SK) )
{
cout << "SK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encType) == (mu_Symk) )
{
cout << "SymK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
}
}
}
else
{
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
cout << "aenc{";
mu_printMsg ( mu_msgs[mu_msg.mu_aencMsg] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_aencKey] );
cout << "}\n";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
cout << "senc{";
mu_printMsg ( mu_msgs[mu_msg.mu_sencMsg] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_sencKey] );
cout << "}\n";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
cout << "concat(";
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart1] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart2] );
cout << ")";
}
}
}
}
}
}
}
};
/*** end procedure declaration ***/

mu_1_Message mu_inverseKey(mu_1_Message& mu_msgK)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

mu_key_inv.mu_msgType = mu_null;
if ( (mu_msgK.mu_msgType) == (mu_key) )
{
mu_key_inv.mu_msgType = mu_msgK.mu_msgType;
mu_key_inv.mu_k.mu_ag = mu_msgK.mu_k.mu_ag;
if ( (mu_msgK.mu_k.mu_encType) == (mu_PK) )
{
mu_key_inv.mu_k.mu_encType = mu_SK;
}
else
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_SK) )
{
mu_key_inv.mu_k.mu_encType = mu_PK;
}
}
}
return mu_key_inv;
	Error.Error("The end of function inverseKey reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_lookUp(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr30;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_agent))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
if ( mu__boolexpr30 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr31;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
if ( mu__boolexpr31 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr32;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr32 = FALSE ;
  else {
bool mu__boolexpr33;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr32 = (mu__boolexpr33) ; 
}
if ( mu__boolexpr32 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr34;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_aenc))) mu__boolexpr34 = FALSE ;
  else {
bool mu__boolexpr35;
  if (!((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg)) ; 
}
  mu__boolexpr34 = (mu__boolexpr35) ; 
}
if ( mu__boolexpr34 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr36;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_senc))) mu__boolexpr36 = FALSE ;
  else {
bool mu__boolexpr37;
  if (!((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg)) ; 
}
  mu__boolexpr36 = (mu__boolexpr37) ; 
}
if ( mu__boolexpr36 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr38;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr38 = FALSE ;
  else {
bool mu__boolexpr39;
  if (!((mu_msgs[mu_i].mu_concatPart1) == (mu_msg.mu_concatPart1))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_msgs[mu_i].mu_concatPart2) == (mu_msg.mu_concatPart2)) ; 
}
  mu__boolexpr38 = (mu__boolexpr39) ; 
}
if ( mu__boolexpr38 )
{
mu_index = mu_i;
}
}
}
}
}
}
}
};
};
return mu_index;
	Error.Error("The end of function lookUp reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct3By12(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_NonceType mu_locNa1("locNa1",8);

/*** Variable declaration ***/
mu_1_AgentType mu_locGateway("locGateway",16);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",24);

mu_index = 0;
mu_locNa1 = mu_msgs[mu_msgNo1].mu_noncePart;
mu_locGateway = mu_msgs[mu_msgNo2].mu_ag;
mu_lookAddPat3 ( mu_locNa1, mu_locGateway, mu_msg, mu_index );
return mu_index;
	Error.Error("The end of function construct3By12 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct4By21(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_AgentType mu_locHost("locHost",8);

/*** Variable declaration ***/
mu_1_NonceType mu_locNa2("locNa2",16);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",24);

mu_index = 0;
mu_locHost = mu_msgs[mu_msgNo1].mu_ag;
mu_locNa2 = mu_msgs[mu_msgNo2].mu_noncePart;
mu_lookAddPat4 ( mu_locHost, mu_locNa2, mu_msg, mu_index );
return mu_index;
	Error.Error("The end of function construct4By21 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct6By45(const mu_1_indexType& mu_msgNo4,const mu_1_indexType& mu_msgNo5)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_AgentType mu_locHost("locHost",8);

/*** Variable declaration ***/
mu_1_NonceType mu_locNa2("locNa2",16);

/*** Variable declaration ***/
mu_1_AgentType mu_locHostSk("locHostSk",24);

/*** Variable declaration ***/
mu_1_AgentType mu_k_ag("k_ag",32);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",40);

mu_index = 0;
mu_locHost = mu_msgs[mu_msgs[mu_msgNo4].mu_concatPart1].mu_ag;
mu_locNa2 = mu_msgs[mu_msgs[mu_msgNo4].mu_concatPart2].mu_noncePart;
mu_lookAddPat6 ( mu_locHost, mu_locNa2, mu_locHostSk, mu_msg, mu_index );
return mu_index;
	Error.Error("The end of function construct6By45 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By216(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_AgentType mu_locHost("locHost",8);

/*** Variable declaration ***/
mu_1_NonceType mu_locNa2("locNa2",16);

/*** Variable declaration ***/
mu_1_AgentType mu_locHostSk("locHostSk",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",32);

mu_index = 0;
mu_locHost = mu_msgs[mu_msgNo1].mu_ag;
mu_locNa2 = mu_msgs[mu_msgNo2].mu_noncePart;
mu_locHost = mu_msgs[mu_msgNo3].mu_k.mu_ag;
mu_lookAddPat7 ( mu_locHost, mu_locNa2, mu_locHostSk, mu_msg, mu_index );
return mu_index;
	Error.Error("The end of function construct7By216 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_PatnSet.mu_content[mu_i]) == (mu_msgNo) )
{
mu_flag = mu_true;
}
};
};
return mu_flag;
	Error.Error("The end of function exist reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_msgContains(mu_1_Message& mu_msg1,const mu_1_NonceType& mu_Na)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_msg1.mu_msgType) == (mu_nonce) )
{
if ( (mu_msg1.mu_noncePart) == (mu_Na) )
{
mu_flag = mu_true;
}
}
else
{
if ( (mu_msg1.mu_msgType) == (mu_aenc) )
{
mu_flag = mu_msgContains( mu_msgs[mu_msg1.mu_aencMsg], mu_Na );
}
else
{
if ( (mu_msg1.mu_msgType) == (mu_senc) )
{
mu_flag = mu_msgContains( mu_msgs[mu_msg1.mu_sencMsg], mu_Na );
}
else
{
if ( (mu_msg1.mu_msgType) == (mu_concat) )
{
bool mu__boolexpr40;
  if (mu_msgContains( mu_msgs[mu_msg1.mu_concatPart1], mu_Na )) mu__boolexpr40 = TRUE ;
  else {
  mu__boolexpr40 = (mu_msgContains( mu_msgs[mu_msg1.mu_concatPart2], mu_Na )) ; 
}
if ( mu__boolexpr40 )
{
mu_flag = mu_true;
}
}
}
}
}
return mu_flag;
	Error.Error("The end of function msgContains reached without returning values.");
};
/*** end function declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_ch.clear();
  mu_roleHost.clear();
  mu_roleGateway.clear();
  mu_roleServer.clear();
  mu_msgs.clear();
  mu_msg_end.clear();
  mu_pat1Set.clear();
  mu_pat2Set.clear();
  mu_pat3Set.clear();
  mu_pat4Set.clear();
  mu_pat5Set.clear();
  mu_pat6Set.clear();
  mu_pat7Set.clear();
  mu_Spy_known.clear();
  mu_emit.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_roleHost.undefine();
  mu_roleGateway.undefine();
  mu_roleServer.undefine();
  mu_msgs.undefine();
  mu_msg_end.undefine();
  mu_pat1Set.undefine();
  mu_pat2Set.undefine();
  mu_pat3Set.undefine();
  mu_pat4Set.undefine();
  mu_pat5Set.undefine();
  mu_pat6Set.undefine();
  mu_pat7Set.undefine();
  mu_Spy_known.undefine();
  mu_emit.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_roleHost.reset();
  mu_roleGateway.reset();
  mu_roleServer.reset();
  mu_msgs.reset();
  mu_msg_end.reset();
  mu_pat1Set.reset();
  mu_pat2Set.reset();
  mu_pat3Set.reset();
  mu_pat4Set.reset();
  mu_pat5Set.reset();
  mu_pat6Set.reset();
  mu_pat7Set.reset();
  mu_Spy_known.reset();
  mu_emit.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print();
  mu_roleHost.print();
  mu_roleGateway.print();
  mu_roleServer.print();
  mu_msgs.print();
  mu_msg_end.print();
  mu_pat1Set.print();
  mu_pat2Set.print();
  mu_pat3Set.print();
  mu_pat4Set.print();
  mu_pat5Set.print();
  mu_pat6Set.print();
  mu_pat7Set.print();
  mu_Spy_known.print();
  mu_emit.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print_statistic();
  mu_roleHost.print_statistic();
  mu_roleGateway.print_statistic();
  mu_roleServer.print_statistic();
  mu_msgs.print_statistic();
  mu_msg_end.print_statistic();
  mu_pat1Set.print_statistic();
  mu_pat2Set.print_statistic();
  mu_pat3Set.print_statistic();
  mu_pat4Set.print_statistic();
  mu_pat5Set.print_statistic();
  mu_pat6Set.print_statistic();
  mu_pat7Set.print_statistic();
  mu_Spy_known.print_statistic();
  mu_emit.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_ch.print_diff(prevstate);
    mu_roleHost.print_diff(prevstate);
    mu_roleGateway.print_diff(prevstate);
    mu_roleServer.print_diff(prevstate);
    mu_msgs.print_diff(prevstate);
    mu_msg_end.print_diff(prevstate);
    mu_pat1Set.print_diff(prevstate);
    mu_pat2Set.print_diff(prevstate);
    mu_pat3Set.print_diff(prevstate);
    mu_pat4Set.print_diff(prevstate);
    mu_pat5Set.print_diff(prevstate);
    mu_pat6Set.print_diff(prevstate);
    mu_pat7Set.print_diff(prevstate);
    mu_Spy_known.print_diff(prevstate);
    mu_emit.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_ch.to_state( newstate );
  mu_roleHost.to_state( newstate );
  mu_roleGateway.to_state( newstate );
  mu_roleServer.to_state( newstate );
  mu_msgs.to_state( newstate );
  mu_msg_end.to_state( newstate );
  mu_pat1Set.to_state( newstate );
  mu_pat2Set.to_state( newstate );
  mu_pat3Set.to_state( newstate );
  mu_pat4Set.to_state( newstate );
  mu_pat5Set.to_state( newstate );
  mu_pat6Set.to_state( newstate );
  mu_pat7Set.to_state( newstate );
  mu_Spy_known.to_state( newstate );
  mu_emit.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_indexType mu_i2;
    mu_i2.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("enconcat 7, i2:%s, i1:%s, i0:%s", mu_i2.Name(), mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i2;
    mu_i2.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr41;
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
bool mu__boolexpr46;
  if (!((mu_i0) <= (mu_pat2Set.mu_length))) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_i2) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = (!(mu_Spy_known[mu_construct7By216( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat6Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr41;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_indexType mu_i2;
    mu_i2.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 9261 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr47;
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
bool mu__boolexpr52;
  if (!((mu_i0) <= (mu_pat2Set.mu_length))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_i2) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (!(mu_Spy_known[mu_construct7By216( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat6Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr47) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    mu_i2.value((r % 21) + 0);
    r = r / 21;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_indexType mu_i2;
    mu_i2.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

mu_concatMsgNo = mu_construct7By216( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat6Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat7Set, mu_concatMsgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("deconcat 7, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr53;
bool mu__boolexpr54;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
bool mu__boolexpr55;
  if (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr53 = (!(mu__boolexpr55)) ; 
}
    return mu__boolexpr53;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9261;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 9282 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr56;
bool mu__boolexpr57;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
bool mu__boolexpr58;
  if (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr56 = (!(mu__boolexpr58)) ; 
}
	      if (mu__boolexpr56) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9261;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart1]) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart1] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart1;
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flag_pat2 );
if ( mu_flag_pat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart2]) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart2] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart2;
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("encrypt 6, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_j) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_Spy_known[mu_pat5Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (!(mu_Spy_known[mu_construct6By45( mu_pat4Set.mu_content[mu_i], mu_pat5Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr59;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9282;
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 9723 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_j) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_Spy_known[mu_pat5Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (!(mu_Spy_known[mu_construct6By45( mu_pat4Set.mu_content[mu_i], mu_pat5Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr63) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9282;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",0);

if ( (mu_msgs[mu_pat5Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct6By45( mu_pat4Set.mu_content[mu_i], mu_pat5Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat6Set, mu_encMsgNo )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("decrypt 6, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr67;
bool mu__boolexpr68;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr67;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9723;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 9744 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr69;
bool mu__boolexpr70;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr69) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9723;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",96);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat4("flag_pat4",104);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat4 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_aencMsg;
mu_isPat4 ( mu_msgs[mu_msgPat4], mu_flag_pat4 );
if ( mu_flag_pat4 )
{
if ( !(mu_exist( mu_pat4Set, mu_msgPat4 )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msgPat4;
}
}
}
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("enconcat 4, i1:%s, i0:%s", mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr71;
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
  if (!((mu_i0) <= (mu_pat2Set.mu_length))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (!(mu_Spy_known[mu_construct4By21( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] )])) ; 
}
    return mu__boolexpr71;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9744;
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10185 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr75;
bool mu__boolexpr76;
bool mu__boolexpr77;
bool mu__boolexpr78;
  if (!((mu_i0) <= (mu_pat2Set.mu_length))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (!(mu_Spy_known[mu_construct4By21( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] )])) ; 
}
	      if (mu__boolexpr75) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9744;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

mu_concatMsgNo = mu_construct4By21( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat4Set, mu_concatMsgNo )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("deconcat 4, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr79;
bool mu__boolexpr80;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
bool mu__boolexpr81;
  if (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr79 = (!(mu__boolexpr81)) ; 
}
    return mu__boolexpr79;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10185;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10206 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
bool mu__boolexpr84;
  if (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr82 = (!(mu__boolexpr84)) ; 
}
	      if (mu__boolexpr82) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10185;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart1]) )
{
mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart1] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart1;
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flag_pat2 );
if ( mu_flag_pat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart2]) )
{
mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart2] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart2;
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("enconcat 3, i1:%s, i0:%s", mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
bool mu__boolexpr88;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_i1) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (!(mu_Spy_known[mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] )])) ; 
}
    return mu__boolexpr85;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10206;
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10647 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_i1) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (!(mu_Spy_known[mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] )])) ; 
}
	      if (mu__boolexpr89) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10206;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_indexType mu_i1;
    mu_i1.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i0;
    mu_i0.value((r % 21) + 0);
    r = r / 21;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

mu_concatMsgNo = mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat3Set, mu_concatMsgNo )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("deconcat 3, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr93;
bool mu__boolexpr94;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
bool mu__boolexpr95;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr93 = (!(mu__boolexpr95)) ; 
}
    return mu__boolexpr93;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10647;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10668 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr96;
bool mu__boolexpr97;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
bool mu__boolexpr98;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr96 = (!(mu__boolexpr98)) ; 
}
	      if (mu__boolexpr96) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10647;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart1]) )
{
mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart1] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart1;
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart2]) )
{
mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart2] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart2;
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flag_pat2 );
if ( mu_flag_pat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg9, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr99;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10668;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10689 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr101;
bool mu__boolexpr102;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr101) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10668;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr103;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr103 )
{
mu_ch[9].clear();
mu_ch[9].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[9].mu_sender = mu_Intruder;
mu_ch[9].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[9].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "9. ";
mu_ch[9].mu_sender.print();
cout << "   ";
mu_ch[9].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[9].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg9");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[9].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10689;
    while (what_rule < 10690 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[9].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10689;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[9].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[9].mu_empty = mu_true;
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg8, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr104;
bool mu__boolexpr105;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr104;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10690;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10711 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr106;
bool mu__boolexpr107;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr106) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10690;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr108;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr108 )
{
mu_ch[8].clear();
mu_ch[8].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[8].mu_sender = mu_Intruder;
mu_ch[8].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[8].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "8. ";
mu_ch[8].mu_sender.print();
cout << "   ";
mu_ch[8].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[8].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg8");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[8].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10711;
    while (what_rule < 10712 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[8].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10711;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[8].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[8].mu_empty = mu_true;
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg7, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr109;
bool mu__boolexpr110;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr109;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10712;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10733 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr111;
bool mu__boolexpr112;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr111) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10712;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr113;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr113 )
{
mu_ch[7].clear();
mu_ch[7].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[7].mu_sender = mu_Intruder;
mu_ch[7].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[7].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "7. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[7].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg7");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[7].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10733;
    while (what_rule < 10734 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[7].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10733;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[7].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[7].mu_empty = mu_true;
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg6, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr114;
bool mu__boolexpr115;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr114;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10734;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10755 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr116;
bool mu__boolexpr117;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr116) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10734;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr118;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr118 )
{
mu_ch[6].clear();
mu_ch[6].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[6].mu_sender = mu_Intruder;
mu_ch[6].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[6].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "6. ";
mu_ch[6].mu_sender.print();
cout << "   ";
mu_ch[6].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg6");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[6].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10755;
    while (what_rule < 10756 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[6].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10755;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[6].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[6].mu_empty = mu_true;
  };

};
/******************** RuleBase16 ********************/
class RuleBase16
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg5, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr119;
bool mu__boolexpr120;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr119;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10756;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10777 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr121;
bool mu__boolexpr122;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr121) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10756;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr123;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr123 )
{
mu_ch[5].clear();
mu_ch[5].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[5].mu_sender = mu_Intruder;
mu_ch[5].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[5].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "5. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase17 ********************/
class RuleBase17
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg5");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[5].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10777;
    while (what_rule < 10778 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[5].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10777;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[5].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[5].mu_empty = mu_true;
  };

};
/******************** RuleBase18 ********************/
class RuleBase18
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg4, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr124;
bool mu__boolexpr125;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr124;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10778;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10799 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr126;
bool mu__boolexpr127;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr126) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10778;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr128;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr128 )
{
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "4. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase19 ********************/
class RuleBase19
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg4");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[4].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10799;
    while (what_rule < 10800 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[4].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10799;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[4].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[4].mu_empty = mu_true;
  };

};
/******************** RuleBase20 ********************/
class RuleBase20
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg3, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr129;
bool mu__boolexpr130;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr129;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10800;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10821 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr131) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10800;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr133;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr133 )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase21 ********************/
class RuleBase21
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg3");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[3].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10821;
    while (what_rule < 10822 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[3].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10821;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[3].mu_empty = mu_true;
  };

};
/******************** RuleBase22 ********************/
class RuleBase22
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg2, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr134;
bool mu__boolexpr135;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr134;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10822;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10843 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr136;
bool mu__boolexpr137;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr136) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10822;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr138;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr138 )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase23 ********************/
class RuleBase23
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg2");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10843;
    while (what_rule < 10844 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[2].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10843;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[2].mu_empty = mu_true;
  };

};
/******************** RuleBase24 ********************/
class RuleBase24
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg1, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr139;
bool mu__boolexpr140;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr139;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10844;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10865 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr141;
bool mu__boolexpr142;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr141) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10844;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr143;
  if (!(!(mu_emit[mu_pat3Set.mu_content[mu_i]]))) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_msgs[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleServer[mu_j].mu_Server)) ; 
}
if ( mu__boolexpr143 )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat3Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat3Set.mu_content[mu_i]] = mu_true;
cout << "1. ";
mu_ch[1].mu_sender.print();
cout << "   ";
mu_ch[1].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[1].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase25 ********************/
class RuleBase25
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg1");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[1].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10865;
    while (what_rule < 10866 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[1].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10865;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[1].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat3 ( mu_msg, mu_flag_pat3 );
if ( mu_flag_pat3 )
{
if ( !(mu_exist( mu_pat3Set, mu_msgNo )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[1].mu_empty = mu_true;
  };

};
/******************** RuleBase26 ********************/
class RuleBase26
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg9, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr144;
bool mu__boolexpr145;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr144;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10866;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10887 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr146;
bool mu__boolexpr147;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr146) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10866;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr148;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr148 )
{
mu_ch[9].clear();
mu_ch[9].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[9].mu_sender = mu_Intruder;
mu_ch[9].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[9].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "9. ";
mu_ch[9].mu_sender.print();
cout << "   ";
mu_ch[9].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[9].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase27 ********************/
class RuleBase27
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg9");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[9].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10887;
    while (what_rule < 10888 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[9].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10887;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[9].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[9].mu_empty = mu_true;
  };

};
/******************** RuleBase28 ********************/
class RuleBase28
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg8, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr149;
bool mu__boolexpr150;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr149;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10888;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10909 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr151;
bool mu__boolexpr152;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr151) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10888;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr153;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr153 )
{
mu_ch[8].clear();
mu_ch[8].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[8].mu_sender = mu_Intruder;
mu_ch[8].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[8].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "8. ";
mu_ch[8].mu_sender.print();
cout << "   ";
mu_ch[8].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[8].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase29 ********************/
class RuleBase29
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg8");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[8].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10909;
    while (what_rule < 10910 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[8].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10909;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[8].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[8].mu_empty = mu_true;
  };

};
/******************** RuleBase30 ********************/
class RuleBase30
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg7, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr154;
bool mu__boolexpr155;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr154;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10910;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10931 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr156;
bool mu__boolexpr157;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr156) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10910;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr158;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr158 )
{
mu_ch[7].clear();
mu_ch[7].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[7].mu_sender = mu_Intruder;
mu_ch[7].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[7].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "7. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[7].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase31 ********************/
class RuleBase31
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg7");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[7].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10931;
    while (what_rule < 10932 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[7].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10931;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[7].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[7].mu_empty = mu_true;
  };

};
/******************** RuleBase32 ********************/
class RuleBase32
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg6, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr159;
bool mu__boolexpr160;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr159;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10932;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10953 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr161;
bool mu__boolexpr162;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr161) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10932;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr163;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr163 )
{
mu_ch[6].clear();
mu_ch[6].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[6].mu_sender = mu_Intruder;
mu_ch[6].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[6].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "6. ";
mu_ch[6].mu_sender.print();
cout << "   ";
mu_ch[6].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase33 ********************/
class RuleBase33
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg6");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[6].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10953;
    while (what_rule < 10954 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[6].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10953;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[6].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[6].mu_empty = mu_true;
  };

};
/******************** RuleBase34 ********************/
class RuleBase34
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg5, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr164;
bool mu__boolexpr165;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr164;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10954;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10975 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr166;
bool mu__boolexpr167;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr166) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10954;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr168;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr168 )
{
mu_ch[5].clear();
mu_ch[5].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[5].mu_sender = mu_Intruder;
mu_ch[5].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[5].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "5. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase35 ********************/
class RuleBase35
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg5");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[5].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10975;
    while (what_rule < 10976 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[5].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10975;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[5].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[5].mu_empty = mu_true;
  };

};
/******************** RuleBase36 ********************/
class RuleBase36
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg4, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr169;
bool mu__boolexpr170;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr169;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10976;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 10997 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr171;
bool mu__boolexpr172;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr171) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10976;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr173;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr173 )
{
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "4. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase37 ********************/
class RuleBase37
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg4");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[4].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10997;
    while (what_rule < 10998 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[4].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10997;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[4].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[4].mu_empty = mu_true;
  };

};
/******************** RuleBase38 ********************/
class RuleBase38
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg3, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr174;
bool mu__boolexpr175;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr174;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10998;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11019 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr176;
bool mu__boolexpr177;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr176) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10998;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr178;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr178 )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase39 ********************/
class RuleBase39
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg3");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[3].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11019;
    while (what_rule < 11020 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[3].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11019;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[3].mu_empty = mu_true;
  };

};
/******************** RuleBase40 ********************/
class RuleBase40
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg2, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr179;
bool mu__boolexpr180;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr179;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11020;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11041 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr181;
bool mu__boolexpr182;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr181) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11020;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr183;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr183 )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase41 ********************/
class RuleBase41
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg2");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11041;
    while (what_rule < 11042 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[2].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11041;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[2].mu_empty = mu_true;
  };

};
/******************** RuleBase42 ********************/
class RuleBase42
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg1, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr184;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11042;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11063 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr186;
bool mu__boolexpr187;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr186) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11042;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr188;
  if (!(!(mu_emit[mu_pat3Set.mu_content[mu_i]]))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_msgs[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleGateway[mu_j].mu_Gateway)) ; 
}
if ( mu__boolexpr188 )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat3Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat3Set.mu_content[mu_i]] = mu_true;
cout << "1. ";
mu_ch[1].mu_sender.print();
cout << "   ";
mu_ch[1].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[1].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase43 ********************/
class RuleBase43
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg1");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[1].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11063;
    while (what_rule < 11064 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[1].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11063;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[1].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat3 ( mu_msg, mu_flag_pat3 );
if ( mu_flag_pat3 )
{
if ( !(mu_exist( mu_pat3Set, mu_msgNo )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[1].mu_empty = mu_true;
  };

};
/******************** RuleBase44 ********************/
class RuleBase44
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg9, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr189;
bool mu__boolexpr190;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr189;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11064;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11085 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr191;
bool mu__boolexpr192;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr191) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11064;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr193;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr193 )
{
mu_ch[9].clear();
mu_ch[9].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[9].mu_sender = mu_Intruder;
mu_ch[9].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[9].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "9. ";
mu_ch[9].mu_sender.print();
cout << "   ";
mu_ch[9].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[9].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase45 ********************/
class RuleBase45
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg9");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[9].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11085;
    while (what_rule < 11086 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[9].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11085;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[9].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[9].mu_empty = mu_true;
  };

};
/******************** RuleBase46 ********************/
class RuleBase46
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg8, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr194;
bool mu__boolexpr195;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr194;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11086;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11107 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr196;
bool mu__boolexpr197;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr196) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11086;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr198;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr198 )
{
mu_ch[8].clear();
mu_ch[8].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[8].mu_sender = mu_Intruder;
mu_ch[8].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[8].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "8. ";
mu_ch[8].mu_sender.print();
cout << "   ";
mu_ch[8].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[8].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase47 ********************/
class RuleBase47
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg8");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[8].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11107;
    while (what_rule < 11108 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[8].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11107;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[8].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[8].mu_empty = mu_true;
  };

};
/******************** RuleBase48 ********************/
class RuleBase48
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg7, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr199;
bool mu__boolexpr200;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr199;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11108;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11129 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr201;
bool mu__boolexpr202;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr201) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11108;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr203;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr203 )
{
mu_ch[7].clear();
mu_ch[7].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[7].mu_sender = mu_Intruder;
mu_ch[7].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[7].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "7. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[7].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase49 ********************/
class RuleBase49
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg7");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[7].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11129;
    while (what_rule < 11130 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[7].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11129;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[7].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[7].mu_empty = mu_true;
  };

};
/******************** RuleBase50 ********************/
class RuleBase50
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg6, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr204;
bool mu__boolexpr205;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr204;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11130;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11151 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr206;
bool mu__boolexpr207;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr206) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11130;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr208;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr208 )
{
mu_ch[6].clear();
mu_ch[6].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[6].mu_sender = mu_Intruder;
mu_ch[6].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[6].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "6. ";
mu_ch[6].mu_sender.print();
cout << "   ";
mu_ch[6].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase51 ********************/
class RuleBase51
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg6");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[6].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11151;
    while (what_rule < 11152 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[6].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11151;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[6].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[6].mu_empty = mu_true;
  };

};
/******************** RuleBase52 ********************/
class RuleBase52
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg5, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr209;
bool mu__boolexpr210;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr209;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11152;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11173 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr211;
bool mu__boolexpr212;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr211) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11152;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr213;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr213 )
{
mu_ch[5].clear();
mu_ch[5].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[5].mu_sender = mu_Intruder;
mu_ch[5].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[5].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "5. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase53 ********************/
class RuleBase53
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg5");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[5].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11173;
    while (what_rule < 11174 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[5].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11173;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[5].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[5].mu_empty = mu_true;
  };

};
/******************** RuleBase54 ********************/
class RuleBase54
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg4, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr214;
bool mu__boolexpr215;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr214;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11174;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11195 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr216;
bool mu__boolexpr217;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr216) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11174;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr218;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr218 )
{
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "4. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase55 ********************/
class RuleBase55
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg4");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[4].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11195;
    while (what_rule < 11196 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[4].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11195;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[4].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[4].mu_empty = mu_true;
  };

};
/******************** RuleBase56 ********************/
class RuleBase56
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg3, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr219;
bool mu__boolexpr220;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr219;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11196;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11217 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr221;
bool mu__boolexpr222;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr221) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11196;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr223;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr223 )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase57 ********************/
class RuleBase57
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg3");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[3].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11217;
    while (what_rule < 11218 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[3].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11217;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[3].mu_empty = mu_true;
  };

};
/******************** RuleBase58 ********************/
class RuleBase58
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg2, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr224;
bool mu__boolexpr225;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr224;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11218;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11239 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr226;
bool mu__boolexpr227;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr226) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11218;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr228;
  if (!(!(mu_emit[mu_pat7Set.mu_content[mu_i]]))) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr228 )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase59 ********************/
class RuleBase59
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg2");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11239;
    while (what_rule < 11240 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[2].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11239;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[2].mu_empty = mu_true;
  };

};
/******************** RuleBase60 ********************/
class RuleBase60
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg1, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr229;
bool mu__boolexpr230;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr229;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11240;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 11261 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr231;
bool mu__boolexpr232;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr231) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11240;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr233;
  if (!(!(mu_emit[mu_pat3Set.mu_content[mu_i]]))) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_msgs[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_roleHost[mu_j].mu_Host)) ; 
}
if ( mu__boolexpr233 )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat3Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat3Set.mu_content[mu_i]] = mu_true;
cout << "1. ";
mu_ch[1].mu_sender.print();
cout << "   ";
mu_ch[1].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[1].mu_msg );
cout << "\n";
}
  };

};
/******************** RuleBase61 ********************/
class RuleBase61
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsg1");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[1].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11261;
    while (what_rule < 11262 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_ch[1].mu_empty) == (mu_false)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11261;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[1].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat3 ( mu_msg, mu_flag_pat3 );
if ( mu_flag_pat3 )
{
if ( !(mu_exist( mu_pat3Set, mu_msgNo )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
}
mu_ch[1].mu_empty = mu_true;
  };

};
/******************** RuleBase62 ********************/
class RuleBase62
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleServer4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr234;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server4))) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr234;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11262;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11263 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr235;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server4))) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr235) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11262;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons7 ( mu_roleServer[mu_i].mu_Server, mu_roleServer[mu_i].mu_Na4, mu_roleServer[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleServer[mu_i].mu_Server;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleServer[mu_i].mu_st = mu_Server1;
cout << "4. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
mu_roleServer[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase63 ********************/
class RuleBase63
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleServer3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr236;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server3))) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr236;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11263;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11264 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr237;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server3))) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr237) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11263;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_destruct7 ( mu_msg, mu_roleServer[mu_i].mu_loc_Host, mu_roleServer[mu_i].mu_loc_Na3, mu_roleServer[mu_i].mu_loc_Host );
bool mu__boolexpr238;
bool mu__boolexpr239;
  if (!((mu_roleServer[mu_i].mu_loc_Host) == (mu_roleServer[mu_i].mu_Host))) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_roleServer[mu_i].mu_loc_Na3) == (mu_roleServer[mu_i].mu_Na3)) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_roleServer[mu_i].mu_loc_Host) == (mu_roleServer[mu_i].mu_Host)) ; 
}
if ( mu__boolexpr238 )
{
mu_ch[3].mu_empty = mu_true;
mu_roleServer[mu_i].mu_st = mu_Server4;
}
  };

};
/******************** RuleBase64 ********************/
class RuleBase64
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleServer2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr240;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server2))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr240;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11264;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11265 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr241;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server2))) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr241) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11264;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons7 ( mu_roleServer[mu_i].mu_Server, mu_roleServer[mu_i].mu_Na3, mu_roleServer[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleServer[mu_i].mu_Server;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleServer[mu_i].mu_st = mu_Server3;
cout << "2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
  };

};
/******************** RuleBase65 ********************/
class RuleBase65
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleServer1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr242;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server1))) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr242;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11265;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11266 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr243;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server1))) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr243) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11265;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_destruct7 ( mu_msg, mu_roleServer[mu_i].mu_loc_Host, mu_roleServer[mu_i].mu_loc_Na2, mu_roleServer[mu_i].mu_loc_Host );
bool mu__boolexpr244;
  if (!((mu_roleServer[mu_i].mu_loc_Host) == (mu_roleServer[mu_i].mu_Host))) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_roleServer[mu_i].mu_loc_Host) == (mu_roleServer[mu_i].mu_Host)) ; 
}
if ( mu__boolexpr244 )
{
mu_ch[1].mu_empty = mu_true;
mu_roleServer[mu_i].mu_st = mu_Server2;
}
  };

};
/******************** RuleBase66 ********************/
class RuleBase66
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway9 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr245;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway9))) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_ch[9].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr245;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11266;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11267 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr246;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway9))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_ch[9].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr246) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11266;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons7 ( mu_roleGateway[mu_i].mu_Server, mu_roleGateway[mu_i].mu_loc_Na4, mu_roleGateway[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[9].mu_empty = mu_false;
mu_ch[9].mu_msg = mu_msg;
mu_ch[9].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[9].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway1;
cout << "9. ";
mu_ch[9].mu_sender.print();
cout << "   ";
mu_ch[9].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[9].mu_msg );
cout << "\n";
mu_roleGateway[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase67 ********************/
class RuleBase67
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway8 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr247;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway8))) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr247;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11267;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11268 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr248;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway8))) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr248) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11267;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[8].mu_msg;
mu_destruct7 ( mu_msg, mu_roleGateway[mu_i].mu_loc_Server, mu_roleGateway[mu_i].mu_loc_Na4, mu_roleGateway[mu_i].mu_loc_Server );
bool mu__boolexpr249;
  if (!((mu_roleGateway[mu_i].mu_loc_Server) == (mu_roleGateway[mu_i].mu_Server))) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_roleGateway[mu_i].mu_loc_Server) == (mu_roleGateway[mu_i].mu_Server)) ; 
}
if ( mu__boolexpr249 )
{
mu_ch[8].mu_empty = mu_true;
mu_roleGateway[mu_i].mu_st = mu_Gateway9;
}
  };

};
/******************** RuleBase68 ********************/
class RuleBase68
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway7 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr250;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway7))) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr250;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11268;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11269 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr251;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway7))) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr251) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11268;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons7 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_loc_Na3, mu_roleGateway[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[7].mu_empty = mu_false;
mu_ch[7].mu_msg = mu_msg;
mu_ch[7].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[7].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway8;
cout << "7. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[7].mu_msg );
cout << "\n";
  };

};
/******************** RuleBase69 ********************/
class RuleBase69
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway6 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr252;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway6))) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr252;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11269;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11270 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr253;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway6))) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr253) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11269;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[6].mu_msg;
mu_destruct7 ( mu_msg, mu_roleGateway[mu_i].mu_loc_Host, mu_roleGateway[mu_i].mu_loc_Na3, mu_roleGateway[mu_i].mu_loc_Host );
bool mu__boolexpr254;
  if (!((mu_roleGateway[mu_i].mu_loc_Host) == (mu_roleGateway[mu_i].mu_Host))) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_roleGateway[mu_i].mu_loc_Host) == (mu_roleGateway[mu_i].mu_Host)) ; 
}
if ( mu__boolexpr254 )
{
mu_ch[6].mu_empty = mu_true;
mu_roleGateway[mu_i].mu_st = mu_Gateway7;
}
  };

};
/******************** RuleBase70 ********************/
class RuleBase70
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway5 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr255;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway5))) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr255;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11270;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11271 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr256;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway5))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr256) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11270;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons7 ( mu_roleGateway[mu_i].mu_Server, mu_roleGateway[mu_i].mu_loc_Na3, mu_roleGateway[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[5].mu_empty = mu_false;
mu_ch[5].mu_msg = mu_msg;
mu_ch[5].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[5].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway6;
cout << "5. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
cout << "\n";
  };

};
/******************** RuleBase71 ********************/
class RuleBase71
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr257;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway4))) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr257;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11271;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11272 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr258;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway4))) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr258) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11271;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[4].mu_msg;
mu_destruct7 ( mu_msg, mu_roleGateway[mu_i].mu_loc_Server, mu_roleGateway[mu_i].mu_loc_Na3, mu_roleGateway[mu_i].mu_loc_Server );
bool mu__boolexpr259;
  if (!((mu_roleGateway[mu_i].mu_loc_Server) == (mu_roleGateway[mu_i].mu_Server))) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_roleGateway[mu_i].mu_loc_Server) == (mu_roleGateway[mu_i].mu_Server)) ; 
}
if ( mu__boolexpr259 )
{
mu_ch[4].mu_empty = mu_true;
mu_roleGateway[mu_i].mu_st = mu_Gateway5;
}
  };

};
/******************** RuleBase72 ********************/
class RuleBase72
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr260;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway3))) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr260;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11272;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11273 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr261;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway3))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr261) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11272;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons7 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_loc_Na2, mu_roleGateway[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway4;
cout << "3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
  };

};
/******************** RuleBase73 ********************/
class RuleBase73
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr262;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway2))) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr262;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11273;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11274 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr263;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway2))) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr263) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11273;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_destruct7 ( mu_msg, mu_roleGateway[mu_i].mu_loc_Host, mu_roleGateway[mu_i].mu_loc_Na2, mu_roleGateway[mu_i].mu_loc_Host );
bool mu__boolexpr264;
  if (!((mu_roleGateway[mu_i].mu_loc_Host) == (mu_roleGateway[mu_i].mu_Host))) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_roleGateway[mu_i].mu_loc_Host) == (mu_roleGateway[mu_i].mu_Host)) ; 
}
if ( mu__boolexpr264 )
{
mu_ch[2].mu_empty = mu_true;
mu_roleGateway[mu_i].mu_st = mu_Gateway3;
}
  };

};
/******************** RuleBase74 ********************/
class RuleBase74
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleGateway1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr265;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway1))) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr265;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11274;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11275 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr266;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway1))) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr266) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11274;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons3 ( mu_roleGateway[mu_i].mu_Na1, mu_roleGateway[mu_i].mu_Gateway, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway2;
cout << "1. ";
mu_ch[1].mu_sender.print();
cout << "   ";
mu_ch[1].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[1].mu_msg );
cout << "\n";
  };

};
/******************** RuleBase75 ********************/
class RuleBase75
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleHost5 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr267;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host5))) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr267;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11275;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11276 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr268;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host5))) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr268) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11275;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[5].mu_msg;
mu_destruct7 ( mu_msg, mu_roleHost[mu_i].mu_loc_Server, mu_roleHost[mu_i].mu_loc_Na4, mu_roleHost[mu_i].mu_loc_Server );
if ( (mu_roleHost[mu_i].mu_loc_Server) == (mu_roleHost[mu_i].mu_Server) )
{
mu_ch[5].mu_empty = mu_true;
mu_roleHost[mu_i].mu_st = mu_Host1;
}
mu_roleHost[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase76 ********************/
class RuleBase76
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleHost4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr269;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host4))) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr269;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11276;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11277 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr270;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host4))) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr270) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11276;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons7 ( mu_roleHost[mu_i].mu_Host, mu_roleHost[mu_i].mu_loc_Na3, mu_roleHost[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleHost[mu_i].mu_Host;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleHost[mu_i].mu_st = mu_Host5;
cout << "4. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
  };

};
/******************** RuleBase77 ********************/
class RuleBase77
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleHost3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr271;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host3))) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr271;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11277;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11278 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr272;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host3))) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr272) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11277;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_destruct7 ( mu_msg, mu_roleHost[mu_i].mu_loc_Server, mu_roleHost[mu_i].mu_loc_Na3, mu_roleHost[mu_i].mu_loc_Server );
if ( (mu_roleHost[mu_i].mu_loc_Server) == (mu_roleHost[mu_i].mu_Server) )
{
mu_ch[3].mu_empty = mu_true;
mu_roleHost[mu_i].mu_st = mu_Host4;
}
  };

};
/******************** RuleBase78 ********************/
class RuleBase78
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleHost2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr273;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host2))) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr273;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11278;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11279 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr274;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host2))) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr274) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11278;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_cons7 ( mu_roleHost[mu_i].mu_Host, mu_roleHost[mu_i].mu_Na2, mu_roleHost[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleHost[mu_i].mu_Host;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleHost[mu_i].mu_st = mu_Host3;
cout << "2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
  };

};
/******************** RuleBase79 ********************/
class RuleBase79
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleHost1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr275;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host1))) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr275;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11279;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 11280 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr276;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host1))) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr276) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11279;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",96);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_destruct3 ( mu_msg, mu_roleHost[mu_i].mu_loc_Na1, mu_roleHost[mu_i].mu_loc_Gateway );
if ( (mu_roleHost[mu_i].mu_loc_Gateway) == (mu_roleHost[mu_i].mu_Gateway) )
{
mu_ch[1].mu_empty = mu_true;
mu_roleHost[mu_i].mu_st = mu_Host2;
}
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
  RuleBase16 R16;
  RuleBase17 R17;
  RuleBase18 R18;
  RuleBase19 R19;
  RuleBase20 R20;
  RuleBase21 R21;
  RuleBase22 R22;
  RuleBase23 R23;
  RuleBase24 R24;
  RuleBase25 R25;
  RuleBase26 R26;
  RuleBase27 R27;
  RuleBase28 R28;
  RuleBase29 R29;
  RuleBase30 R30;
  RuleBase31 R31;
  RuleBase32 R32;
  RuleBase33 R33;
  RuleBase34 R34;
  RuleBase35 R35;
  RuleBase36 R36;
  RuleBase37 R37;
  RuleBase38 R38;
  RuleBase39 R39;
  RuleBase40 R40;
  RuleBase41 R41;
  RuleBase42 R42;
  RuleBase43 R43;
  RuleBase44 R44;
  RuleBase45 R45;
  RuleBase46 R46;
  RuleBase47 R47;
  RuleBase48 R48;
  RuleBase49 R49;
  RuleBase50 R50;
  RuleBase51 R51;
  RuleBase52 R52;
  RuleBase53 R53;
  RuleBase54 R54;
  RuleBase55 R55;
  RuleBase56 R56;
  RuleBase57 R57;
  RuleBase58 R58;
  RuleBase59 R59;
  RuleBase60 R60;
  RuleBase61 R61;
  RuleBase62 R62;
  RuleBase63 R63;
  RuleBase64 R64;
  RuleBase65 R65;
  RuleBase66 R66;
  RuleBase67 R67;
  RuleBase68 R68;
  RuleBase69 R69;
  RuleBase70 R70;
  RuleBase71 R71;
  RuleBase72 R72;
  RuleBase73 R73;
  RuleBase74 R74;
  RuleBase75 R75;
  RuleBase76 R76;
  RuleBase77 R77;
  RuleBase78 R78;
  RuleBase79 R79;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<9261)
    { R0.NextRule(what_rule);
      if (what_rule<9261) return; }
  if (what_rule>=9261 && what_rule<9282)
    { R1.NextRule(what_rule);
      if (what_rule<9282) return; }
  if (what_rule>=9282 && what_rule<9723)
    { R2.NextRule(what_rule);
      if (what_rule<9723) return; }
  if (what_rule>=9723 && what_rule<9744)
    { R3.NextRule(what_rule);
      if (what_rule<9744) return; }
  if (what_rule>=9744 && what_rule<10185)
    { R4.NextRule(what_rule);
      if (what_rule<10185) return; }
  if (what_rule>=10185 && what_rule<10206)
    { R5.NextRule(what_rule);
      if (what_rule<10206) return; }
  if (what_rule>=10206 && what_rule<10647)
    { R6.NextRule(what_rule);
      if (what_rule<10647) return; }
  if (what_rule>=10647 && what_rule<10668)
    { R7.NextRule(what_rule);
      if (what_rule<10668) return; }
  if (what_rule>=10668 && what_rule<10689)
    { R8.NextRule(what_rule);
      if (what_rule<10689) return; }
  if (what_rule>=10689 && what_rule<10690)
    { R9.NextRule(what_rule);
      if (what_rule<10690) return; }
  if (what_rule>=10690 && what_rule<10711)
    { R10.NextRule(what_rule);
      if (what_rule<10711) return; }
  if (what_rule>=10711 && what_rule<10712)
    { R11.NextRule(what_rule);
      if (what_rule<10712) return; }
  if (what_rule>=10712 && what_rule<10733)
    { R12.NextRule(what_rule);
      if (what_rule<10733) return; }
  if (what_rule>=10733 && what_rule<10734)
    { R13.NextRule(what_rule);
      if (what_rule<10734) return; }
  if (what_rule>=10734 && what_rule<10755)
    { R14.NextRule(what_rule);
      if (what_rule<10755) return; }
  if (what_rule>=10755 && what_rule<10756)
    { R15.NextRule(what_rule);
      if (what_rule<10756) return; }
  if (what_rule>=10756 && what_rule<10777)
    { R16.NextRule(what_rule);
      if (what_rule<10777) return; }
  if (what_rule>=10777 && what_rule<10778)
    { R17.NextRule(what_rule);
      if (what_rule<10778) return; }
  if (what_rule>=10778 && what_rule<10799)
    { R18.NextRule(what_rule);
      if (what_rule<10799) return; }
  if (what_rule>=10799 && what_rule<10800)
    { R19.NextRule(what_rule);
      if (what_rule<10800) return; }
  if (what_rule>=10800 && what_rule<10821)
    { R20.NextRule(what_rule);
      if (what_rule<10821) return; }
  if (what_rule>=10821 && what_rule<10822)
    { R21.NextRule(what_rule);
      if (what_rule<10822) return; }
  if (what_rule>=10822 && what_rule<10843)
    { R22.NextRule(what_rule);
      if (what_rule<10843) return; }
  if (what_rule>=10843 && what_rule<10844)
    { R23.NextRule(what_rule);
      if (what_rule<10844) return; }
  if (what_rule>=10844 && what_rule<10865)
    { R24.NextRule(what_rule);
      if (what_rule<10865) return; }
  if (what_rule>=10865 && what_rule<10866)
    { R25.NextRule(what_rule);
      if (what_rule<10866) return; }
  if (what_rule>=10866 && what_rule<10887)
    { R26.NextRule(what_rule);
      if (what_rule<10887) return; }
  if (what_rule>=10887 && what_rule<10888)
    { R27.NextRule(what_rule);
      if (what_rule<10888) return; }
  if (what_rule>=10888 && what_rule<10909)
    { R28.NextRule(what_rule);
      if (what_rule<10909) return; }
  if (what_rule>=10909 && what_rule<10910)
    { R29.NextRule(what_rule);
      if (what_rule<10910) return; }
  if (what_rule>=10910 && what_rule<10931)
    { R30.NextRule(what_rule);
      if (what_rule<10931) return; }
  if (what_rule>=10931 && what_rule<10932)
    { R31.NextRule(what_rule);
      if (what_rule<10932) return; }
  if (what_rule>=10932 && what_rule<10953)
    { R32.NextRule(what_rule);
      if (what_rule<10953) return; }
  if (what_rule>=10953 && what_rule<10954)
    { R33.NextRule(what_rule);
      if (what_rule<10954) return; }
  if (what_rule>=10954 && what_rule<10975)
    { R34.NextRule(what_rule);
      if (what_rule<10975) return; }
  if (what_rule>=10975 && what_rule<10976)
    { R35.NextRule(what_rule);
      if (what_rule<10976) return; }
  if (what_rule>=10976 && what_rule<10997)
    { R36.NextRule(what_rule);
      if (what_rule<10997) return; }
  if (what_rule>=10997 && what_rule<10998)
    { R37.NextRule(what_rule);
      if (what_rule<10998) return; }
  if (what_rule>=10998 && what_rule<11019)
    { R38.NextRule(what_rule);
      if (what_rule<11019) return; }
  if (what_rule>=11019 && what_rule<11020)
    { R39.NextRule(what_rule);
      if (what_rule<11020) return; }
  if (what_rule>=11020 && what_rule<11041)
    { R40.NextRule(what_rule);
      if (what_rule<11041) return; }
  if (what_rule>=11041 && what_rule<11042)
    { R41.NextRule(what_rule);
      if (what_rule<11042) return; }
  if (what_rule>=11042 && what_rule<11063)
    { R42.NextRule(what_rule);
      if (what_rule<11063) return; }
  if (what_rule>=11063 && what_rule<11064)
    { R43.NextRule(what_rule);
      if (what_rule<11064) return; }
  if (what_rule>=11064 && what_rule<11085)
    { R44.NextRule(what_rule);
      if (what_rule<11085) return; }
  if (what_rule>=11085 && what_rule<11086)
    { R45.NextRule(what_rule);
      if (what_rule<11086) return; }
  if (what_rule>=11086 && what_rule<11107)
    { R46.NextRule(what_rule);
      if (what_rule<11107) return; }
  if (what_rule>=11107 && what_rule<11108)
    { R47.NextRule(what_rule);
      if (what_rule<11108) return; }
  if (what_rule>=11108 && what_rule<11129)
    { R48.NextRule(what_rule);
      if (what_rule<11129) return; }
  if (what_rule>=11129 && what_rule<11130)
    { R49.NextRule(what_rule);
      if (what_rule<11130) return; }
  if (what_rule>=11130 && what_rule<11151)
    { R50.NextRule(what_rule);
      if (what_rule<11151) return; }
  if (what_rule>=11151 && what_rule<11152)
    { R51.NextRule(what_rule);
      if (what_rule<11152) return; }
  if (what_rule>=11152 && what_rule<11173)
    { R52.NextRule(what_rule);
      if (what_rule<11173) return; }
  if (what_rule>=11173 && what_rule<11174)
    { R53.NextRule(what_rule);
      if (what_rule<11174) return; }
  if (what_rule>=11174 && what_rule<11195)
    { R54.NextRule(what_rule);
      if (what_rule<11195) return; }
  if (what_rule>=11195 && what_rule<11196)
    { R55.NextRule(what_rule);
      if (what_rule<11196) return; }
  if (what_rule>=11196 && what_rule<11217)
    { R56.NextRule(what_rule);
      if (what_rule<11217) return; }
  if (what_rule>=11217 && what_rule<11218)
    { R57.NextRule(what_rule);
      if (what_rule<11218) return; }
  if (what_rule>=11218 && what_rule<11239)
    { R58.NextRule(what_rule);
      if (what_rule<11239) return; }
  if (what_rule>=11239 && what_rule<11240)
    { R59.NextRule(what_rule);
      if (what_rule<11240) return; }
  if (what_rule>=11240 && what_rule<11261)
    { R60.NextRule(what_rule);
      if (what_rule<11261) return; }
  if (what_rule>=11261 && what_rule<11262)
    { R61.NextRule(what_rule);
      if (what_rule<11262) return; }
  if (what_rule>=11262 && what_rule<11263)
    { R62.NextRule(what_rule);
      if (what_rule<11263) return; }
  if (what_rule>=11263 && what_rule<11264)
    { R63.NextRule(what_rule);
      if (what_rule<11264) return; }
  if (what_rule>=11264 && what_rule<11265)
    { R64.NextRule(what_rule);
      if (what_rule<11265) return; }
  if (what_rule>=11265 && what_rule<11266)
    { R65.NextRule(what_rule);
      if (what_rule<11266) return; }
  if (what_rule>=11266 && what_rule<11267)
    { R66.NextRule(what_rule);
      if (what_rule<11267) return; }
  if (what_rule>=11267 && what_rule<11268)
    { R67.NextRule(what_rule);
      if (what_rule<11268) return; }
  if (what_rule>=11268 && what_rule<11269)
    { R68.NextRule(what_rule);
      if (what_rule<11269) return; }
  if (what_rule>=11269 && what_rule<11270)
    { R69.NextRule(what_rule);
      if (what_rule<11270) return; }
  if (what_rule>=11270 && what_rule<11271)
    { R70.NextRule(what_rule);
      if (what_rule<11271) return; }
  if (what_rule>=11271 && what_rule<11272)
    { R71.NextRule(what_rule);
      if (what_rule<11272) return; }
  if (what_rule>=11272 && what_rule<11273)
    { R72.NextRule(what_rule);
      if (what_rule<11273) return; }
  if (what_rule>=11273 && what_rule<11274)
    { R73.NextRule(what_rule);
      if (what_rule<11274) return; }
  if (what_rule>=11274 && what_rule<11275)
    { R74.NextRule(what_rule);
      if (what_rule<11275) return; }
  if (what_rule>=11275 && what_rule<11276)
    { R75.NextRule(what_rule);
      if (what_rule<11276) return; }
  if (what_rule>=11276 && what_rule<11277)
    { R76.NextRule(what_rule);
      if (what_rule<11277) return; }
  if (what_rule>=11277 && what_rule<11278)
    { R77.NextRule(what_rule);
      if (what_rule<11278) return; }
  if (what_rule>=11278 && what_rule<11279)
    { R78.NextRule(what_rule);
      if (what_rule<11279) return; }
  if (what_rule>=11279 && what_rule<11280)
    { R79.NextRule(what_rule);
      if (what_rule<11280) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=9260) return R0.Condition(r-0);
  if (r>=9261 && r<=9281) return R1.Condition(r-9261);
  if (r>=9282 && r<=9722) return R2.Condition(r-9282);
  if (r>=9723 && r<=9743) return R3.Condition(r-9723);
  if (r>=9744 && r<=10184) return R4.Condition(r-9744);
  if (r>=10185 && r<=10205) return R5.Condition(r-10185);
  if (r>=10206 && r<=10646) return R6.Condition(r-10206);
  if (r>=10647 && r<=10667) return R7.Condition(r-10647);
  if (r>=10668 && r<=10688) return R8.Condition(r-10668);
  if (r>=10689 && r<=10689) return R9.Condition(r-10689);
  if (r>=10690 && r<=10710) return R10.Condition(r-10690);
  if (r>=10711 && r<=10711) return R11.Condition(r-10711);
  if (r>=10712 && r<=10732) return R12.Condition(r-10712);
  if (r>=10733 && r<=10733) return R13.Condition(r-10733);
  if (r>=10734 && r<=10754) return R14.Condition(r-10734);
  if (r>=10755 && r<=10755) return R15.Condition(r-10755);
  if (r>=10756 && r<=10776) return R16.Condition(r-10756);
  if (r>=10777 && r<=10777) return R17.Condition(r-10777);
  if (r>=10778 && r<=10798) return R18.Condition(r-10778);
  if (r>=10799 && r<=10799) return R19.Condition(r-10799);
  if (r>=10800 && r<=10820) return R20.Condition(r-10800);
  if (r>=10821 && r<=10821) return R21.Condition(r-10821);
  if (r>=10822 && r<=10842) return R22.Condition(r-10822);
  if (r>=10843 && r<=10843) return R23.Condition(r-10843);
  if (r>=10844 && r<=10864) return R24.Condition(r-10844);
  if (r>=10865 && r<=10865) return R25.Condition(r-10865);
  if (r>=10866 && r<=10886) return R26.Condition(r-10866);
  if (r>=10887 && r<=10887) return R27.Condition(r-10887);
  if (r>=10888 && r<=10908) return R28.Condition(r-10888);
  if (r>=10909 && r<=10909) return R29.Condition(r-10909);
  if (r>=10910 && r<=10930) return R30.Condition(r-10910);
  if (r>=10931 && r<=10931) return R31.Condition(r-10931);
  if (r>=10932 && r<=10952) return R32.Condition(r-10932);
  if (r>=10953 && r<=10953) return R33.Condition(r-10953);
  if (r>=10954 && r<=10974) return R34.Condition(r-10954);
  if (r>=10975 && r<=10975) return R35.Condition(r-10975);
  if (r>=10976 && r<=10996) return R36.Condition(r-10976);
  if (r>=10997 && r<=10997) return R37.Condition(r-10997);
  if (r>=10998 && r<=11018) return R38.Condition(r-10998);
  if (r>=11019 && r<=11019) return R39.Condition(r-11019);
  if (r>=11020 && r<=11040) return R40.Condition(r-11020);
  if (r>=11041 && r<=11041) return R41.Condition(r-11041);
  if (r>=11042 && r<=11062) return R42.Condition(r-11042);
  if (r>=11063 && r<=11063) return R43.Condition(r-11063);
  if (r>=11064 && r<=11084) return R44.Condition(r-11064);
  if (r>=11085 && r<=11085) return R45.Condition(r-11085);
  if (r>=11086 && r<=11106) return R46.Condition(r-11086);
  if (r>=11107 && r<=11107) return R47.Condition(r-11107);
  if (r>=11108 && r<=11128) return R48.Condition(r-11108);
  if (r>=11129 && r<=11129) return R49.Condition(r-11129);
  if (r>=11130 && r<=11150) return R50.Condition(r-11130);
  if (r>=11151 && r<=11151) return R51.Condition(r-11151);
  if (r>=11152 && r<=11172) return R52.Condition(r-11152);
  if (r>=11173 && r<=11173) return R53.Condition(r-11173);
  if (r>=11174 && r<=11194) return R54.Condition(r-11174);
  if (r>=11195 && r<=11195) return R55.Condition(r-11195);
  if (r>=11196 && r<=11216) return R56.Condition(r-11196);
  if (r>=11217 && r<=11217) return R57.Condition(r-11217);
  if (r>=11218 && r<=11238) return R58.Condition(r-11218);
  if (r>=11239 && r<=11239) return R59.Condition(r-11239);
  if (r>=11240 && r<=11260) return R60.Condition(r-11240);
  if (r>=11261 && r<=11261) return R61.Condition(r-11261);
  if (r>=11262 && r<=11262) return R62.Condition(r-11262);
  if (r>=11263 && r<=11263) return R63.Condition(r-11263);
  if (r>=11264 && r<=11264) return R64.Condition(r-11264);
  if (r>=11265 && r<=11265) return R65.Condition(r-11265);
  if (r>=11266 && r<=11266) return R66.Condition(r-11266);
  if (r>=11267 && r<=11267) return R67.Condition(r-11267);
  if (r>=11268 && r<=11268) return R68.Condition(r-11268);
  if (r>=11269 && r<=11269) return R69.Condition(r-11269);
  if (r>=11270 && r<=11270) return R70.Condition(r-11270);
  if (r>=11271 && r<=11271) return R71.Condition(r-11271);
  if (r>=11272 && r<=11272) return R72.Condition(r-11272);
  if (r>=11273 && r<=11273) return R73.Condition(r-11273);
  if (r>=11274 && r<=11274) return R74.Condition(r-11274);
  if (r>=11275 && r<=11275) return R75.Condition(r-11275);
  if (r>=11276 && r<=11276) return R76.Condition(r-11276);
  if (r>=11277 && r<=11277) return R77.Condition(r-11277);
  if (r>=11278 && r<=11278) return R78.Condition(r-11278);
  if (r>=11279 && r<=11279) return R79.Condition(r-11279);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=9260) { R0.Code(r-0); return; } 
  if (r>=9261 && r<=9281) { R1.Code(r-9261); return; } 
  if (r>=9282 && r<=9722) { R2.Code(r-9282); return; } 
  if (r>=9723 && r<=9743) { R3.Code(r-9723); return; } 
  if (r>=9744 && r<=10184) { R4.Code(r-9744); return; } 
  if (r>=10185 && r<=10205) { R5.Code(r-10185); return; } 
  if (r>=10206 && r<=10646) { R6.Code(r-10206); return; } 
  if (r>=10647 && r<=10667) { R7.Code(r-10647); return; } 
  if (r>=10668 && r<=10688) { R8.Code(r-10668); return; } 
  if (r>=10689 && r<=10689) { R9.Code(r-10689); return; } 
  if (r>=10690 && r<=10710) { R10.Code(r-10690); return; } 
  if (r>=10711 && r<=10711) { R11.Code(r-10711); return; } 
  if (r>=10712 && r<=10732) { R12.Code(r-10712); return; } 
  if (r>=10733 && r<=10733) { R13.Code(r-10733); return; } 
  if (r>=10734 && r<=10754) { R14.Code(r-10734); return; } 
  if (r>=10755 && r<=10755) { R15.Code(r-10755); return; } 
  if (r>=10756 && r<=10776) { R16.Code(r-10756); return; } 
  if (r>=10777 && r<=10777) { R17.Code(r-10777); return; } 
  if (r>=10778 && r<=10798) { R18.Code(r-10778); return; } 
  if (r>=10799 && r<=10799) { R19.Code(r-10799); return; } 
  if (r>=10800 && r<=10820) { R20.Code(r-10800); return; } 
  if (r>=10821 && r<=10821) { R21.Code(r-10821); return; } 
  if (r>=10822 && r<=10842) { R22.Code(r-10822); return; } 
  if (r>=10843 && r<=10843) { R23.Code(r-10843); return; } 
  if (r>=10844 && r<=10864) { R24.Code(r-10844); return; } 
  if (r>=10865 && r<=10865) { R25.Code(r-10865); return; } 
  if (r>=10866 && r<=10886) { R26.Code(r-10866); return; } 
  if (r>=10887 && r<=10887) { R27.Code(r-10887); return; } 
  if (r>=10888 && r<=10908) { R28.Code(r-10888); return; } 
  if (r>=10909 && r<=10909) { R29.Code(r-10909); return; } 
  if (r>=10910 && r<=10930) { R30.Code(r-10910); return; } 
  if (r>=10931 && r<=10931) { R31.Code(r-10931); return; } 
  if (r>=10932 && r<=10952) { R32.Code(r-10932); return; } 
  if (r>=10953 && r<=10953) { R33.Code(r-10953); return; } 
  if (r>=10954 && r<=10974) { R34.Code(r-10954); return; } 
  if (r>=10975 && r<=10975) { R35.Code(r-10975); return; } 
  if (r>=10976 && r<=10996) { R36.Code(r-10976); return; } 
  if (r>=10997 && r<=10997) { R37.Code(r-10997); return; } 
  if (r>=10998 && r<=11018) { R38.Code(r-10998); return; } 
  if (r>=11019 && r<=11019) { R39.Code(r-11019); return; } 
  if (r>=11020 && r<=11040) { R40.Code(r-11020); return; } 
  if (r>=11041 && r<=11041) { R41.Code(r-11041); return; } 
  if (r>=11042 && r<=11062) { R42.Code(r-11042); return; } 
  if (r>=11063 && r<=11063) { R43.Code(r-11063); return; } 
  if (r>=11064 && r<=11084) { R44.Code(r-11064); return; } 
  if (r>=11085 && r<=11085) { R45.Code(r-11085); return; } 
  if (r>=11086 && r<=11106) { R46.Code(r-11086); return; } 
  if (r>=11107 && r<=11107) { R47.Code(r-11107); return; } 
  if (r>=11108 && r<=11128) { R48.Code(r-11108); return; } 
  if (r>=11129 && r<=11129) { R49.Code(r-11129); return; } 
  if (r>=11130 && r<=11150) { R50.Code(r-11130); return; } 
  if (r>=11151 && r<=11151) { R51.Code(r-11151); return; } 
  if (r>=11152 && r<=11172) { R52.Code(r-11152); return; } 
  if (r>=11173 && r<=11173) { R53.Code(r-11173); return; } 
  if (r>=11174 && r<=11194) { R54.Code(r-11174); return; } 
  if (r>=11195 && r<=11195) { R55.Code(r-11195); return; } 
  if (r>=11196 && r<=11216) { R56.Code(r-11196); return; } 
  if (r>=11217 && r<=11217) { R57.Code(r-11217); return; } 
  if (r>=11218 && r<=11238) { R58.Code(r-11218); return; } 
  if (r>=11239 && r<=11239) { R59.Code(r-11239); return; } 
  if (r>=11240 && r<=11260) { R60.Code(r-11240); return; } 
  if (r>=11261 && r<=11261) { R61.Code(r-11261); return; } 
  if (r>=11262 && r<=11262) { R62.Code(r-11262); return; } 
  if (r>=11263 && r<=11263) { R63.Code(r-11263); return; } 
  if (r>=11264 && r<=11264) { R64.Code(r-11264); return; } 
  if (r>=11265 && r<=11265) { R65.Code(r-11265); return; } 
  if (r>=11266 && r<=11266) { R66.Code(r-11266); return; } 
  if (r>=11267 && r<=11267) { R67.Code(r-11267); return; } 
  if (r>=11268 && r<=11268) { R68.Code(r-11268); return; } 
  if (r>=11269 && r<=11269) { R69.Code(r-11269); return; } 
  if (r>=11270 && r<=11270) { R70.Code(r-11270); return; } 
  if (r>=11271 && r<=11271) { R71.Code(r-11271); return; } 
  if (r>=11272 && r<=11272) { R72.Code(r-11272); return; } 
  if (r>=11273 && r<=11273) { R73.Code(r-11273); return; } 
  if (r>=11274 && r<=11274) { R74.Code(r-11274); return; } 
  if (r>=11275 && r<=11275) { R75.Code(r-11275); return; } 
  if (r>=11276 && r<=11276) { R76.Code(r-11276); return; } 
  if (r>=11277 && r<=11277) { R77.Code(r-11277); return; } 
  if (r>=11278 && r<=11278) { R78.Code(r-11278); return; } 
  if (r>=11279 && r<=11279) { R79.Code(r-11279); return; } 
}
int Priority(unsigned short r)
{
  if (r<=9260) { return R0.Priority(); } 
  if (r>=9261 && r<=9281) { return R1.Priority(); } 
  if (r>=9282 && r<=9722) { return R2.Priority(); } 
  if (r>=9723 && r<=9743) { return R3.Priority(); } 
  if (r>=9744 && r<=10184) { return R4.Priority(); } 
  if (r>=10185 && r<=10205) { return R5.Priority(); } 
  if (r>=10206 && r<=10646) { return R6.Priority(); } 
  if (r>=10647 && r<=10667) { return R7.Priority(); } 
  if (r>=10668 && r<=10688) { return R8.Priority(); } 
  if (r>=10689 && r<=10689) { return R9.Priority(); } 
  if (r>=10690 && r<=10710) { return R10.Priority(); } 
  if (r>=10711 && r<=10711) { return R11.Priority(); } 
  if (r>=10712 && r<=10732) { return R12.Priority(); } 
  if (r>=10733 && r<=10733) { return R13.Priority(); } 
  if (r>=10734 && r<=10754) { return R14.Priority(); } 
  if (r>=10755 && r<=10755) { return R15.Priority(); } 
  if (r>=10756 && r<=10776) { return R16.Priority(); } 
  if (r>=10777 && r<=10777) { return R17.Priority(); } 
  if (r>=10778 && r<=10798) { return R18.Priority(); } 
  if (r>=10799 && r<=10799) { return R19.Priority(); } 
  if (r>=10800 && r<=10820) { return R20.Priority(); } 
  if (r>=10821 && r<=10821) { return R21.Priority(); } 
  if (r>=10822 && r<=10842) { return R22.Priority(); } 
  if (r>=10843 && r<=10843) { return R23.Priority(); } 
  if (r>=10844 && r<=10864) { return R24.Priority(); } 
  if (r>=10865 && r<=10865) { return R25.Priority(); } 
  if (r>=10866 && r<=10886) { return R26.Priority(); } 
  if (r>=10887 && r<=10887) { return R27.Priority(); } 
  if (r>=10888 && r<=10908) { return R28.Priority(); } 
  if (r>=10909 && r<=10909) { return R29.Priority(); } 
  if (r>=10910 && r<=10930) { return R30.Priority(); } 
  if (r>=10931 && r<=10931) { return R31.Priority(); } 
  if (r>=10932 && r<=10952) { return R32.Priority(); } 
  if (r>=10953 && r<=10953) { return R33.Priority(); } 
  if (r>=10954 && r<=10974) { return R34.Priority(); } 
  if (r>=10975 && r<=10975) { return R35.Priority(); } 
  if (r>=10976 && r<=10996) { return R36.Priority(); } 
  if (r>=10997 && r<=10997) { return R37.Priority(); } 
  if (r>=10998 && r<=11018) { return R38.Priority(); } 
  if (r>=11019 && r<=11019) { return R39.Priority(); } 
  if (r>=11020 && r<=11040) { return R40.Priority(); } 
  if (r>=11041 && r<=11041) { return R41.Priority(); } 
  if (r>=11042 && r<=11062) { return R42.Priority(); } 
  if (r>=11063 && r<=11063) { return R43.Priority(); } 
  if (r>=11064 && r<=11084) { return R44.Priority(); } 
  if (r>=11085 && r<=11085) { return R45.Priority(); } 
  if (r>=11086 && r<=11106) { return R46.Priority(); } 
  if (r>=11107 && r<=11107) { return R47.Priority(); } 
  if (r>=11108 && r<=11128) { return R48.Priority(); } 
  if (r>=11129 && r<=11129) { return R49.Priority(); } 
  if (r>=11130 && r<=11150) { return R50.Priority(); } 
  if (r>=11151 && r<=11151) { return R51.Priority(); } 
  if (r>=11152 && r<=11172) { return R52.Priority(); } 
  if (r>=11173 && r<=11173) { return R53.Priority(); } 
  if (r>=11174 && r<=11194) { return R54.Priority(); } 
  if (r>=11195 && r<=11195) { return R55.Priority(); } 
  if (r>=11196 && r<=11216) { return R56.Priority(); } 
  if (r>=11217 && r<=11217) { return R57.Priority(); } 
  if (r>=11218 && r<=11238) { return R58.Priority(); } 
  if (r>=11239 && r<=11239) { return R59.Priority(); } 
  if (r>=11240 && r<=11260) { return R60.Priority(); } 
  if (r>=11261 && r<=11261) { return R61.Priority(); } 
  if (r>=11262 && r<=11262) { return R62.Priority(); } 
  if (r>=11263 && r<=11263) { return R63.Priority(); } 
  if (r>=11264 && r<=11264) { return R64.Priority(); } 
  if (r>=11265 && r<=11265) { return R65.Priority(); } 
  if (r>=11266 && r<=11266) { return R66.Priority(); } 
  if (r>=11267 && r<=11267) { return R67.Priority(); } 
  if (r>=11268 && r<=11268) { return R68.Priority(); } 
  if (r>=11269 && r<=11269) { return R69.Priority(); } 
  if (r>=11270 && r<=11270) { return R70.Priority(); } 
  if (r>=11271 && r<=11271) { return R71.Priority(); } 
  if (r>=11272 && r<=11272) { return R72.Priority(); } 
  if (r>=11273 && r<=11273) { return R73.Priority(); } 
  if (r>=11274 && r<=11274) { return R74.Priority(); } 
  if (r>=11275 && r<=11275) { return R75.Priority(); } 
  if (r>=11276 && r<=11276) { return R76.Priority(); } 
  if (r>=11277 && r<=11277) { return R77.Priority(); } 
  if (r>=11278 && r<=11278) { return R78.Priority(); } 
  if (r>=11279 && r<=11279) { return R79.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=9260) return R0.Name(r-0);
  if (r>=9261 && r<=9281) return R1.Name(r-9261);
  if (r>=9282 && r<=9722) return R2.Name(r-9282);
  if (r>=9723 && r<=9743) return R3.Name(r-9723);
  if (r>=9744 && r<=10184) return R4.Name(r-9744);
  if (r>=10185 && r<=10205) return R5.Name(r-10185);
  if (r>=10206 && r<=10646) return R6.Name(r-10206);
  if (r>=10647 && r<=10667) return R7.Name(r-10647);
  if (r>=10668 && r<=10688) return R8.Name(r-10668);
  if (r>=10689 && r<=10689) return R9.Name(r-10689);
  if (r>=10690 && r<=10710) return R10.Name(r-10690);
  if (r>=10711 && r<=10711) return R11.Name(r-10711);
  if (r>=10712 && r<=10732) return R12.Name(r-10712);
  if (r>=10733 && r<=10733) return R13.Name(r-10733);
  if (r>=10734 && r<=10754) return R14.Name(r-10734);
  if (r>=10755 && r<=10755) return R15.Name(r-10755);
  if (r>=10756 && r<=10776) return R16.Name(r-10756);
  if (r>=10777 && r<=10777) return R17.Name(r-10777);
  if (r>=10778 && r<=10798) return R18.Name(r-10778);
  if (r>=10799 && r<=10799) return R19.Name(r-10799);
  if (r>=10800 && r<=10820) return R20.Name(r-10800);
  if (r>=10821 && r<=10821) return R21.Name(r-10821);
  if (r>=10822 && r<=10842) return R22.Name(r-10822);
  if (r>=10843 && r<=10843) return R23.Name(r-10843);
  if (r>=10844 && r<=10864) return R24.Name(r-10844);
  if (r>=10865 && r<=10865) return R25.Name(r-10865);
  if (r>=10866 && r<=10886) return R26.Name(r-10866);
  if (r>=10887 && r<=10887) return R27.Name(r-10887);
  if (r>=10888 && r<=10908) return R28.Name(r-10888);
  if (r>=10909 && r<=10909) return R29.Name(r-10909);
  if (r>=10910 && r<=10930) return R30.Name(r-10910);
  if (r>=10931 && r<=10931) return R31.Name(r-10931);
  if (r>=10932 && r<=10952) return R32.Name(r-10932);
  if (r>=10953 && r<=10953) return R33.Name(r-10953);
  if (r>=10954 && r<=10974) return R34.Name(r-10954);
  if (r>=10975 && r<=10975) return R35.Name(r-10975);
  if (r>=10976 && r<=10996) return R36.Name(r-10976);
  if (r>=10997 && r<=10997) return R37.Name(r-10997);
  if (r>=10998 && r<=11018) return R38.Name(r-10998);
  if (r>=11019 && r<=11019) return R39.Name(r-11019);
  if (r>=11020 && r<=11040) return R40.Name(r-11020);
  if (r>=11041 && r<=11041) return R41.Name(r-11041);
  if (r>=11042 && r<=11062) return R42.Name(r-11042);
  if (r>=11063 && r<=11063) return R43.Name(r-11063);
  if (r>=11064 && r<=11084) return R44.Name(r-11064);
  if (r>=11085 && r<=11085) return R45.Name(r-11085);
  if (r>=11086 && r<=11106) return R46.Name(r-11086);
  if (r>=11107 && r<=11107) return R47.Name(r-11107);
  if (r>=11108 && r<=11128) return R48.Name(r-11108);
  if (r>=11129 && r<=11129) return R49.Name(r-11129);
  if (r>=11130 && r<=11150) return R50.Name(r-11130);
  if (r>=11151 && r<=11151) return R51.Name(r-11151);
  if (r>=11152 && r<=11172) return R52.Name(r-11152);
  if (r>=11173 && r<=11173) return R53.Name(r-11173);
  if (r>=11174 && r<=11194) return R54.Name(r-11174);
  if (r>=11195 && r<=11195) return R55.Name(r-11195);
  if (r>=11196 && r<=11216) return R56.Name(r-11196);
  if (r>=11217 && r<=11217) return R57.Name(r-11217);
  if (r>=11218 && r<=11238) return R58.Name(r-11218);
  if (r>=11239 && r<=11239) return R59.Name(r-11239);
  if (r>=11240 && r<=11260) return R60.Name(r-11240);
  if (r>=11261 && r<=11261) return R61.Name(r-11261);
  if (r>=11262 && r<=11262) return R62.Name(r-11262);
  if (r>=11263 && r<=11263) return R63.Name(r-11263);
  if (r>=11264 && r<=11264) return R64.Name(r-11264);
  if (r>=11265 && r<=11265) return R65.Name(r-11265);
  if (r>=11266 && r<=11266) return R66.Name(r-11266);
  if (r>=11267 && r<=11267) return R67.Name(r-11267);
  if (r>=11268 && r<=11268) return R68.Name(r-11268);
  if (r>=11269 && r<=11269) return R69.Name(r-11269);
  if (r>=11270 && r<=11270) return R70.Name(r-11270);
  if (r>=11271 && r<=11271) return R71.Name(r-11271);
  if (r>=11272 && r<=11272) return R72.Name(r-11272);
  if (r>=11273 && r<=11273) return R73.Name(r-11273);
  if (r>=11274 && r<=11274) return R74.Name(r-11274);
  if (r>=11275 && r<=11275) return R75.Name(r-11275);
  if (r>=11276 && r<=11276) return R76.Name(r-11276);
  if (r>=11277 && r<=11277) return R77.Name(r-11277);
  if (r>=11278 && r<=11278) return R78.Name(r-11278);
  if (r>=11279 && r<=11279) return R79.Name(r-11279);
  return NULL;
}
};
const unsigned numrules = 11280;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 11280


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
mu_roleHost[1].mu_Host = mu_HostID;
mu_roleHost[1].mu_Gateway = mu_Intruder;
mu_roleHost[1].mu_Na2 = mu_Na2;
mu_roleHost[1].mu_st = mu_Host1;
mu_roleHost[1].mu_commit = mu_false;
mu_roleGateway[1].mu_Host = mu_HostID;
mu_roleGateway[1].mu_Server = mu_ServerIP;
mu_roleGateway[1].mu_Gateway = mu_GatewayIP;
mu_roleGateway[1].mu_Na1 = mu_Na1;
mu_roleGateway[1].mu_st = mu_Gateway1;
mu_roleGateway[1].mu_commit = mu_false;
mu_roleServer[1].mu_Host = mu_HostID;
mu_roleServer[1].mu_Gateway = mu_GatewayIP;
mu_roleServer[1].mu_Server = mu_ServerIP;
mu_roleServer[1].mu_Na3 = mu_Na3;
mu_roleServer[1].mu_Na4 = mu_Na4;
mu_roleServer[1].mu_st = mu_Server1;
mu_roleServer[1].mu_commit = mu_false;
{
for(int mu_i = 1; mu_i <= 30; mu_i++) {
mu_ch[mu_i].mu_empty = mu_true;
};
};
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
mu_msgs[mu_i].mu_msgType = mu_null;
};
};
mu_msg_end = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
mu_pat1Set.mu_content[mu_i] = 0;
mu_pat2Set.mu_content[mu_i] = 0;
mu_pat3Set.mu_content[mu_i] = 0;
mu_pat4Set.mu_content[mu_i] = 0;
mu_pat5Set.mu_content[mu_i] = 0;
mu_pat6Set.mu_content[mu_i] = 0;
mu_pat7Set.mu_content[mu_i] = 0;
};
};
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
mu_pat1Set.mu_length = 0;
mu_pat2Set.mu_length = 0;
mu_pat3Set.mu_length = 0;
mu_pat4Set.mu_length = 0;
mu_pat5Set.mu_length = 0;
mu_pat6Set.mu_length = 0;
mu_pat7Set.mu_length = 0;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleHost[mu_i].mu_Host;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleGateway[mu_i].mu_Gateway;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleServer[mu_i].mu_Server;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_277() // Invariant "auth3"
{
bool mu__quant278; 
mu__quant278 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr279;
  if (!((mu_roleServer[mu_i].mu_commit) == (mu_true))) mu__boolexpr279 = TRUE ;
  else {
bool mu__quant280; 
mu__quant280 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
bool mu__boolexpr281;
  if (!((mu_roleHost[mu_j].mu_commit) == (mu_true))) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_roleHost[mu_i].mu_Na3) == (mu_roleServer[mu_j].mu_Na3)) ; 
}
if ( (mu__boolexpr281) )
  { mu__quant280 = TRUE; break; }
};
};
  mu__boolexpr279 = (mu__quant280) ; 
}
if ( !(mu__boolexpr279) )
  { mu__quant278 = FALSE; break; }
};
};
return mu__quant278;
};

bool mu__condition_282() // Condition for Rule "auth3"
{
  return mu__invariant_277( );
}

/**** end rule declaration ****/

int mu__invariant_283() // Invariant "auth2"
{
bool mu__quant284; 
mu__quant284 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr285;
  if (!((mu_roleGateway[mu_i].mu_commit) == (mu_true))) mu__boolexpr285 = TRUE ;
  else {
bool mu__quant286; 
mu__quant286 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
bool mu__boolexpr287;
  if (!((mu_roleHost[mu_j].mu_commit) == (mu_true))) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_roleHost[mu_i].mu_Na2) == (mu_roleGateway[mu_j].mu_Na2)) ; 
}
if ( (mu__boolexpr287) )
  { mu__quant286 = TRUE; break; }
};
};
  mu__boolexpr285 = (mu__quant286) ; 
}
if ( !(mu__boolexpr285) )
  { mu__quant284 = FALSE; break; }
};
};
return mu__quant284;
};

bool mu__condition_288() // Condition for Rule "auth2"
{
  return mu__invariant_283( );
}

/**** end rule declaration ****/

int mu__invariant_289() // Invariant "auth1"
{
bool mu__quant290; 
mu__quant290 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr291;
  if (!((mu_roleGateway[mu_i].mu_commit) == (mu_true))) mu__boolexpr291 = TRUE ;
  else {
bool mu__quant292; 
mu__quant292 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
bool mu__boolexpr293;
  if (!((mu_roleHost[mu_j].mu_commit) == (mu_true))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_roleHost[mu_i].mu_Na1) == (mu_roleGateway[mu_j].mu_Na1)) ; 
}
if ( (mu__boolexpr293) )
  { mu__quant292 = TRUE; break; }
};
};
  mu__boolexpr291 = (mu__quant292) ; 
}
if ( !(mu__boolexpr291) )
  { mu__quant290 = FALSE; break; }
};
};
return mu__quant290;
};

bool mu__condition_294() // Condition for Rule "auth1"
{
  return mu__invariant_289( );
}

/**** end rule declaration ****/

int mu__invariant_295() // Invariant "sec1"
{
bool mu__quant296; 
mu__quant296 = TRUE;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
bool mu__boolexpr297;
bool mu__boolexpr298;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_msgs[mu_i].mu_noncePart) == (mu_Na1)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = TRUE ;
  else {
  mu__boolexpr297 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr297) )
  { mu__quant296 = FALSE; break; }
};
};
return mu__quant296;
};

bool mu__condition_299() // Condition for Rule "sec1"
{
  return mu__invariant_295( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"sec1", &mu__condition_299, NULL, },
{"auth1", &mu__condition_294, NULL, },
{"auth2", &mu__condition_288, NULL, },
{"auth3", &mu__condition_282, NULL, },
};
const unsigned short numinvariants = 4;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
pat6Set:NoScalarset
pat4Set:NoScalarset
pat2Set:NoScalarset
msg_end:NoScalarset
ch:NoScalarset
roleHost:NoScalarset
roleGateway:NoScalarset
roleServer:NoScalarset
msgs:NoScalarset
pat1Set:NoScalarset
pat3Set:NoScalarset
pat5Set:NoScalarset
pat7Set:NoScalarset
Spy_known:NoScalarset
emit:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_pat6Set.MultisetSort();
        mu_pat4Set.MultisetSort();
        mu_pat2Set.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_ch.MultisetSort();
        mu_roleHost.MultisetSort();
        mu_roleGateway.MultisetSort();
        mu_roleServer.MultisetSort();
        mu_msgs.MultisetSort();
        mu_pat1Set.MultisetSort();
        mu_pat3Set.MultisetSort();
        mu_pat5Set.MultisetSort();
        mu_pat7Set.MultisetSort();
        mu_Spy_known.MultisetSort();
        mu_emit.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_indexType::Permute(PermSet& Perm, int i) {};
void mu_1_indexType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_indexType::Canonicalize(PermSet& Perm) {};
void mu_1_indexType::SimpleLimit(PermSet& Perm) {};
void mu_1_indexType::ArrayLimit(PermSet& Perm) {};
void mu_1_indexType::Limit(PermSet& Perm) {};
void mu_1_indexType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleHostNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleHostNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleHostNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleHostNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleHostNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleHostNums::Limit(PermSet& Perm) {};
void mu_1_roleHostNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleGatewayNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleGatewayNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleGatewayNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleGatewayNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleGatewayNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleGatewayNums::Limit(PermSet& Perm) {};
void mu_1_roleGatewayNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleServerNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleServerNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleServerNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleServerNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleServerNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleServerNums::Limit(PermSet& Perm) {};
void mu_1_roleServerNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msgLen::Permute(PermSet& Perm, int i) {};
void mu_1_msgLen::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msgLen::Canonicalize(PermSet& Perm) {};
void mu_1_msgLen::SimpleLimit(PermSet& Perm) {};
void mu_1_msgLen::ArrayLimit(PermSet& Perm) {};
void mu_1_msgLen::Limit(PermSet& Perm) {};
void mu_1_msgLen::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_chanNums::Permute(PermSet& Perm, int i) {};
void mu_1_chanNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_chanNums::Canonicalize(PermSet& Perm) {};
void mu_1_chanNums::SimpleLimit(PermSet& Perm) {};
void mu_1_chanNums::ArrayLimit(PermSet& Perm) {};
void mu_1_chanNums::Limit(PermSet& Perm) {};
void mu_1_chanNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_AgentType::Permute(PermSet& Perm, int i) {};
void mu_1_AgentType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AgentType::Canonicalize(PermSet& Perm) {};
void mu_1_AgentType::SimpleLimit(PermSet& Perm) {};
void mu_1_AgentType::ArrayLimit(PermSet& Perm) {};
void mu_1_AgentType::Limit(PermSet& Perm) {};
void mu_1_AgentType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_NonceType::Permute(PermSet& Perm, int i) {};
void mu_1_NonceType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_NonceType::Canonicalize(PermSet& Perm) {};
void mu_1_NonceType::SimpleLimit(PermSet& Perm) {};
void mu_1_NonceType::ArrayLimit(PermSet& Perm) {};
void mu_1_NonceType::Limit(PermSet& Perm) {};
void mu_1_NonceType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_EncryptType::Permute(PermSet& Perm, int i) {};
void mu_1_EncryptType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_EncryptType::Canonicalize(PermSet& Perm) {};
void mu_1_EncryptType::SimpleLimit(PermSet& Perm) {};
void mu_1_EncryptType::ArrayLimit(PermSet& Perm) {};
void mu_1_EncryptType::Limit(PermSet& Perm) {};
void mu_1_EncryptType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_KeyType::Permute(PermSet& Perm, int i)
{
};
void mu_1_KeyType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_KeyType::Canonicalize(PermSet& Perm)
{
};
void mu_1_KeyType::SimpleLimit(PermSet& Perm){}
void mu_1_KeyType::ArrayLimit(PermSet& Perm){}
void mu_1_KeyType::Limit(PermSet& Perm)
{
};
void mu_1_KeyType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_HostStatus::Permute(PermSet& Perm, int i) {};
void mu_1_HostStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_HostStatus::Canonicalize(PermSet& Perm) {};
void mu_1_HostStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_HostStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_HostStatus::Limit(PermSet& Perm) {};
void mu_1_HostStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_GatewayStatus::Permute(PermSet& Perm, int i) {};
void mu_1_GatewayStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_GatewayStatus::Canonicalize(PermSet& Perm) {};
void mu_1_GatewayStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_GatewayStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_GatewayStatus::Limit(PermSet& Perm) {};
void mu_1_GatewayStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_ServerStatus::Permute(PermSet& Perm, int i) {};
void mu_1_ServerStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_ServerStatus::Canonicalize(PermSet& Perm) {};
void mu_1_ServerStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_ServerStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_ServerStatus::Limit(PermSet& Perm) {};
void mu_1_ServerStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MsgType::Permute(PermSet& Perm, int i) {};
void mu_1_MsgType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MsgType::Canonicalize(PermSet& Perm) {};
void mu_1_MsgType::SimpleLimit(PermSet& Perm) {};
void mu_1_MsgType::ArrayLimit(PermSet& Perm) {};
void mu_1_MsgType::Limit(PermSet& Perm) {};
void mu_1_MsgType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm){}
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu_1_Channel::Permute(PermSet& Perm, int i)
{
};
void mu_1_Channel::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Channel::Canonicalize(PermSet& Perm)
{
};
void mu_1_Channel::SimpleLimit(PermSet& Perm){}
void mu_1_Channel::ArrayLimit(PermSet& Perm){}
void mu_1_Channel::Limit(PermSet& Perm)
{
};
void mu_1_Channel::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleHost::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleHost::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleHost::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleHost::SimpleLimit(PermSet& Perm){}
void mu_1_RoleHost::ArrayLimit(PermSet& Perm){}
void mu_1_RoleHost::Limit(PermSet& Perm)
{
};
void mu_1_RoleHost::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleGateway::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleGateway::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleGateway::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleGateway::SimpleLimit(PermSet& Perm){}
void mu_1_RoleGateway::ArrayLimit(PermSet& Perm){}
void mu_1_RoleGateway::Limit(PermSet& Perm)
{
};
void mu_1_RoleGateway::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleServer::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleServer::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleServer::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleServer::SimpleLimit(PermSet& Perm){}
void mu_1_RoleServer::ArrayLimit(PermSet& Perm){}
void mu_1_RoleServer::Limit(PermSet& Perm)
{
};
void mu_1_RoleServer::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<21; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_msgSet::Permute(PermSet& Perm, int i)
{
};
void mu_1_msgSet::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_msgSet::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgSet::SimpleLimit(PermSet& Perm){}
void mu_1_msgSet::ArrayLimit(PermSet& Perm){}
void mu_1_msgSet::Limit(PermSet& Perm)
{
};
void mu_1_msgSet::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<30; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<21; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<21; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<21; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_pat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_msg_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_ch.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_roleHost.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleHost.MultisetSort();
              mu_roleGateway.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleGateway.MultisetSort();
              mu_roleServer.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleServer.MultisetSort();
              mu_msgs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_pat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_pat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_Spy_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_emit.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_pat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat6Set.MultisetSort();
          mu_pat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat4Set.MultisetSort();
          mu_pat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat2Set.MultisetSort();
          mu_msg_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg_end.MultisetSort();
          mu_ch.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ch.MultisetSort();
          mu_roleHost.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleHost.MultisetSort();
          mu_roleGateway.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleGateway.MultisetSort();
          mu_roleServer.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleServer.MultisetSort();
          mu_msgs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msgs.MultisetSort();
          mu_pat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat1Set.MultisetSort();
          mu_pat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat3Set.MultisetSort();
          mu_pat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat5Set.MultisetSort();
          mu_pat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat7Set.MultisetSort();
          mu_Spy_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Spy_known.MultisetSort();
          mu_emit.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_emit.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_pat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_msg_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_ch.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_roleHost.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleHost.MultisetSort();
              mu_roleGateway.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleGateway.MultisetSort();
              mu_roleServer.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleServer.MultisetSort();
              mu_msgs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_pat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_pat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_Spy_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_emit.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_pat6Set.MultisetSort();
      mu_pat4Set.MultisetSort();
      mu_pat2Set.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_ch.MultisetSort();
      mu_roleHost.MultisetSort();
      mu_roleGateway.MultisetSort();
      mu_roleServer.MultisetSort();
      mu_msgs.MultisetSort();
      mu_pat1Set.MultisetSort();
      mu_pat3Set.MultisetSort();
      mu_pat5Set.MultisetSort();
      mu_pat7Set.MultisetSort();
      mu_Spy_known.MultisetSort();
      mu_emit.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat6Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat6Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat4Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat4Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat2Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat2Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msg_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msg_end.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ch.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ch.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleHost.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleHost.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleGateway.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleGateway.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleServer.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleServer.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msgs.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msgs.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat1Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat1Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat3Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat3Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat5Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat5Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat7Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat7Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Spy_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Spy_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_emit.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_emit.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
