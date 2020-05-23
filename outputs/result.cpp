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
#define BITS_IN_WORLD 36768
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
  mu_1_indexType (const char *name, int os): mu__byte(0, 100, 7, name, os) {};
  mu_1_indexType (void): mu__byte(0, 100, 7) {};
  mu_1_indexType (int val): mu__byte(0, 100, 7, "Parameter or function result.", 0)
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
  mu_1_msgLen (const char *name, int os): mu__byte(0, 15, 5, name, os) {};
  mu_1_msgLen (void): mu__byte(0, 15, 5) {};
  mu_1_msgLen (int val): mu__byte(0, 15, 5, "Parameter or function result.", 0)
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
  mu_1_chanNums (const char *name, int os): mu__byte(1, 10, 4, name, os) {};
  mu_1_chanNums (void): mu__byte(1, 10, 4) {};
  mu_1_chanNums (int val): mu__byte(1, 10, 4, "Parameter or function result.", 0)
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

  mu_1_AgentType (const char *name, int os): mu__byte(1, 5, 3, name, os) {};
  mu_1_AgentType (void): mu__byte(1, 5, 3) {};
  mu_1_AgentType (int val): mu__byte(1, 5, 3, "Parameter or function result.", 0)
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

const char *mu_1_AgentType::values[] = {"Intruder","HostID","GatewayIP","ServerIP","anyAgent",NULL };

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
      return ( s << mu_1_NonceType::values[ int(val) - 6] );
    else return ( s << "Undefined" );
  };

  mu_1_NonceType (const char *name, int os): mu__byte(6, 10, 3, name, os) {};
  mu_1_NonceType (void): mu__byte(6, 10, 3) {};
  mu_1_NonceType (int val): mu__byte(6, 10, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -6]; };
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
      cout << name << ":" << values[ value() -6] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NonceType::values[] = {"Na2","Na1","Na3","Na4","anyNonce",NULL };

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
      return ( s << mu_1_EncryptType::values[ int(val) - 11] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(11, 13, 2, name, os) {};
  mu_1_EncryptType (void): mu__byte(11, 13, 2) {};
  mu_1_EncryptType (int val): mu__byte(11, 13, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -11]; };
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
      cout << name << ":" << values[ value() -11] << '\n';
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
      return ( s << mu_1_HostStatus::values[ int(val) - 14] );
    else return ( s << "Undefined" );
  };

  mu_1_HostStatus (const char *name, int os): mu__byte(14, 18, 3, name, os) {};
  mu_1_HostStatus (void): mu__byte(14, 18, 3) {};
  mu_1_HostStatus (int val): mu__byte(14, 18, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -14]; };
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
      cout << name << ":" << values[ value() -14] << '\n';
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
      return ( s << mu_1_GatewayStatus::values[ int(val) - 19] );
    else return ( s << "Undefined" );
  };

  mu_1_GatewayStatus (const char *name, int os): mu__byte(19, 27, 4, name, os) {};
  mu_1_GatewayStatus (void): mu__byte(19, 27, 4) {};
  mu_1_GatewayStatus (int val): mu__byte(19, 27, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -19]; };
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
      cout << name << ":" << values[ value() -19] << '\n';
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
      return ( s << mu_1_ServerStatus::values[ int(val) - 28] );
    else return ( s << "Undefined" );
  };

  mu_1_ServerStatus (const char *name, int os): mu__byte(28, 31, 3, name, os) {};
  mu_1_ServerStatus (void): mu__byte(28, 31, 3) {};
  mu_1_ServerStatus (int val): mu__byte(28, 31, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -28]; };
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
      cout << name << ":" << values[ value() -28] << '\n';
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
      return ( s << mu_1_MsgType::values[ int(val) - 32] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(32, 39, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(32, 39, 4) {};
  mu_1_MsgType (int val): mu__byte(32, 39, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -32]; };
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
      cout << name << ":" << values[ value() -32] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MsgType::values[] = {"null","agent","nonce","key","aenc","senc","concat","hash",NULL };

/*** end of enum declaration ***/
mu_1_MsgType mu_1_MsgType_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_indexType array[ 16 ];
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
    if ( ( index >= 0 ) && ( index <= 15 ) )
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
    for (int i = 0; i < 16; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<16; i++) {
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
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 16; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 16; i++)
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
  for(int i = 0; i < 16; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

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
  mu_1__type_0 mu_concatPart;
  mu_1_indexType mu_length;
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
    w = CompareWeight(a.mu_concatPart, b.mu_concatPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_length, b.mu_length);
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
    w = Compare(a.mu_concatPart, b.mu_concatPart);
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
    mu_msgType.MultisetSort();
    mu_ag.MultisetSort();
    mu_noncePart.MultisetSort();
    mu_k.MultisetSort();
    mu_aencMsg.MultisetSort();
    mu_aencKey.MultisetSort();
    mu_sencMsg.MultisetSort();
    mu_sencKey.MultisetSort();
    mu_concatPart.MultisetSort();
    mu_length.MultisetSort();
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
    mu_concatPart.print_statistic();
    mu_length.print_statistic();
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
    mu_concatPart.clear();
    mu_length.clear();
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
    mu_concatPart.undefine();
    mu_length.undefine();
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
    mu_concatPart.reset();
    mu_length.reset();
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
    mu_concatPart.print();
    mu_length.print();
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
    mu_concatPart.print_diff(prevstate);
    mu_length.print_diff(prevstate);
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
    mu_concatPart.to_state(thestate);
    mu_length.to_state(thestate);
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
    mu_concatPart = from.mu_concatPart;
    mu_length.value(from.mu_length.value());
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
  if (name) mu_concatPart.set_self_2(name, ".concatPart", os + 72 ); else mu_concatPart.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 200 ); else mu_length.set_self_2(NULL, NULL, 0);
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
  if (name) mu_sender.set_self_2(name, ".sender", os + 208 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 216 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 224 ); else mu_empty.set_self_2(NULL, NULL, 0);
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
  mu_1_NonceType mu_locNa2;
  mu_1_NonceType mu_locNa1;
  mu_1_NonceType mu_locNa3;
  mu_1_NonceType mu_locNa4;
  mu_1_AgentType mu_locHost;
  mu_1_AgentType mu_locGateway;
  mu_1_AgentType mu_locServer;
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
    w = CompareWeight(a.mu_locNa2, b.mu_locNa2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa1, b.mu_locNa1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa3, b.mu_locNa3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa4, b.mu_locNa4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locHost, b.mu_locHost);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locGateway, b.mu_locGateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locServer, b.mu_locServer);
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
    w = Compare(a.mu_locNa2, b.mu_locNa2);
    if (w!=0) return w;
    w = Compare(a.mu_locNa1, b.mu_locNa1);
    if (w!=0) return w;
    w = Compare(a.mu_locNa3, b.mu_locNa3);
    if (w!=0) return w;
    w = Compare(a.mu_locNa4, b.mu_locNa4);
    if (w!=0) return w;
    w = Compare(a.mu_locHost, b.mu_locHost);
    if (w!=0) return w;
    w = Compare(a.mu_locGateway, b.mu_locGateway);
    if (w!=0) return w;
    w = Compare(a.mu_locServer, b.mu_locServer);
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
    mu_locNa2.MultisetSort();
    mu_locNa1.MultisetSort();
    mu_locNa3.MultisetSort();
    mu_locNa4.MultisetSort();
    mu_locHost.MultisetSort();
    mu_locGateway.MultisetSort();
    mu_locServer.MultisetSort();
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
    mu_locNa2.print_statistic();
    mu_locNa1.print_statistic();
    mu_locNa3.print_statistic();
    mu_locNa4.print_statistic();
    mu_locHost.print_statistic();
    mu_locGateway.print_statistic();
    mu_locServer.print_statistic();
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
    mu_locNa2.clear();
    mu_locNa1.clear();
    mu_locNa3.clear();
    mu_locNa4.clear();
    mu_locHost.clear();
    mu_locGateway.clear();
    mu_locServer.clear();
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
    mu_locNa2.undefine();
    mu_locNa1.undefine();
    mu_locNa3.undefine();
    mu_locNa4.undefine();
    mu_locHost.undefine();
    mu_locGateway.undefine();
    mu_locServer.undefine();
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
    mu_locNa2.reset();
    mu_locNa1.reset();
    mu_locNa3.reset();
    mu_locNa4.reset();
    mu_locHost.reset();
    mu_locGateway.reset();
    mu_locServer.reset();
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
    mu_locNa2.print();
    mu_locNa1.print();
    mu_locNa3.print();
    mu_locNa4.print();
    mu_locHost.print();
    mu_locGateway.print();
    mu_locServer.print();
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
    mu_locNa2.print_diff(prevstate);
    mu_locNa1.print_diff(prevstate);
    mu_locNa3.print_diff(prevstate);
    mu_locNa4.print_diff(prevstate);
    mu_locHost.print_diff(prevstate);
    mu_locGateway.print_diff(prevstate);
    mu_locServer.print_diff(prevstate);
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
    mu_locNa2.to_state(thestate);
    mu_locNa1.to_state(thestate);
    mu_locNa3.to_state(thestate);
    mu_locNa4.to_state(thestate);
    mu_locHost.to_state(thestate);
    mu_locGateway.to_state(thestate);
    mu_locServer.to_state(thestate);
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
    mu_locNa2.value(from.mu_locNa2.value());
    mu_locNa1.value(from.mu_locNa1.value());
    mu_locNa3.value(from.mu_locNa3.value());
    mu_locNa4.value(from.mu_locNa4.value());
    mu_locHost.value(from.mu_locHost.value());
    mu_locGateway.value(from.mu_locGateway.value());
    mu_locServer.value(from.mu_locServer.value());
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
  if (name) mu_locNa2.set_self_2(name, ".locNa2", os + 56 ); else mu_locNa2.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa1.set_self_2(name, ".locNa1", os + 64 ); else mu_locNa1.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa3.set_self_2(name, ".locNa3", os + 72 ); else mu_locNa3.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa4.set_self_2(name, ".locNa4", os + 80 ); else mu_locNa4.set_self_2(NULL, NULL, 0);
  if (name) mu_locHost.set_self_2(name, ".locHost", os + 88 ); else mu_locHost.set_self_2(NULL, NULL, 0);
  if (name) mu_locGateway.set_self_2(name, ".locGateway", os + 96 ); else mu_locGateway.set_self_2(NULL, NULL, 0);
  if (name) mu_locServer.set_self_2(name, ".locServer", os + 104 ); else mu_locServer.set_self_2(NULL, NULL, 0);
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
  mu_1_NonceType mu_locNa2;
  mu_1_NonceType mu_locNa1;
  mu_1_NonceType mu_locNa3;
  mu_1_NonceType mu_locNa4;
  mu_1_AgentType mu_locHost;
  mu_1_AgentType mu_locGateway;
  mu_1_AgentType mu_locServer;
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
    w = CompareWeight(a.mu_locNa2, b.mu_locNa2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa1, b.mu_locNa1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa3, b.mu_locNa3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa4, b.mu_locNa4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locHost, b.mu_locHost);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locGateway, b.mu_locGateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locServer, b.mu_locServer);
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
    w = Compare(a.mu_locNa2, b.mu_locNa2);
    if (w!=0) return w;
    w = Compare(a.mu_locNa1, b.mu_locNa1);
    if (w!=0) return w;
    w = Compare(a.mu_locNa3, b.mu_locNa3);
    if (w!=0) return w;
    w = Compare(a.mu_locNa4, b.mu_locNa4);
    if (w!=0) return w;
    w = Compare(a.mu_locHost, b.mu_locHost);
    if (w!=0) return w;
    w = Compare(a.mu_locGateway, b.mu_locGateway);
    if (w!=0) return w;
    w = Compare(a.mu_locServer, b.mu_locServer);
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
    mu_locNa2.MultisetSort();
    mu_locNa1.MultisetSort();
    mu_locNa3.MultisetSort();
    mu_locNa4.MultisetSort();
    mu_locHost.MultisetSort();
    mu_locGateway.MultisetSort();
    mu_locServer.MultisetSort();
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
    mu_locNa2.print_statistic();
    mu_locNa1.print_statistic();
    mu_locNa3.print_statistic();
    mu_locNa4.print_statistic();
    mu_locHost.print_statistic();
    mu_locGateway.print_statistic();
    mu_locServer.print_statistic();
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
    mu_locNa2.clear();
    mu_locNa1.clear();
    mu_locNa3.clear();
    mu_locNa4.clear();
    mu_locHost.clear();
    mu_locGateway.clear();
    mu_locServer.clear();
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
    mu_locNa2.undefine();
    mu_locNa1.undefine();
    mu_locNa3.undefine();
    mu_locNa4.undefine();
    mu_locHost.undefine();
    mu_locGateway.undefine();
    mu_locServer.undefine();
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
    mu_locNa2.reset();
    mu_locNa1.reset();
    mu_locNa3.reset();
    mu_locNa4.reset();
    mu_locHost.reset();
    mu_locGateway.reset();
    mu_locServer.reset();
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
    mu_locNa2.print();
    mu_locNa1.print();
    mu_locNa3.print();
    mu_locNa4.print();
    mu_locHost.print();
    mu_locGateway.print();
    mu_locServer.print();
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
    mu_locNa2.print_diff(prevstate);
    mu_locNa1.print_diff(prevstate);
    mu_locNa3.print_diff(prevstate);
    mu_locNa4.print_diff(prevstate);
    mu_locHost.print_diff(prevstate);
    mu_locGateway.print_diff(prevstate);
    mu_locServer.print_diff(prevstate);
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
    mu_locNa2.to_state(thestate);
    mu_locNa1.to_state(thestate);
    mu_locNa3.to_state(thestate);
    mu_locNa4.to_state(thestate);
    mu_locHost.to_state(thestate);
    mu_locGateway.to_state(thestate);
    mu_locServer.to_state(thestate);
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
    mu_locNa2.value(from.mu_locNa2.value());
    mu_locNa1.value(from.mu_locNa1.value());
    mu_locNa3.value(from.mu_locNa3.value());
    mu_locNa4.value(from.mu_locNa4.value());
    mu_locHost.value(from.mu_locHost.value());
    mu_locGateway.value(from.mu_locGateway.value());
    mu_locServer.value(from.mu_locServer.value());
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
  if (name) mu_locNa2.set_self_2(name, ".locNa2", os + 56 ); else mu_locNa2.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa1.set_self_2(name, ".locNa1", os + 64 ); else mu_locNa1.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa3.set_self_2(name, ".locNa3", os + 72 ); else mu_locNa3.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa4.set_self_2(name, ".locNa4", os + 80 ); else mu_locNa4.set_self_2(NULL, NULL, 0);
  if (name) mu_locHost.set_self_2(name, ".locHost", os + 88 ); else mu_locHost.set_self_2(NULL, NULL, 0);
  if (name) mu_locGateway.set_self_2(name, ".locGateway", os + 96 ); else mu_locGateway.set_self_2(NULL, NULL, 0);
  if (name) mu_locServer.set_self_2(name, ".locServer", os + 104 ); else mu_locServer.set_self_2(NULL, NULL, 0);
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
  mu_1_NonceType mu_locNa2;
  mu_1_NonceType mu_locNa1;
  mu_1_NonceType mu_locNa3;
  mu_1_NonceType mu_locNa4;
  mu_1_AgentType mu_locHost;
  mu_1_AgentType mu_locGateway;
  mu_1_AgentType mu_locServer;
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
    w = CompareWeight(a.mu_locNa2, b.mu_locNa2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa1, b.mu_locNa1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa3, b.mu_locNa3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa4, b.mu_locNa4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locHost, b.mu_locHost);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locGateway, b.mu_locGateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locServer, b.mu_locServer);
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
    w = Compare(a.mu_locNa2, b.mu_locNa2);
    if (w!=0) return w;
    w = Compare(a.mu_locNa1, b.mu_locNa1);
    if (w!=0) return w;
    w = Compare(a.mu_locNa3, b.mu_locNa3);
    if (w!=0) return w;
    w = Compare(a.mu_locNa4, b.mu_locNa4);
    if (w!=0) return w;
    w = Compare(a.mu_locHost, b.mu_locHost);
    if (w!=0) return w;
    w = Compare(a.mu_locGateway, b.mu_locGateway);
    if (w!=0) return w;
    w = Compare(a.mu_locServer, b.mu_locServer);
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
    mu_locNa2.MultisetSort();
    mu_locNa1.MultisetSort();
    mu_locNa3.MultisetSort();
    mu_locNa4.MultisetSort();
    mu_locHost.MultisetSort();
    mu_locGateway.MultisetSort();
    mu_locServer.MultisetSort();
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
    mu_locNa2.print_statistic();
    mu_locNa1.print_statistic();
    mu_locNa3.print_statistic();
    mu_locNa4.print_statistic();
    mu_locHost.print_statistic();
    mu_locGateway.print_statistic();
    mu_locServer.print_statistic();
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
    mu_locNa2.clear();
    mu_locNa1.clear();
    mu_locNa3.clear();
    mu_locNa4.clear();
    mu_locHost.clear();
    mu_locGateway.clear();
    mu_locServer.clear();
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
    mu_locNa2.undefine();
    mu_locNa1.undefine();
    mu_locNa3.undefine();
    mu_locNa4.undefine();
    mu_locHost.undefine();
    mu_locGateway.undefine();
    mu_locServer.undefine();
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
    mu_locNa2.reset();
    mu_locNa1.reset();
    mu_locNa3.reset();
    mu_locNa4.reset();
    mu_locHost.reset();
    mu_locGateway.reset();
    mu_locServer.reset();
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
    mu_locNa2.print();
    mu_locNa1.print();
    mu_locNa3.print();
    mu_locNa4.print();
    mu_locHost.print();
    mu_locGateway.print();
    mu_locServer.print();
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
    mu_locNa2.print_diff(prevstate);
    mu_locNa1.print_diff(prevstate);
    mu_locNa3.print_diff(prevstate);
    mu_locNa4.print_diff(prevstate);
    mu_locHost.print_diff(prevstate);
    mu_locGateway.print_diff(prevstate);
    mu_locServer.print_diff(prevstate);
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
    mu_locNa2.to_state(thestate);
    mu_locNa1.to_state(thestate);
    mu_locNa3.to_state(thestate);
    mu_locNa4.to_state(thestate);
    mu_locHost.to_state(thestate);
    mu_locGateway.to_state(thestate);
    mu_locServer.to_state(thestate);
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
    mu_locNa2.value(from.mu_locNa2.value());
    mu_locNa1.value(from.mu_locNa1.value());
    mu_locNa3.value(from.mu_locNa3.value());
    mu_locNa4.value(from.mu_locNa4.value());
    mu_locHost.value(from.mu_locHost.value());
    mu_locGateway.value(from.mu_locGateway.value());
    mu_locServer.value(from.mu_locServer.value());
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
  if (name) mu_locNa2.set_self_2(name, ".locNa2", os + 56 ); else mu_locNa2.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa1.set_self_2(name, ".locNa1", os + 64 ); else mu_locNa1.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa3.set_self_2(name, ".locNa3", os + 72 ); else mu_locNa3.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa4.set_self_2(name, ".locNa4", os + 80 ); else mu_locNa4.set_self_2(NULL, NULL, 0);
  if (name) mu_locHost.set_self_2(name, ".locHost", os + 88 ); else mu_locHost.set_self_2(NULL, NULL, 0);
  if (name) mu_locGateway.set_self_2(name, ".locGateway", os + 96 ); else mu_locGateway.set_self_2(NULL, NULL, 0);
  if (name) mu_locServer.set_self_2(name, ".locServer", os + 104 ); else mu_locServer.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 112 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 120 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleServer::~mu_1_RoleServer()
{
}

/*** end record declaration ***/
mu_1_RoleServer mu_1_RoleServer_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_indexType array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
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
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<101; i++) {
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
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
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
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_msgSet
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_1 mu_content;
  mu_1_indexType mu_length;
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
  if (name) mu_length.set_self_2(name, ".length", os + 808 ); else mu_length.set_self_2(NULL, NULL, 0);
}

mu_1_msgSet::~mu_1_msgSet()
{
}

/*** end record declaration ***/
mu_1_msgSet mu_1_msgSet_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_Channel array[ 10 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_Channel& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 10 ) )
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
    for (int i = 0; i < 10; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<10; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<10; i++) {
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
    for (int i=0; i<10; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<10; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 10; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 10; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 10; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 10; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 10; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 10; i++)
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
  for(int i = 0; i < 10; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 232 + os);
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
  mu_1_RoleHost array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
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
  mu_1_RoleGateway array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
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
  mu_1_RoleServer array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
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
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
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
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 128 + os);
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
  mu_1_Message array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
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
    for (int i = 0; i < 101; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<101; i++) {
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
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
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
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 208 + os);
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
  mu_0_boolean array[ 101 ];
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
    if ( ( index >= 0 ) && ( index <= 100 ) )
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
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<101; i++) {
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
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
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
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
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
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<101; i++) {
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
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

const int mu_roleHostNum = 1;
const int mu_roleGatewayNum = 1;
const int mu_roleServerNum = 1;
const int mu_totalFact = 100;
const int mu_msgLength = 15;
const int mu_chanNum = 10;
const int mu_Intruder = 1;
const int mu_HostID = 2;
const int mu_GatewayIP = 3;
const int mu_ServerIP = 4;
const int mu_anyAgent = 5;
const int mu_Na2 = 6;
const int mu_Na1 = 7;
const int mu_Na3 = 8;
const int mu_Na4 = 9;
const int mu_anyNonce = 10;
const int mu_PK = 11;
const int mu_SK = 12;
const int mu_Symk = 13;
const int mu_Host1 = 14;
const int mu_Host2 = 15;
const int mu_Host3 = 16;
const int mu_Host4 = 17;
const int mu_Host5 = 18;
const int mu_Gateway1 = 19;
const int mu_Gateway2 = 20;
const int mu_Gateway3 = 21;
const int mu_Gateway4 = 22;
const int mu_Gateway5 = 23;
const int mu_Gateway6 = 24;
const int mu_Gateway7 = 25;
const int mu_Gateway8 = 26;
const int mu_Gateway9 = 27;
const int mu_Server1 = 28;
const int mu_Server2 = 29;
const int mu_Server3 = 30;
const int mu_Server4 = 31;
const int mu_null = 32;
const int mu_agent = 33;
const int mu_nonce = 34;
const int mu_key = 35;
const int mu_aenc = 36;
const int mu_senc = 37;
const int mu_concat = 38;
const int mu_hash = 39;
/*** Variable declaration ***/
mu_1__type_2 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_3 mu_roleHost("roleHost",2320);

/*** Variable declaration ***/
mu_1__type_4 mu_roleGateway("roleGateway",2448);

/*** Variable declaration ***/
mu_1__type_5 mu_roleServer("roleServer",2576);

/*** Variable declaration ***/
mu_1__type_6 mu_msgs("msgs",2704);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",23712);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",23720);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat1Set("sPat1Set",24536);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",25352);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat2Set("sPat2Set",26168);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",26984);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat3Set("sPat3Set",27800);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",28616);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat4Set("sPat4Set",29432);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",30248);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat5Set("sPat5Set",31064);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",31880);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat6Set("sPat6Set",32696);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",33512);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat7Set("sPat7Set",34328);

/*** Variable declaration ***/
mu_1__type_7 mu_Spy_known("Spy_known",35144);

/*** Variable declaration ***/
mu_1__type_8 mu_emit("emit",35952);

/*** Variable declaration ***/
mu_1_indexType mu_gnum("gnum",36760);

void mu_lookAddPat1(const mu_1_NonceType& mu_Na1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
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
mu_msgs[mu_index].mu_length = 1;
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

void mu_constructSpat1(const mu_1_NonceType& mu_Na1, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_10;  mu__while_expr_10 = (mu_i) <= (mu_msg_end);
int mu__counter_9 = 0;
while (mu__while_expr_10) {
if ( ++mu__counter_9 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_Na1) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_10 = (mu_i) <= (mu_msg_end);
}
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
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat1Set.mu_length = (mu_sPat1Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat1Set.mu_content[mu_sPat1Set.mu_length].undefine();
else
  mu_sPat1Set.mu_content[mu_sPat1Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat2(const mu_1_AgentType& mu_Gateway, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
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
mu_msgs[mu_index].mu_length = 1;
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

void mu_constructSpat2(const mu_1_AgentType& mu_Gateway, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_12;  mu__while_expr_12 = (mu_i) <= (mu_msg_end);
int mu__counter_11 = 0;
while (mu__while_expr_12) {
if ( ++mu__counter_11 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_Gateway) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_12 = (mu_i) <= (mu_msg_end);
}
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
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat2Set.mu_length = (mu_sPat2Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat2Set.mu_content[mu_sPat2Set.mu_length].undefine();
else
  mu_sPat2Set.mu_content[mu_sPat2Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat3(const mu_1_NonceType& mu_Na1, const mu_1_AgentType& mu_Gateway, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",208);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",416);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",424);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",432);

mu_index = 0;
mu_lookAddPat1 ( mu_Na1, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_Gateway, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr13;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr13 )
{
bool mu__boolexpr14;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr14 )
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
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
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

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr15;
  if (!(mu_flagPart1)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = (mu_flagPart2) ; 
}
if ( mu__boolexpr15 )
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

void mu_constructSpat3(const mu_1_NonceType& mu_Na1, const mu_1_AgentType& mu_Gateway, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat1 ( mu_Na1, mu_i1 );
mu_constructSpat2 ( mu_Gateway, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_17;  mu__while_expr_17 = (mu_i) <= (mu_msg_end);
int mu__counter_16 = 0;
while (mu__while_expr_17) {
if ( ++mu__counter_16 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr18;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr18 )
{
bool mu__boolexpr19;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr19 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_17 = (mu_i) <= (mu_msg_end);
}
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
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat3Set.mu_length = (mu_sPat3Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat3Set.mu_content[mu_sPat3Set.mu_length].undefine();
else
  mu_sPat3Set.mu_content[mu_sPat3Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat4(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",208);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",416);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",424);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",432);

mu_index = 0;
mu_lookAddPat2 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Na2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr20;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr20 )
{
bool mu__boolexpr21;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr21 )
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
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
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

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr22;
  if (!(mu_flagPart1)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = (mu_flagPart2) ; 
}
if ( mu__boolexpr22 )
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

void mu_constructSpat4(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat2 ( mu_Host, mu_i1 );
mu_constructSpat1 ( mu_Na2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_24;  mu__while_expr_24 = (mu_i) <= (mu_msg_end);
int mu__counter_23 = 0;
while (mu__while_expr_24) {
if ( ++mu__counter_23 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr25;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr25 )
{
bool mu__boolexpr26;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr26 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_24 = (mu_i) <= (mu_msg_end);
}
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
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat4Set.mu_length = (mu_sPat4Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat4Set.mu_content[mu_sPat4Set.mu_length].undefine();
else
  mu_sPat4Set.mu_content[mu_sPat4Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat5(const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr27;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_HostSk)) ; 
}
if ( mu__boolexpr27 )
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

void mu_constructSpat5(const mu_1_AgentType& mu_HostSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_29;  mu__while_expr_29 = (mu_i) <= (mu_msg_end);
int mu__counter_28 = 0;
while (mu__while_expr_29) {
if ( ++mu__counter_28 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr30;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK)) ; 
}
if ( mu__boolexpr30 )
{
if ( (mu_msgs[mu_i].mu_k.mu_ag) == (mu_HostSk) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_29 = (mu_i) <= (mu_msg_end);
}
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
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat5Set.mu_length = (mu_sPat5Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat5Set.mu_content[mu_sPat5Set.mu_length].undefine();
else
  mu_sPat5Set.mu_content[mu_sPat5Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat6(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",208);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",416);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",424);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",432);

mu_index = 0;
mu_lookAddPat4 ( mu_Host, mu_Na2, mu_msg1, mu_i1 );
mu_lookAddPat5 ( mu_HostSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr31;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr31 )
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
mu_msgs[mu_index].mu_length = 1;
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
bool mu__boolexpr32;
  if (!(mu_flagPart1)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = (mu_flagPart2) ; 
}
if ( mu__boolexpr32 )
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

void mu_constructSpat6(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, const mu_1_AgentType& mu_HostSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat4 ( mu_Host, mu_Na2, mu_i1 );
mu_constructSpat5 ( mu_HostSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_34;  mu__while_expr_34 = (mu_i) <= (mu_msg_end);
int mu__counter_33 = 0;
while (mu__while_expr_34) {
if ( ++mu__counter_33 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr35;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr35 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_34 = (mu_i) <= (mu_msg_end);
}
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
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat6Set.mu_length = (mu_sPat6Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat6Set.mu_content[mu_sPat6Set.mu_length].undefine();
else
  mu_sPat6Set.mu_content[mu_sPat6Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat7(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",208);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",416);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",624);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",632);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",640);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",648);

mu_index = 0;
mu_lookAddPat2 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Na2, mu_msg2, mu_i2 );
mu_lookAddPat6 ( mu_Host, mu_Na2, mu_HostSk, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr36;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr36 )
{
bool mu__boolexpr37;
bool mu__boolexpr38;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr37 )
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
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
mu_msgs[mu_index].mu_length = 3;
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

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr39;
bool mu__boolexpr40;
  if (!(mu_flagPart1)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = (mu_flagPart3) ; 
}
if ( mu__boolexpr39 )
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

void mu_constructSpat7(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_Na2, const mu_1_AgentType& mu_HostSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

mu_index = 0;
mu_constructSpat2 ( mu_Host, mu_i1 );
mu_constructSpat1 ( mu_Na2, mu_i2 );
mu_constructSpat6 ( mu_Host, mu_Na2, mu_HostSk, mu_i3 );
mu_i = 1;
{
  bool mu__while_expr_42;  mu__while_expr_42 = (mu_i) <= (mu_msg_end);
int mu__counter_41 = 0;
while (mu__while_expr_42) {
if ( ++mu__counter_41 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr43;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr43 )
{
bool mu__boolexpr44;
bool mu__boolexpr45;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr44 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_42 = (mu_i) <= (mu_msg_end);
}
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
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
mu_msgs[mu_index].mu_length = 3;
}
mu_sPat7Set.mu_length = (mu_sPat7Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat7Set.mu_content[mu_sPat7Set.mu_length].undefine();
else
  mu_sPat7Set.mu_content[mu_sPat7Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
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
mu_1_Message mu_msgNum2("msgNum2",208);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",416);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Na1 = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
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
mu_1_Message mu_msgNum2("msgNum2",208);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",416);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Host = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
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
mu_1_Message mu_msgNum1("msgNum1",224);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",432);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_HostSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
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
mu_1_Message mu_msgNum2("msgNum2",208);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",416);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",624);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Host = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_Na2 = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_k = mu_msgs[mu_msgNum3.mu_aencKey].mu_k;
mu_HostSk = mu_k.mu_ag;
};
/*** end procedure declaration ***/

void mu_get_msgNo(mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",16);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr46;
bool mu__boolexpr47;
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr50) mu__boolexpr49 = TRUE ;
  else {
bool mu__boolexpr51;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr49 = (mu__boolexpr51) ; 
}
  if (mu__boolexpr49) mu__boolexpr48 = TRUE ;
  else {
bool mu__boolexpr52;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr52 = FALSE ;
  else {
bool mu__boolexpr53;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr52 = (mu__boolexpr53) ; 
}
  mu__boolexpr48 = (mu__boolexpr52) ; 
}
  if (mu__boolexpr48) mu__boolexpr47 = TRUE ;
  else {
bool mu__boolexpr54;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr54 = FALSE ;
  else {
bool mu__boolexpr55;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr54 = (mu__boolexpr55) ; 
}
  mu__boolexpr47 = (mu__boolexpr54) ; 
}
  if (mu__boolexpr47) mu__boolexpr46 = TRUE ;
  else {
bool mu__boolexpr56;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr56 = FALSE ;
  else {
bool mu__boolexpr57;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr56 = (mu__boolexpr57) ; 
}
  mu__boolexpr46 = (mu__boolexpr56) ; 
}
if ( mu__boolexpr46 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr58;
  if (!((mu_msg.mu_msgType) == (mu_concat))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_msg.mu_length) == (mu_msgs[mu_i].mu_length)) ; 
}
if ( mu__boolexpr58 )
{
mu_j = mu_msg.mu_length;
mu_flag = mu_true;
{
  bool mu__while_expr_60;  mu__while_expr_60 = (mu_j) > (0);
int mu__counter_59 = 0;
while (mu__while_expr_60) {
if ( ++mu__counter_59 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msg.mu_concatPart[mu_j]) != (mu_msgs[mu_i].mu_concatPart[mu_j]) )
{
mu_flag = mu_false;
}
mu_j = (mu_j) - (1);
};
mu__while_expr_60 = (mu_j) > (0);
}
};
if ( mu_flag )
{
mu_index = mu_i;
}
}
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
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

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
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
cout << "senc{";
mu_printMsg ( mu_msgs[mu_msg.mu_sencMsg] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_sencKey] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
cout << "concat(";
mu_i = 1;
{
  bool mu__while_expr_62;  mu__while_expr_62 = (mu_i) < (mu_msg.mu_length);
int mu__counter_61 = 0;
while (mu__while_expr_62) {
if ( ++mu__counter_61 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ",";
mu_i = (mu_i) + (1);
};
mu__while_expr_62 = (mu_i) < (mu_msg.mu_length);
}
};
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
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
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr63;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_agent))) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
if ( mu__boolexpr63 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr64;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
if ( mu__boolexpr64 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr65;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr65 = FALSE ;
  else {
bool mu__boolexpr66;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr65 = (mu__boolexpr66) ; 
}
if ( mu__boolexpr65 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr67;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_aenc))) mu__boolexpr67 = FALSE ;
  else {
bool mu__boolexpr68;
  if (!((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey))) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg)) ; 
}
  mu__boolexpr67 = (mu__boolexpr68) ; 
}
if ( mu__boolexpr67 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr69;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_senc))) mu__boolexpr69 = FALSE ;
  else {
bool mu__boolexpr70;
  if (!((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg)) ; 
}
  mu__boolexpr69 = (mu__boolexpr70) ; 
}
if ( mu__boolexpr69 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr71;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr71 = FALSE ;
  else {
bool mu__boolexpr72;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msg.mu_concatPart[1]))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msg.mu_concatPart[2])) ; 
}
  mu__boolexpr71 = (mu__boolexpr72) ; 
}
if ( mu__boolexpr71 )
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

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr73;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr73 )
{
bool mu__boolexpr74;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr74 )
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
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct3By12 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct4By21(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr75;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr75 )
{
bool mu__boolexpr76;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr76 )
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
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct4By21 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct6By45(const mu_1_indexType& mu_msgNo4,const mu_1_indexType& mu_msgNo5)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr77;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo4))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo5)) ; 
}
if ( mu__boolexpr77 )
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
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo4;
if (mu_msgNo5.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo5;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct6By45 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By216(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr78;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr78 )
{
bool mu__boolexpr79;
bool mu__boolexpr80;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr79 )
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
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
mu_msgs[mu_index].mu_length = 3;
}
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
for(int mu_i = 0; mu_i <= 15; mu_i++) {
bool mu__boolexpr81;
  if (!((mu_msgNo) != (0))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr81 )
{
mu_flag = mu_true;
}
};
};
return mu_flag;
	Error.Error("The end of function exist reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchAgent(mu_1_AgentType& mu_locAg,mu_1_AgentType& mu_Ag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Ag) == (mu_anyAgent) )
{
mu_flag = mu_true;
if (mu_locAg.isundefined())
  mu_Ag.undefine();
else
  mu_Ag = mu_locAg;
}
else
{
if ( (mu_locAg) == (mu_Ag) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchAgent reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchNonce(mu_1_NonceType& mu_locNa,mu_1_NonceType& mu_Na)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Na) == (mu_anyNonce) )
{
mu_flag = mu_true;
if (mu_locNa.isundefined())
  mu_Na.undefine();
else
  mu_Na = mu_locNa;
}
else
{
if ( (mu_locNa) == (mu_Na) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchNonce reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_match(mu_1_Message& mu_m1,mu_1_Message& mu_m2)
{
/*** Variable declaration ***/
mu_0_boolean mu_concatFlag("concatFlag",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

bool mu__boolexpr82;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr82 )
{
return mu_matchAgent( mu_m1.mu_ag, mu_m2.mu_ag );
}
else
{
bool mu__boolexpr83;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr83 )
{
return mu_matchNonce( mu_m1.mu_noncePart, mu_m2.mu_noncePart );
}
else
{
bool mu__boolexpr84;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr84 )
{
bool mu__boolexpr85;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr85;
}
else
{
bool mu__boolexpr86;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr86 )
{
bool mu__boolexpr87;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr87;
}
else
{
bool mu__boolexpr88;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr88 )
{
bool mu__boolexpr89;
  if (!(mu_match( mu_msgs[mu_m1.mu_sencMsg], mu_msgs[mu_m2.mu_sencMsg] ))) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_match( mu_msgs[mu_m1.mu_sencKey], mu_msgs[mu_m2.mu_sencKey] )) ; 
}
return mu__boolexpr89;
}
else
{
bool mu__boolexpr90;
bool mu__boolexpr91;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr90 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr94;
  if (!((mu_i) > (0))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_93;  mu__while_expr_93 = mu__boolexpr94;
int mu__counter_92 = 0;
while (mu__while_expr_93) {
if ( ++mu__counter_92 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr95;
  if (!(mu_concatFlag)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr95;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr96;
  if (!((mu_i) > (0))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_concatFlag) ; 
}
mu__while_expr_93 = mu__boolexpr96;
}
};
return mu_concatFlag;
}
else
{
return mu_false;
}
}
}
}
}
}
	Error.Error("The end of function match reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchPat(mu_1_Message& mu_m1,mu_1_msgSet& mu_sPatnSet)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

mu_flag = mu_false;
mu_i = 1;
{
  bool mu__while_expr_98;  mu__while_expr_98 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
int mu__counter_97 = 0;
while (mu__while_expr_98) {
if ( ++mu__counter_97 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( mu_match( mu_m1, mu_msgs[mu_sPatnSet.mu_content[mu_i]] ) )
{
mu_flag = mu_true;
}
mu_i = (mu_i) + (1);
};
mu__while_expr_98 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
}
};
return mu_flag;
	Error.Error("The end of function matchPat reached without returning values.");
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
  mu_sPat1Set.clear();
  mu_pat2Set.clear();
  mu_sPat2Set.clear();
  mu_pat3Set.clear();
  mu_sPat3Set.clear();
  mu_pat4Set.clear();
  mu_sPat4Set.clear();
  mu_pat5Set.clear();
  mu_sPat5Set.clear();
  mu_pat6Set.clear();
  mu_sPat6Set.clear();
  mu_pat7Set.clear();
  mu_sPat7Set.clear();
  mu_Spy_known.clear();
  mu_emit.clear();
  mu_gnum.clear();
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
  mu_sPat1Set.undefine();
  mu_pat2Set.undefine();
  mu_sPat2Set.undefine();
  mu_pat3Set.undefine();
  mu_sPat3Set.undefine();
  mu_pat4Set.undefine();
  mu_sPat4Set.undefine();
  mu_pat5Set.undefine();
  mu_sPat5Set.undefine();
  mu_pat6Set.undefine();
  mu_sPat6Set.undefine();
  mu_pat7Set.undefine();
  mu_sPat7Set.undefine();
  mu_Spy_known.undefine();
  mu_emit.undefine();
  mu_gnum.undefine();
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
  mu_sPat1Set.reset();
  mu_pat2Set.reset();
  mu_sPat2Set.reset();
  mu_pat3Set.reset();
  mu_sPat3Set.reset();
  mu_pat4Set.reset();
  mu_sPat4Set.reset();
  mu_pat5Set.reset();
  mu_sPat5Set.reset();
  mu_pat6Set.reset();
  mu_sPat6Set.reset();
  mu_pat7Set.reset();
  mu_sPat7Set.reset();
  mu_Spy_known.reset();
  mu_emit.reset();
  mu_gnum.reset();
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
  mu_sPat1Set.print();
  mu_pat2Set.print();
  mu_sPat2Set.print();
  mu_pat3Set.print();
  mu_sPat3Set.print();
  mu_pat4Set.print();
  mu_sPat4Set.print();
  mu_pat5Set.print();
  mu_sPat5Set.print();
  mu_pat6Set.print();
  mu_sPat6Set.print();
  mu_pat7Set.print();
  mu_sPat7Set.print();
  mu_Spy_known.print();
  mu_emit.print();
  mu_gnum.print();
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
  mu_sPat1Set.print_statistic();
  mu_pat2Set.print_statistic();
  mu_sPat2Set.print_statistic();
  mu_pat3Set.print_statistic();
  mu_sPat3Set.print_statistic();
  mu_pat4Set.print_statistic();
  mu_sPat4Set.print_statistic();
  mu_pat5Set.print_statistic();
  mu_sPat5Set.print_statistic();
  mu_pat6Set.print_statistic();
  mu_sPat6Set.print_statistic();
  mu_pat7Set.print_statistic();
  mu_sPat7Set.print_statistic();
  mu_Spy_known.print_statistic();
  mu_emit.print_statistic();
  mu_gnum.print_statistic();
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
    mu_sPat1Set.print_diff(prevstate);
    mu_pat2Set.print_diff(prevstate);
    mu_sPat2Set.print_diff(prevstate);
    mu_pat3Set.print_diff(prevstate);
    mu_sPat3Set.print_diff(prevstate);
    mu_pat4Set.print_diff(prevstate);
    mu_sPat4Set.print_diff(prevstate);
    mu_pat5Set.print_diff(prevstate);
    mu_sPat5Set.print_diff(prevstate);
    mu_pat6Set.print_diff(prevstate);
    mu_sPat6Set.print_diff(prevstate);
    mu_pat7Set.print_diff(prevstate);
    mu_sPat7Set.print_diff(prevstate);
    mu_Spy_known.print_diff(prevstate);
    mu_emit.print_diff(prevstate);
    mu_gnum.print_diff(prevstate);
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
  mu_sPat1Set.to_state( newstate );
  mu_pat2Set.to_state( newstate );
  mu_sPat2Set.to_state( newstate );
  mu_pat3Set.to_state( newstate );
  mu_sPat3Set.to_state( newstate );
  mu_pat4Set.to_state( newstate );
  mu_sPat4Set.to_state( newstate );
  mu_pat5Set.to_state( newstate );
  mu_sPat5Set.to_state( newstate );
  mu_pat6Set.to_state( newstate );
  mu_sPat6Set.to_state( newstate );
  mu_pat7Set.to_state( newstate );
  mu_sPat7Set.to_state( newstate );
  mu_Spy_known.to_state( newstate );
  mu_emit.to_state( newstate );
  mu_gnum.to_state( newstate );
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
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 7, i2:%s, i1:%s, i0:%s", mu_i2.Name(), mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr99;
bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
  if (!((mu_i0) <= (mu_pat2Set.mu_length))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_i2) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_matchPat( mu_msgs[mu_construct7By216( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat6Set.mu_content[mu_i2] )], mu_sPat7Set )) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (!(mu_Spy_known[mu_construct7By216( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat6Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr99;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4096 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
  if (!((mu_i0) <= (mu_pat2Set.mu_length))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_i2) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_matchPat( mu_msgs[mu_construct7By216( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat6Set.mu_content[mu_i2] )], mu_sPat7Set )) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (!(mu_Spy_known[mu_construct7By216( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat6Set.mu_content[mu_i2] )])) ; 
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
    r = what_rule - 0;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("deconcat 7, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
bool mu__boolexpr116;
  if (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr113 = (!(mu__boolexpr116)) ; 
}
    return mu__boolexpr113;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4096;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4112 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
bool mu__boolexpr120;
  if (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr117 = (!(mu__boolexpr120)) ; 
}
	      if (mu__boolexpr117) {
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
    r = what_rule - 4096;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2];
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
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("encrypt 6, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_j) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_pat5Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_Spy_known[mu_pat5Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_matchPat( mu_msgs[mu_construct6By45( mu_pat4Set.mu_content[mu_i], mu_pat5Set.mu_content[mu_j] )], mu_sPat6Set )) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (!(mu_Spy_known[mu_construct6By45( mu_pat4Set.mu_content[mu_i], mu_pat5Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr121;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4112;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4368 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr128;
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
bool mu__boolexpr134;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_j) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_pat5Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (mu_Spy_known[mu_pat5Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = (mu_matchPat( mu_msgs[mu_construct6By45( mu_pat4Set.mu_content[mu_i], mu_pat5Set.mu_content[mu_j] )], mu_sPat6Set )) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (!(mu_Spy_known[mu_construct6By45( mu_pat4Set.mu_content[mu_i], mu_pat5Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr128) {
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
    r = what_rule - 4112;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("decrypt 6, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr135;
bool mu__boolexpr136;
bool mu__boolexpr137;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr135;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4368;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4384 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr138;
bool mu__boolexpr139;
bool mu__boolexpr140;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr138) {
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
    r = what_rule - 4368;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",208);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat4("flag_pat4",216);

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
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 4, i1:%s, i0:%s", mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
  if (!((mu_i0) <= (mu_pat2Set.mu_length))) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (mu_matchPat( mu_msgs[mu_construct4By21( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] )], mu_sPat4Set )) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (!(mu_Spy_known[mu_construct4By21( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] )])) ; 
}
    return mu__boolexpr141;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4384;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4640 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
  if (!((mu_i0) <= (mu_pat2Set.mu_length))) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_matchPat( mu_msgs[mu_construct4By21( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] )], mu_sPat4Set )) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (!(mu_Spy_known[mu_construct4By21( mu_pat2Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] )])) ; 
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
    r = what_rule - 4384;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("deconcat 4, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
bool mu__boolexpr154;
  if (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = (mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr151 = (!(mu__boolexpr154)) ; 
}
    return mu__boolexpr151;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4640;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4656 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr155;
bool mu__boolexpr156;
bool mu__boolexpr157;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
bool mu__boolexpr158;
  if (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = (mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr155 = (!(mu__boolexpr158)) ; 
}
	      if (mu__boolexpr155) {
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
    r = what_rule - 4640;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_concatPart[2];
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
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 3, i1:%s, i0:%s", mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_i1) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (mu_matchPat( mu_msgs[mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] )], mu_sPat3Set )) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (!(mu_Spy_known[mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] )])) ; 
}
    return mu__boolexpr159;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4656;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4912 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_i1) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_matchPat( mu_msgs[mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] )], mu_sPat3Set )) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (!(mu_Spy_known[mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] )])) ; 
}
	      if (mu__boolexpr164) {
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
    r = what_rule - 4656;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("deconcat 3, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
bool mu__boolexpr172;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr169 = (!(mu__boolexpr172)) ; 
}
    return mu__boolexpr169;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4912;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4928 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
bool mu__boolexpr176;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr173 = (!(mu__boolexpr176)) ; 
}
	      if (mu__boolexpr173) {
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
    r = what_rule - 4912;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2];
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
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[9], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
    return mu__boolexpr177;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4928;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4944 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
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
    r = what_rule - 4928;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat7Set.mu_content[mu_i]]) )
{
mu_ch[9].clear();
mu_ch[9].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[9].mu_sender = mu_Intruder;
mu_ch[9].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[9].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "seq9. ";
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
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[8], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr185;
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
    return mu__boolexpr185;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4944;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4960 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
	      if (mu__boolexpr189) {
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
    r = what_rule - 4944;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat7Set.mu_content[mu_i]]) )
{
mu_ch[8].clear();
mu_ch[8].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[8].mu_sender = mu_Intruder;
mu_ch[8].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[8].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "seq8. ";
mu_ch[8].mu_sender.print();
cout << "   ";
mu_ch[8].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[8].mu_msg );
cout << "\n";
}
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
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[7], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
bool mu__boolexpr196;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
    return mu__boolexpr193;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4960;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4976 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr197;
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
	      if (mu__boolexpr197) {
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
    r = what_rule - 4960;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat7Set.mu_content[mu_i]]) )
{
mu_ch[7].clear();
mu_ch[7].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[7].mu_sender = mu_Intruder;
mu_ch[7].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[7].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "seq7. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[7].mu_msg );
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
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[6], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr201;
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
    return mu__boolexpr201;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4976;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4992 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr205;
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
	      if (mu__boolexpr205) {
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
    r = what_rule - 4976;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat7Set.mu_content[mu_i]]) )
{
mu_ch[6].clear();
mu_ch[6].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[6].mu_sender = mu_Intruder;
mu_ch[6].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[6].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "seq6. ";
mu_ch[6].mu_sender.print();
cout << "   ";
mu_ch[6].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
}
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
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[5], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
    return mu__boolexpr209;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4992;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5008 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr213;
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
	      if (mu__boolexpr213) {
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
    r = what_rule - 4992;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat7Set.mu_content[mu_i]]) )
{
mu_ch[5].clear();
mu_ch[5].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[5].mu_sender = mu_Intruder;
mu_ch[5].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[5].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "seq5. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
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
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[4], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr217;
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
    return mu__boolexpr217;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5008;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5024 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
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
    r = what_rule - 5008;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat7Set.mu_content[mu_i]]) )
{
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "seq4. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
}
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
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[3], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
    return mu__boolexpr225;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5024;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5040 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
bool mu__boolexpr232;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
	      if (mu__boolexpr229) {
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
    r = what_rule - 5024;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat7Set.mu_content[mu_i]]) )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "seq3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
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
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[2], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
}
    return mu__boolexpr233;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5040;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5056 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
bool mu__boolexpr240;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (mu_matchPat( mu_msgs[mu_pat7Set.mu_content[mu_i]], mu_sPat7Set )) ; 
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
    r = what_rule - 5040;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat7Set.mu_content[mu_i]]) )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
cout << "seq2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
}
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
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[1], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (mu_matchPat( mu_msgs[mu_pat3Set.mu_content[mu_i]], mu_sPat3Set )) ; 
}
    return mu__boolexpr241;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5056;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5072 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
bool mu__boolexpr248;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (mu_matchPat( mu_msgs[mu_pat3Set.mu_content[mu_i]], mu_sPat3Set )) ; 
}
	      if (mu__boolexpr245) {
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
    r = what_rule - 5056;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat3Set.mu_content[mu_i]]) )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat3Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat3Set.mu_content[mu_i]] = mu_true;
cout << "seq1. ";
mu_ch[1].mu_sender.print();
cout << "   ";
mu_ch[1].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[1].mu_msg );
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
    return tsprintf("intruderGetMsgFromCh[9]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[9].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5072;
    while (what_rule < 5073 )
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
    r = what_rule - 5072;
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
mu_ch[9].mu_empty = mu_true;
mu_ch[9].mu_msg.clear();
}
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
    return tsprintf("intruderGetMsgFromCh[8]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[8].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5073;
    while (what_rule < 5074 )
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
    r = what_rule - 5073;
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
mu_ch[8].mu_empty = mu_true;
mu_ch[8].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[7]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[7].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5074;
    while (what_rule < 5075 )
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
    r = what_rule - 5074;
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
mu_ch[7].mu_empty = mu_true;
mu_ch[7].mu_msg.clear();
}
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
    return tsprintf("intruderGetMsgFromCh[6]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[6].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5075;
    while (what_rule < 5076 )
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
    r = what_rule - 5075;
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
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[5]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[5].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5076;
    while (what_rule < 5077 )
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
    r = what_rule - 5076;
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
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
}
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
    return tsprintf("intruderGetMsgFromCh[4]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[4].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5077;
    while (what_rule < 5078 )
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
    r = what_rule - 5077;
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
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[3]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[3].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5078;
    while (what_rule < 5079 )
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
    r = what_rule - 5078;
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
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
}
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
    return tsprintf("intruderGetMsgFromCh[2]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5079;
    while (what_rule < 5080 )
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
    r = what_rule - 5079;
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
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[1]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[1].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5080;
    while (what_rule < 5081 )
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
    r = what_rule - 5080;
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
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
}
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
bool mu__boolexpr249;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server4))) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_ch[8].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr249;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5081;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5082 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr250;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server4))) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_ch[8].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr250) {
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
    r = what_rule - 5081;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleServer[mu_i].mu_Server, mu_roleServer[mu_i].mu_Na4, mu_roleServer[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[8].mu_empty = mu_false;
mu_ch[8].mu_msg = mu_msg;
mu_ch[8].mu_sender = mu_roleServer[mu_i].mu_Server;
mu_ch[8].mu_receiver = mu_Intruder;
mu_roleServer[mu_i].mu_st = mu_Server1;
cout << "send4. ";
mu_ch[8].mu_sender.print();
cout << "   ";
mu_ch[8].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[8].mu_msg );
cout << "\n";
mu_roleServer[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr251;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server3))) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_ch[7].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr251;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5082;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5083 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr252;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server3))) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_ch[7].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr252) {
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
    r = what_rule - 5082;
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
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[7].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
mu_destruct7 ( mu_msg, mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_locNa3, mu_roleServer[mu_i].mu_locHost );
bool mu__boolexpr253;
bool mu__boolexpr254;
  if (!(mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host ))) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (mu_matchNonce( mu_roleServer[mu_i].mu_locNa3, mu_roleServer[mu_i].mu_Na3 )) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr253 )
{
mu_ch[7].mu_empty = mu_true;
mu_ch[7].mu_msg.clear();
mu_roleServer[mu_i].mu_st = mu_Server4;
}
}
cout << "recv3. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr255;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server2))) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr255;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5083;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5084 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr256;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server2))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
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
    r = what_rule - 5083;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleServer[mu_i].mu_Server, mu_roleServer[mu_i].mu_Na3, mu_roleServer[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleServer[mu_i].mu_Server;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleServer[mu_i].mu_st = mu_Server3;
cout << "send2. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
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
bool mu__boolexpr257;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server1))) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr257;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5084;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5085 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr258;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server1))) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
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
    r = what_rule - 5084;
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
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
mu_destruct7 ( mu_msg, mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_locNa2, mu_roleServer[mu_i].mu_locHost );
bool mu__boolexpr259;
bool mu__boolexpr260;
  if (!(mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host ))) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = (mu_matchNonce( mu_roleServer[mu_i].mu_locNa2, mu_roleServer[mu_i].mu_Na2 )) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = (mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr259 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleServer[mu_i].mu_st = mu_Server2;
}
}
cout << "recv1. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr261;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway9))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_ch[9].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr261;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5085;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5086 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr262;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway9))) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_ch[9].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr262) {
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
    r = what_rule - 5085;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleGateway[mu_i].mu_Server, mu_roleGateway[mu_i].mu_locNa4, mu_roleGateway[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[9].mu_empty = mu_false;
mu_ch[9].mu_msg = mu_msg;
mu_ch[9].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[9].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway1;
cout << "send9. ";
mu_ch[9].mu_sender.print();
cout << "   ";
mu_ch[9].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[9].mu_msg );
cout << "\n";
mu_roleGateway[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr263;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway8))) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr263;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5086;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5087 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr264;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway8))) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr264) {
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
    r = what_rule - 5086;
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
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[8].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
mu_destruct7 ( mu_msg, mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_locNa4, mu_roleGateway[mu_i].mu_locServer );
bool mu__boolexpr265;
bool mu__boolexpr266;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server ))) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = (mu_matchNonce( mu_roleGateway[mu_i].mu_locNa4, mu_roleGateway[mu_i].mu_Na4 )) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr265 )
{
mu_ch[8].mu_empty = mu_true;
mu_ch[8].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway9;
}
}
cout << "recv8. ";
mu_ch[8].mu_sender.print();
cout << "   ";
mu_ch[8].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr267;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway7))) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr267;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5087;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5088 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr268;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway7))) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
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
    r = what_rule - 5087;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_locNa3, mu_roleGateway[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[7].mu_empty = mu_false;
mu_ch[7].mu_msg = mu_msg;
mu_ch[7].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[7].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway8;
cout << "send7. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[7].mu_msg );
cout << "\n";
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
bool mu__boolexpr269;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway6))) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr269;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5088;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5089 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr270;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway6))) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
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
    r = what_rule - 5088;
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
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[6].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
mu_destruct7 ( mu_msg, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locNa3, mu_roleGateway[mu_i].mu_locHost );
bool mu__boolexpr271;
bool mu__boolexpr272;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host ))) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (mu_matchNonce( mu_roleGateway[mu_i].mu_locNa3, mu_roleGateway[mu_i].mu_Na3 )) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr271 )
{
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway7;
}
}
cout << "recv6. ";
mu_ch[6].mu_sender.print();
cout << "   ";
mu_ch[6].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr273;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway5))) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr273;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5089;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5090 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr274;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway5))) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
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
    r = what_rule - 5089;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleGateway[mu_i].mu_Server, mu_roleGateway[mu_i].mu_locNa3, mu_roleGateway[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[5].mu_empty = mu_false;
mu_ch[5].mu_msg = mu_msg;
mu_ch[5].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[5].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway6;
cout << "send5. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
cout << "\n";
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
bool mu__boolexpr275;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway4))) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr275;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5090;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5091 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr276;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway4))) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
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
    r = what_rule - 5090;
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
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[4].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
mu_destruct7 ( mu_msg, mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_locNa3, mu_roleGateway[mu_i].mu_locServer );
bool mu__boolexpr277;
bool mu__boolexpr278;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server ))) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = (mu_matchNonce( mu_roleGateway[mu_i].mu_locNa3, mu_roleGateway[mu_i].mu_Na3 )) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr277 )
{
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway5;
}
}
cout << "recv4. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr279;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway3))) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr279;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5091;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5092 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr280;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway3))) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr280) {
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
    r = what_rule - 5091;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_locNa2, mu_roleGateway[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway4;
cout << "send3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
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
bool mu__boolexpr281;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway2))) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr281;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5092;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5093 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr282;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway2))) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr282) {
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
    r = what_rule - 5092;
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
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
mu_destruct7 ( mu_msg, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locNa2, mu_roleGateway[mu_i].mu_locHost );
bool mu__boolexpr283;
bool mu__boolexpr284;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host ))) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (mu_matchNonce( mu_roleGateway[mu_i].mu_locNa2, mu_roleGateway[mu_i].mu_Na2 )) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr283 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway3;
}
}
cout << "recv2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr285;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway1))) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr285;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5093;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5094 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr286;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway1))) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr286) {
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
    r = what_rule - 5093;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons3 ( mu_roleGateway[mu_i].mu_Na1, mu_roleGateway[mu_i].mu_Gateway, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway2;
cout << "send1. ";
mu_ch[1].mu_sender.print();
cout << "   ";
mu_ch[1].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[1].mu_msg );
cout << "\n";
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
bool mu__boolexpr287;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host5))) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_ch[9].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr287;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5094;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5095 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr288;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host5))) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_ch[9].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr288) {
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
    r = what_rule - 5094;
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
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[9].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
mu_destruct7 ( mu_msg, mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_locNa4, mu_roleHost[mu_i].mu_locServer );
bool mu__boolexpr289;
bool mu__boolexpr290;
  if (!(mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server ))) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = (mu_matchNonce( mu_roleHost[mu_i].mu_locNa4, mu_roleHost[mu_i].mu_Na4 )) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr289 )
{
mu_ch[9].mu_empty = mu_true;
mu_ch[9].mu_msg.clear();
mu_roleHost[mu_i].mu_st = mu_Host1;
}
}
cout << "recv5. ";
mu_ch[9].mu_sender.print();
cout << "   ";
mu_ch[9].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
mu_roleHost[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr291;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host4))) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr291;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5095;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5096 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr292;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host4))) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr292) {
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
    r = what_rule - 5095;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleHost[mu_i].mu_Host, mu_roleHost[mu_i].mu_locNa3, mu_roleHost[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[6].mu_empty = mu_false;
mu_ch[6].mu_msg = mu_msg;
mu_ch[6].mu_sender = mu_roleHost[mu_i].mu_Host;
mu_ch[6].mu_receiver = mu_Intruder;
mu_roleHost[mu_i].mu_st = mu_Host5;
cout << "send4. ";
mu_ch[6].mu_sender.print();
cout << "   ";
mu_ch[6].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
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
bool mu__boolexpr293;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host3))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr293;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5096;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5097 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr294;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host3))) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr294) {
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
    r = what_rule - 5096;
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
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[5].mu_msg;
mu_isPat7 ( mu_msg, mu_flag_pat7 );
if ( mu_flag_pat7 )
{
mu_destruct7 ( mu_msg, mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_locNa3, mu_roleHost[mu_i].mu_locServer );
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!(mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server ))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (mu_matchNonce( mu_roleHost[mu_i].mu_locNa3, mu_roleHost[mu_i].mu_Na3 )) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr295 )
{
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
mu_roleHost[mu_i].mu_st = mu_Host4;
}
}
cout << "recv3. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr297;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host2))) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr297;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5097;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5098 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr298;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host2))) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr298) {
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
    r = what_rule - 5097;
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
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleHost[mu_i].mu_Host, mu_roleHost[mu_i].mu_Na2, mu_roleHost[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleHost[mu_i].mu_Host;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleHost[mu_i].mu_st = mu_Host3;
cout << "send2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
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
bool mu__boolexpr299;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host1))) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr299;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5098;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5099 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr300;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host1))) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr300) {
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
    r = what_rule - 5098;
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
mu_0_boolean mu_flag_pat3("flag_pat3",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_isPat3 ( mu_msg, mu_flag_pat3 );
if ( mu_flag_pat3 )
{
mu_destruct3 ( mu_msg, mu_roleHost[mu_i].mu_locNa1, mu_roleHost[mu_i].mu_locGateway );
bool mu__boolexpr301;
  if (!(mu_matchNonce( mu_roleHost[mu_i].mu_locNa1, mu_roleHost[mu_i].mu_Na1 ))) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_matchAgent( mu_roleHost[mu_i].mu_locGateway, mu_roleHost[mu_i].mu_Gateway )) ; 
}
if ( mu__boolexpr301 )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleHost[mu_i].mu_st = mu_Host2;
}
}
cout << "recv1. ";
mu_ch[1].mu_sender.print();
cout << "   ";
mu_ch[1].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<4096)
    { R0.NextRule(what_rule);
      if (what_rule<4096) return; }
  if (what_rule>=4096 && what_rule<4112)
    { R1.NextRule(what_rule);
      if (what_rule<4112) return; }
  if (what_rule>=4112 && what_rule<4368)
    { R2.NextRule(what_rule);
      if (what_rule<4368) return; }
  if (what_rule>=4368 && what_rule<4384)
    { R3.NextRule(what_rule);
      if (what_rule<4384) return; }
  if (what_rule>=4384 && what_rule<4640)
    { R4.NextRule(what_rule);
      if (what_rule<4640) return; }
  if (what_rule>=4640 && what_rule<4656)
    { R5.NextRule(what_rule);
      if (what_rule<4656) return; }
  if (what_rule>=4656 && what_rule<4912)
    { R6.NextRule(what_rule);
      if (what_rule<4912) return; }
  if (what_rule>=4912 && what_rule<4928)
    { R7.NextRule(what_rule);
      if (what_rule<4928) return; }
  if (what_rule>=4928 && what_rule<4944)
    { R8.NextRule(what_rule);
      if (what_rule<4944) return; }
  if (what_rule>=4944 && what_rule<4960)
    { R9.NextRule(what_rule);
      if (what_rule<4960) return; }
  if (what_rule>=4960 && what_rule<4976)
    { R10.NextRule(what_rule);
      if (what_rule<4976) return; }
  if (what_rule>=4976 && what_rule<4992)
    { R11.NextRule(what_rule);
      if (what_rule<4992) return; }
  if (what_rule>=4992 && what_rule<5008)
    { R12.NextRule(what_rule);
      if (what_rule<5008) return; }
  if (what_rule>=5008 && what_rule<5024)
    { R13.NextRule(what_rule);
      if (what_rule<5024) return; }
  if (what_rule>=5024 && what_rule<5040)
    { R14.NextRule(what_rule);
      if (what_rule<5040) return; }
  if (what_rule>=5040 && what_rule<5056)
    { R15.NextRule(what_rule);
      if (what_rule<5056) return; }
  if (what_rule>=5056 && what_rule<5072)
    { R16.NextRule(what_rule);
      if (what_rule<5072) return; }
  if (what_rule>=5072 && what_rule<5073)
    { R17.NextRule(what_rule);
      if (what_rule<5073) return; }
  if (what_rule>=5073 && what_rule<5074)
    { R18.NextRule(what_rule);
      if (what_rule<5074) return; }
  if (what_rule>=5074 && what_rule<5075)
    { R19.NextRule(what_rule);
      if (what_rule<5075) return; }
  if (what_rule>=5075 && what_rule<5076)
    { R20.NextRule(what_rule);
      if (what_rule<5076) return; }
  if (what_rule>=5076 && what_rule<5077)
    { R21.NextRule(what_rule);
      if (what_rule<5077) return; }
  if (what_rule>=5077 && what_rule<5078)
    { R22.NextRule(what_rule);
      if (what_rule<5078) return; }
  if (what_rule>=5078 && what_rule<5079)
    { R23.NextRule(what_rule);
      if (what_rule<5079) return; }
  if (what_rule>=5079 && what_rule<5080)
    { R24.NextRule(what_rule);
      if (what_rule<5080) return; }
  if (what_rule>=5080 && what_rule<5081)
    { R25.NextRule(what_rule);
      if (what_rule<5081) return; }
  if (what_rule>=5081 && what_rule<5082)
    { R26.NextRule(what_rule);
      if (what_rule<5082) return; }
  if (what_rule>=5082 && what_rule<5083)
    { R27.NextRule(what_rule);
      if (what_rule<5083) return; }
  if (what_rule>=5083 && what_rule<5084)
    { R28.NextRule(what_rule);
      if (what_rule<5084) return; }
  if (what_rule>=5084 && what_rule<5085)
    { R29.NextRule(what_rule);
      if (what_rule<5085) return; }
  if (what_rule>=5085 && what_rule<5086)
    { R30.NextRule(what_rule);
      if (what_rule<5086) return; }
  if (what_rule>=5086 && what_rule<5087)
    { R31.NextRule(what_rule);
      if (what_rule<5087) return; }
  if (what_rule>=5087 && what_rule<5088)
    { R32.NextRule(what_rule);
      if (what_rule<5088) return; }
  if (what_rule>=5088 && what_rule<5089)
    { R33.NextRule(what_rule);
      if (what_rule<5089) return; }
  if (what_rule>=5089 && what_rule<5090)
    { R34.NextRule(what_rule);
      if (what_rule<5090) return; }
  if (what_rule>=5090 && what_rule<5091)
    { R35.NextRule(what_rule);
      if (what_rule<5091) return; }
  if (what_rule>=5091 && what_rule<5092)
    { R36.NextRule(what_rule);
      if (what_rule<5092) return; }
  if (what_rule>=5092 && what_rule<5093)
    { R37.NextRule(what_rule);
      if (what_rule<5093) return; }
  if (what_rule>=5093 && what_rule<5094)
    { R38.NextRule(what_rule);
      if (what_rule<5094) return; }
  if (what_rule>=5094 && what_rule<5095)
    { R39.NextRule(what_rule);
      if (what_rule<5095) return; }
  if (what_rule>=5095 && what_rule<5096)
    { R40.NextRule(what_rule);
      if (what_rule<5096) return; }
  if (what_rule>=5096 && what_rule<5097)
    { R41.NextRule(what_rule);
      if (what_rule<5097) return; }
  if (what_rule>=5097 && what_rule<5098)
    { R42.NextRule(what_rule);
      if (what_rule<5098) return; }
  if (what_rule>=5098 && what_rule<5099)
    { R43.NextRule(what_rule);
      if (what_rule<5099) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=4095) return R0.Condition(r-0);
  if (r>=4096 && r<=4111) return R1.Condition(r-4096);
  if (r>=4112 && r<=4367) return R2.Condition(r-4112);
  if (r>=4368 && r<=4383) return R3.Condition(r-4368);
  if (r>=4384 && r<=4639) return R4.Condition(r-4384);
  if (r>=4640 && r<=4655) return R5.Condition(r-4640);
  if (r>=4656 && r<=4911) return R6.Condition(r-4656);
  if (r>=4912 && r<=4927) return R7.Condition(r-4912);
  if (r>=4928 && r<=4943) return R8.Condition(r-4928);
  if (r>=4944 && r<=4959) return R9.Condition(r-4944);
  if (r>=4960 && r<=4975) return R10.Condition(r-4960);
  if (r>=4976 && r<=4991) return R11.Condition(r-4976);
  if (r>=4992 && r<=5007) return R12.Condition(r-4992);
  if (r>=5008 && r<=5023) return R13.Condition(r-5008);
  if (r>=5024 && r<=5039) return R14.Condition(r-5024);
  if (r>=5040 && r<=5055) return R15.Condition(r-5040);
  if (r>=5056 && r<=5071) return R16.Condition(r-5056);
  if (r>=5072 && r<=5072) return R17.Condition(r-5072);
  if (r>=5073 && r<=5073) return R18.Condition(r-5073);
  if (r>=5074 && r<=5074) return R19.Condition(r-5074);
  if (r>=5075 && r<=5075) return R20.Condition(r-5075);
  if (r>=5076 && r<=5076) return R21.Condition(r-5076);
  if (r>=5077 && r<=5077) return R22.Condition(r-5077);
  if (r>=5078 && r<=5078) return R23.Condition(r-5078);
  if (r>=5079 && r<=5079) return R24.Condition(r-5079);
  if (r>=5080 && r<=5080) return R25.Condition(r-5080);
  if (r>=5081 && r<=5081) return R26.Condition(r-5081);
  if (r>=5082 && r<=5082) return R27.Condition(r-5082);
  if (r>=5083 && r<=5083) return R28.Condition(r-5083);
  if (r>=5084 && r<=5084) return R29.Condition(r-5084);
  if (r>=5085 && r<=5085) return R30.Condition(r-5085);
  if (r>=5086 && r<=5086) return R31.Condition(r-5086);
  if (r>=5087 && r<=5087) return R32.Condition(r-5087);
  if (r>=5088 && r<=5088) return R33.Condition(r-5088);
  if (r>=5089 && r<=5089) return R34.Condition(r-5089);
  if (r>=5090 && r<=5090) return R35.Condition(r-5090);
  if (r>=5091 && r<=5091) return R36.Condition(r-5091);
  if (r>=5092 && r<=5092) return R37.Condition(r-5092);
  if (r>=5093 && r<=5093) return R38.Condition(r-5093);
  if (r>=5094 && r<=5094) return R39.Condition(r-5094);
  if (r>=5095 && r<=5095) return R40.Condition(r-5095);
  if (r>=5096 && r<=5096) return R41.Condition(r-5096);
  if (r>=5097 && r<=5097) return R42.Condition(r-5097);
  if (r>=5098 && r<=5098) return R43.Condition(r-5098);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=4095) { R0.Code(r-0); return; } 
  if (r>=4096 && r<=4111) { R1.Code(r-4096); return; } 
  if (r>=4112 && r<=4367) { R2.Code(r-4112); return; } 
  if (r>=4368 && r<=4383) { R3.Code(r-4368); return; } 
  if (r>=4384 && r<=4639) { R4.Code(r-4384); return; } 
  if (r>=4640 && r<=4655) { R5.Code(r-4640); return; } 
  if (r>=4656 && r<=4911) { R6.Code(r-4656); return; } 
  if (r>=4912 && r<=4927) { R7.Code(r-4912); return; } 
  if (r>=4928 && r<=4943) { R8.Code(r-4928); return; } 
  if (r>=4944 && r<=4959) { R9.Code(r-4944); return; } 
  if (r>=4960 && r<=4975) { R10.Code(r-4960); return; } 
  if (r>=4976 && r<=4991) { R11.Code(r-4976); return; } 
  if (r>=4992 && r<=5007) { R12.Code(r-4992); return; } 
  if (r>=5008 && r<=5023) { R13.Code(r-5008); return; } 
  if (r>=5024 && r<=5039) { R14.Code(r-5024); return; } 
  if (r>=5040 && r<=5055) { R15.Code(r-5040); return; } 
  if (r>=5056 && r<=5071) { R16.Code(r-5056); return; } 
  if (r>=5072 && r<=5072) { R17.Code(r-5072); return; } 
  if (r>=5073 && r<=5073) { R18.Code(r-5073); return; } 
  if (r>=5074 && r<=5074) { R19.Code(r-5074); return; } 
  if (r>=5075 && r<=5075) { R20.Code(r-5075); return; } 
  if (r>=5076 && r<=5076) { R21.Code(r-5076); return; } 
  if (r>=5077 && r<=5077) { R22.Code(r-5077); return; } 
  if (r>=5078 && r<=5078) { R23.Code(r-5078); return; } 
  if (r>=5079 && r<=5079) { R24.Code(r-5079); return; } 
  if (r>=5080 && r<=5080) { R25.Code(r-5080); return; } 
  if (r>=5081 && r<=5081) { R26.Code(r-5081); return; } 
  if (r>=5082 && r<=5082) { R27.Code(r-5082); return; } 
  if (r>=5083 && r<=5083) { R28.Code(r-5083); return; } 
  if (r>=5084 && r<=5084) { R29.Code(r-5084); return; } 
  if (r>=5085 && r<=5085) { R30.Code(r-5085); return; } 
  if (r>=5086 && r<=5086) { R31.Code(r-5086); return; } 
  if (r>=5087 && r<=5087) { R32.Code(r-5087); return; } 
  if (r>=5088 && r<=5088) { R33.Code(r-5088); return; } 
  if (r>=5089 && r<=5089) { R34.Code(r-5089); return; } 
  if (r>=5090 && r<=5090) { R35.Code(r-5090); return; } 
  if (r>=5091 && r<=5091) { R36.Code(r-5091); return; } 
  if (r>=5092 && r<=5092) { R37.Code(r-5092); return; } 
  if (r>=5093 && r<=5093) { R38.Code(r-5093); return; } 
  if (r>=5094 && r<=5094) { R39.Code(r-5094); return; } 
  if (r>=5095 && r<=5095) { R40.Code(r-5095); return; } 
  if (r>=5096 && r<=5096) { R41.Code(r-5096); return; } 
  if (r>=5097 && r<=5097) { R42.Code(r-5097); return; } 
  if (r>=5098 && r<=5098) { R43.Code(r-5098); return; } 
}
int Priority(unsigned short r)
{
  if (r<=4095) { return R0.Priority(); } 
  if (r>=4096 && r<=4111) { return R1.Priority(); } 
  if (r>=4112 && r<=4367) { return R2.Priority(); } 
  if (r>=4368 && r<=4383) { return R3.Priority(); } 
  if (r>=4384 && r<=4639) { return R4.Priority(); } 
  if (r>=4640 && r<=4655) { return R5.Priority(); } 
  if (r>=4656 && r<=4911) { return R6.Priority(); } 
  if (r>=4912 && r<=4927) { return R7.Priority(); } 
  if (r>=4928 && r<=4943) { return R8.Priority(); } 
  if (r>=4944 && r<=4959) { return R9.Priority(); } 
  if (r>=4960 && r<=4975) { return R10.Priority(); } 
  if (r>=4976 && r<=4991) { return R11.Priority(); } 
  if (r>=4992 && r<=5007) { return R12.Priority(); } 
  if (r>=5008 && r<=5023) { return R13.Priority(); } 
  if (r>=5024 && r<=5039) { return R14.Priority(); } 
  if (r>=5040 && r<=5055) { return R15.Priority(); } 
  if (r>=5056 && r<=5071) { return R16.Priority(); } 
  if (r>=5072 && r<=5072) { return R17.Priority(); } 
  if (r>=5073 && r<=5073) { return R18.Priority(); } 
  if (r>=5074 && r<=5074) { return R19.Priority(); } 
  if (r>=5075 && r<=5075) { return R20.Priority(); } 
  if (r>=5076 && r<=5076) { return R21.Priority(); } 
  if (r>=5077 && r<=5077) { return R22.Priority(); } 
  if (r>=5078 && r<=5078) { return R23.Priority(); } 
  if (r>=5079 && r<=5079) { return R24.Priority(); } 
  if (r>=5080 && r<=5080) { return R25.Priority(); } 
  if (r>=5081 && r<=5081) { return R26.Priority(); } 
  if (r>=5082 && r<=5082) { return R27.Priority(); } 
  if (r>=5083 && r<=5083) { return R28.Priority(); } 
  if (r>=5084 && r<=5084) { return R29.Priority(); } 
  if (r>=5085 && r<=5085) { return R30.Priority(); } 
  if (r>=5086 && r<=5086) { return R31.Priority(); } 
  if (r>=5087 && r<=5087) { return R32.Priority(); } 
  if (r>=5088 && r<=5088) { return R33.Priority(); } 
  if (r>=5089 && r<=5089) { return R34.Priority(); } 
  if (r>=5090 && r<=5090) { return R35.Priority(); } 
  if (r>=5091 && r<=5091) { return R36.Priority(); } 
  if (r>=5092 && r<=5092) { return R37.Priority(); } 
  if (r>=5093 && r<=5093) { return R38.Priority(); } 
  if (r>=5094 && r<=5094) { return R39.Priority(); } 
  if (r>=5095 && r<=5095) { return R40.Priority(); } 
  if (r>=5096 && r<=5096) { return R41.Priority(); } 
  if (r>=5097 && r<=5097) { return R42.Priority(); } 
  if (r>=5098 && r<=5098) { return R43.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=4095) return R0.Name(r-0);
  if (r>=4096 && r<=4111) return R1.Name(r-4096);
  if (r>=4112 && r<=4367) return R2.Name(r-4112);
  if (r>=4368 && r<=4383) return R3.Name(r-4368);
  if (r>=4384 && r<=4639) return R4.Name(r-4384);
  if (r>=4640 && r<=4655) return R5.Name(r-4640);
  if (r>=4656 && r<=4911) return R6.Name(r-4656);
  if (r>=4912 && r<=4927) return R7.Name(r-4912);
  if (r>=4928 && r<=4943) return R8.Name(r-4928);
  if (r>=4944 && r<=4959) return R9.Name(r-4944);
  if (r>=4960 && r<=4975) return R10.Name(r-4960);
  if (r>=4976 && r<=4991) return R11.Name(r-4976);
  if (r>=4992 && r<=5007) return R12.Name(r-4992);
  if (r>=5008 && r<=5023) return R13.Name(r-5008);
  if (r>=5024 && r<=5039) return R14.Name(r-5024);
  if (r>=5040 && r<=5055) return R15.Name(r-5040);
  if (r>=5056 && r<=5071) return R16.Name(r-5056);
  if (r>=5072 && r<=5072) return R17.Name(r-5072);
  if (r>=5073 && r<=5073) return R18.Name(r-5073);
  if (r>=5074 && r<=5074) return R19.Name(r-5074);
  if (r>=5075 && r<=5075) return R20.Name(r-5075);
  if (r>=5076 && r<=5076) return R21.Name(r-5076);
  if (r>=5077 && r<=5077) return R22.Name(r-5077);
  if (r>=5078 && r<=5078) return R23.Name(r-5078);
  if (r>=5079 && r<=5079) return R24.Name(r-5079);
  if (r>=5080 && r<=5080) return R25.Name(r-5080);
  if (r>=5081 && r<=5081) return R26.Name(r-5081);
  if (r>=5082 && r<=5082) return R27.Name(r-5082);
  if (r>=5083 && r<=5083) return R28.Name(r-5083);
  if (r>=5084 && r<=5084) return R29.Name(r-5084);
  if (r>=5085 && r<=5085) return R30.Name(r-5085);
  if (r>=5086 && r<=5086) return R31.Name(r-5086);
  if (r>=5087 && r<=5087) return R32.Name(r-5087);
  if (r>=5088 && r<=5088) return R33.Name(r-5088);
  if (r>=5089 && r<=5089) return R34.Name(r-5089);
  if (r>=5090 && r<=5090) return R35.Name(r-5090);
  if (r>=5091 && r<=5091) return R36.Name(r-5091);
  if (r>=5092 && r<=5092) return R37.Name(r-5092);
  if (r>=5093 && r<=5093) return R38.Name(r-5093);
  if (r>=5094 && r<=5094) return R39.Name(r-5094);
  if (r>=5095 && r<=5095) return R40.Name(r-5095);
  if (r>=5096 && r<=5096) return R41.Name(r-5096);
  if (r>=5097 && r<=5097) return R42.Name(r-5097);
  if (r>=5098 && r<=5098) return R43.Name(r-5098);
  return NULL;
}
};
const unsigned numrules = 5099;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 5099


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
mu_roleHost[1].mu_Gateway = mu_GatewayIP;
mu_roleHost[1].mu_Na2 = mu_Na2;
mu_roleHost[1].mu_st = mu_Host1;
mu_roleHost[1].mu_commit = mu_false;
mu_roleHost[1].mu_Na1 = mu_anyNonce;
mu_roleHost[1].mu_Na3 = mu_anyNonce;
mu_roleHost[1].mu_Na4 = mu_anyNonce;
mu_roleHost[1].mu_Server = mu_anyAgent;
mu_roleGateway[1].mu_Host = mu_HostID;
mu_roleGateway[1].mu_Server = mu_ServerIP;
mu_roleGateway[1].mu_Gateway = mu_GatewayIP;
mu_roleGateway[1].mu_Na1 = mu_Na1;
mu_roleGateway[1].mu_st = mu_Gateway1;
mu_roleGateway[1].mu_commit = mu_false;
mu_roleGateway[1].mu_Na2 = mu_anyNonce;
mu_roleGateway[1].mu_Na3 = mu_anyNonce;
mu_roleGateway[1].mu_Na4 = mu_anyNonce;
mu_roleServer[1].mu_Host = mu_HostID;
mu_roleServer[1].mu_Gateway = mu_GatewayIP;
mu_roleServer[1].mu_Server = mu_ServerIP;
mu_roleServer[1].mu_Na3 = mu_Na3;
mu_roleServer[1].mu_Na4 = mu_Na4;
mu_roleServer[1].mu_st = mu_Server1;
mu_roleServer[1].mu_commit = mu_false;
mu_roleServer[1].mu_Na2 = mu_anyNonce;
mu_roleServer[1].mu_Na1 = mu_anyNonce;
{
for(int mu_i = 1; mu_i <= 10; mu_i++) {
mu_ch[mu_i].mu_empty = mu_true;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_msgs[mu_i].mu_msgType = mu_null;
mu_msgs[mu_i].mu_length = 0;
};
};
mu_msg_end = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_pat1Set.mu_content[mu_i] = 0;
mu_sPat1Set.mu_content[mu_i] = 0;
mu_pat2Set.mu_content[mu_i] = 0;
mu_sPat2Set.mu_content[mu_i] = 0;
mu_pat3Set.mu_content[mu_i] = 0;
mu_sPat3Set.mu_content[mu_i] = 0;
mu_pat4Set.mu_content[mu_i] = 0;
mu_sPat4Set.mu_content[mu_i] = 0;
mu_pat5Set.mu_content[mu_i] = 0;
mu_sPat5Set.mu_content[mu_i] = 0;
mu_pat6Set.mu_content[mu_i] = 0;
mu_sPat6Set.mu_content[mu_i] = 0;
mu_pat7Set.mu_content[mu_i] = 0;
mu_sPat7Set.mu_content[mu_i] = 0;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
mu_pat1Set.mu_length = 0;
mu_sPat1Set.mu_length = 0;
mu_pat2Set.mu_length = 0;
mu_sPat2Set.mu_length = 0;
mu_pat3Set.mu_length = 0;
mu_sPat3Set.mu_length = 0;
mu_pat4Set.mu_length = 0;
mu_sPat4Set.mu_length = 0;
mu_pat5Set.mu_length = 0;
mu_sPat5Set.mu_length = 0;
mu_pat6Set.mu_length = 0;
mu_sPat6Set.mu_length = 0;
mu_pat7Set.mu_length = 0;
mu_sPat7Set.mu_length = 0;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleHost[mu_i].mu_Host;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
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
mu_msgs[mu_msg_end].mu_length = 1;
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
mu_msgs[mu_msg_end].mu_length = 1;
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
mu_constructSpat3 ( mu_roleHost[mu_i].mu_Na1, mu_roleHost[mu_i].mu_Gateway, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_Na2, mu_roleGateway[mu_i].mu_Host, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleServer[mu_i].mu_Host, mu_roleServer[mu_i].mu_Na2, mu_roleServer[mu_i].mu_Host, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleGateway[mu_i].mu_Server, mu_roleGateway[mu_i].mu_Na3, mu_roleGateway[mu_i].mu_Server, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleHost[mu_i].mu_Server, mu_roleHost[mu_i].mu_Na3, mu_roleHost[mu_i].mu_Server, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_Na3, mu_roleGateway[mu_i].mu_Host, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleServer[mu_i].mu_Host, mu_roleServer[mu_i].mu_Na3, mu_roleServer[mu_i].mu_Host, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleGateway[mu_i].mu_Server, mu_roleGateway[mu_i].mu_Na4, mu_roleGateway[mu_i].mu_Server, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat7 ( mu_roleHost[mu_i].mu_Server, mu_roleHost[mu_i].mu_Na4, mu_roleHost[mu_i].mu_Server, mu_gnum );
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
int mu__invariant_302() // Invariant "auth3"
{
bool mu__quant303; 
mu__quant303 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr304;
  if (!((mu_roleServer[mu_i].mu_commit) == (mu_true))) mu__boolexpr304 = TRUE ;
  else {
bool mu__quant305; 
mu__quant305 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleHost[mu_i].mu_Na3) == (mu_roleServer[mu_j].mu_Na3)) )
  { mu__quant305 = TRUE; break; }
};
};
  mu__boolexpr304 = (mu__quant305) ; 
}
if ( !(mu__boolexpr304) )
  { mu__quant303 = FALSE; break; }
};
};
return mu__quant303;
};

bool mu__condition_306() // Condition for Rule "auth3"
{
  return mu__invariant_302( );
}

/**** end rule declaration ****/

int mu__invariant_307() // Invariant "auth2"
{
bool mu__quant308; 
mu__quant308 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr309;
  if (!((mu_roleGateway[mu_i].mu_commit) == (mu_true))) mu__boolexpr309 = TRUE ;
  else {
bool mu__quant310; 
mu__quant310 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleHost[mu_i].mu_Na2) == (mu_roleGateway[mu_j].mu_Na2)) )
  { mu__quant310 = TRUE; break; }
};
};
  mu__boolexpr309 = (mu__quant310) ; 
}
if ( !(mu__boolexpr309) )
  { mu__quant308 = FALSE; break; }
};
};
return mu__quant308;
};

bool mu__condition_311() // Condition for Rule "auth2"
{
  return mu__invariant_307( );
}

/**** end rule declaration ****/

int mu__invariant_312() // Invariant "auth1"
{
bool mu__quant313; 
mu__quant313 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr314;
  if (!((mu_roleGateway[mu_i].mu_commit) == (mu_true))) mu__boolexpr314 = TRUE ;
  else {
bool mu__quant315; 
mu__quant315 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleHost[mu_i].mu_Na1) == (mu_roleGateway[mu_j].mu_Na1)) )
  { mu__quant315 = TRUE; break; }
};
};
  mu__boolexpr314 = (mu__quant315) ; 
}
if ( !(mu__boolexpr314) )
  { mu__quant313 = FALSE; break; }
};
};
return mu__quant313;
};

bool mu__condition_316() // Condition for Rule "auth1"
{
  return mu__invariant_312( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"auth1", &mu__condition_316, NULL, },
{"auth2", &mu__condition_311, NULL, },
{"auth3", &mu__condition_306, NULL, },
};
const unsigned short numinvariants = 3;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
emit:NoScalarset
Spy_known:NoScalarset
sPat7Set:NoScalarset
sPat6Set:NoScalarset
sPat5Set:NoScalarset
sPat4Set:NoScalarset
sPat3Set:NoScalarset
sPat2Set:NoScalarset
sPat1Set:NoScalarset
msg_end:NoScalarset
ch:NoScalarset
roleHost:NoScalarset
roleGateway:NoScalarset
roleServer:NoScalarset
msgs:NoScalarset
pat1Set:NoScalarset
pat2Set:NoScalarset
pat3Set:NoScalarset
pat4Set:NoScalarset
pat5Set:NoScalarset
pat6Set:NoScalarset
pat7Set:NoScalarset
gnum:NoScalarset
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
        mu_emit.MultisetSort();
        mu_Spy_known.MultisetSort();
        mu_sPat7Set.MultisetSort();
        mu_sPat6Set.MultisetSort();
        mu_sPat5Set.MultisetSort();
        mu_sPat4Set.MultisetSort();
        mu_sPat3Set.MultisetSort();
        mu_sPat2Set.MultisetSort();
        mu_sPat1Set.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_ch.MultisetSort();
        mu_roleHost.MultisetSort();
        mu_roleGateway.MultisetSort();
        mu_roleServer.MultisetSort();
        mu_msgs.MultisetSort();
        mu_pat1Set.MultisetSort();
        mu_pat2Set.MultisetSort();
        mu_pat3Set.MultisetSort();
        mu_pat4Set.MultisetSort();
        mu_pat5Set.MultisetSort();
        mu_pat6Set.MultisetSort();
        mu_pat7Set.MultisetSort();
        mu_gnum.MultisetSort();
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
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<16; j++)
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
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<101; j++)
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
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<10; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<101; j++)
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
  for (j=0; j<101; j++)
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
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
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
              
              mu_emit.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_sPat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat7Set.MultisetSort();
              mu_sPat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat6Set.MultisetSort();
              mu_sPat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat5Set.MultisetSort();
              mu_sPat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat4Set.MultisetSort();
              mu_sPat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat3Set.MultisetSort();
              mu_sPat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat2Set.MultisetSort();
              mu_sPat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat1Set.MultisetSort();
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
              mu_pat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_gnum.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_gnum.MultisetSort();
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

          mu_emit.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_emit.MultisetSort();
          mu_Spy_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Spy_known.MultisetSort();
          mu_sPat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat7Set.MultisetSort();
          mu_sPat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat6Set.MultisetSort();
          mu_sPat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat5Set.MultisetSort();
          mu_sPat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat4Set.MultisetSort();
          mu_sPat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat3Set.MultisetSort();
          mu_sPat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat2Set.MultisetSort();
          mu_sPat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat1Set.MultisetSort();
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
          mu_pat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat2Set.MultisetSort();
          mu_pat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat3Set.MultisetSort();
          mu_pat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat4Set.MultisetSort();
          mu_pat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat5Set.MultisetSort();
          mu_pat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat6Set.MultisetSort();
          mu_pat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat7Set.MultisetSort();
          mu_gnum.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_gnum.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_emit.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_sPat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat7Set.MultisetSort();
              mu_sPat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat6Set.MultisetSort();
              mu_sPat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat5Set.MultisetSort();
              mu_sPat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat4Set.MultisetSort();
              mu_sPat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat3Set.MultisetSort();
              mu_sPat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat2Set.MultisetSort();
              mu_sPat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat1Set.MultisetSort();
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
              mu_pat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_gnum.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_gnum.MultisetSort();
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
      mu_emit.MultisetSort();
      mu_Spy_known.MultisetSort();
      mu_sPat7Set.MultisetSort();
      mu_sPat6Set.MultisetSort();
      mu_sPat5Set.MultisetSort();
      mu_sPat4Set.MultisetSort();
      mu_sPat3Set.MultisetSort();
      mu_sPat2Set.MultisetSort();
      mu_sPat1Set.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_ch.MultisetSort();
      mu_roleHost.MultisetSort();
      mu_roleGateway.MultisetSort();
      mu_roleServer.MultisetSort();
      mu_msgs.MultisetSort();
      mu_pat1Set.MultisetSort();
      mu_pat2Set.MultisetSort();
      mu_pat3Set.MultisetSort();
      mu_pat4Set.MultisetSort();
      mu_pat5Set.MultisetSort();
      mu_pat6Set.MultisetSort();
      mu_pat7Set.MultisetSort();
      mu_gnum.MultisetSort();
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
        mu_emit.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_emit.MultisetSort();
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
        mu_sPat7Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat7Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat6Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat6Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat5Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat5Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat4Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat4Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat3Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat3Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat2Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat2Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat1Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat1Set.MultisetSort();
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
        mu_gnum.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_gnum.MultisetSort();
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
