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
#define BITS_IN_WORLD 1634280
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_indexType: public mu__long
{
 public:
  inline int operator=(int val) { return mu__long::operator=(val); };
  inline int operator=(const mu_1_indexType& val) { return mu__long::operator=((int) val); };
  mu_1_indexType (const char *name, int os): mu__long(0, 1000, 10, name, os) {};
  mu_1_indexType (void): mu__long(0, 1000, 10) {};
  mu_1_indexType (int val): mu__long(0, 1000, 10, "Parameter or function result.", 0)
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

  mu_1_NonceType (const char *name, int os): mu__byte(6, 9, 3, name, os) {};
  mu_1_NonceType (void): mu__byte(6, 9, 3) {};
  mu_1_NonceType (int val): mu__byte(6, 9, 3, "Parameter or function result.", 0)
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

const char *mu_1_NonceType::values[] = {"Na","HostIP","secSK","anyNonce",NULL };

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
      return ( s << mu_1_EncryptType::values[ int(val) - 10] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(10, 12, 2, name, os) {};
  mu_1_EncryptType (void): mu__byte(10, 12, 2) {};
  mu_1_EncryptType (int val): mu__byte(10, 12, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -10]; };
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
      cout << name << ":" << values[ value() -10] << '\n';
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
      return ( s << mu_1_HostStatus::values[ int(val) - 13] );
    else return ( s << "Undefined" );
  };

  mu_1_HostStatus (const char *name, int os): mu__byte(13, 16, 3, name, os) {};
  mu_1_HostStatus (void): mu__byte(13, 16, 3) {};
  mu_1_HostStatus (int val): mu__byte(13, 16, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -13]; };
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
      cout << name << ":" << values[ value() -13] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_HostStatus::values[] = {"Host1","Host2","Host3","Host4",NULL };

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

  mu_1_GatewayStatus (const char *name, int os): mu__byte(17, 24, 4, name, os) {};
  mu_1_GatewayStatus (void): mu__byte(17, 24, 4) {};
  mu_1_GatewayStatus (int val): mu__byte(17, 24, 4, "Parameter or function result.", 0)
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

const char *mu_1_GatewayStatus::values[] = {"Gateway1","Gateway2","Gateway3","Gateway4","Gateway5","Gateway6","Gateway7","Gateway8",NULL };

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
      return ( s << mu_1_ServerStatus::values[ int(val) - 25] );
    else return ( s << "Undefined" );
  };

  mu_1_ServerStatus (const char *name, int os): mu__byte(25, 28, 3, name, os) {};
  mu_1_ServerStatus (void): mu__byte(25, 28, 3) {};
  mu_1_ServerStatus (int val): mu__byte(25, 28, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -25]; };
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
      cout << name << ":" << values[ value() -25] << '\n';
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
      return ( s << mu_1_MsgType::values[ int(val) - 29] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(29, 36, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(29, 36, 4) {};
  mu_1_MsgType (int val): mu__byte(29, 36, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -29]; };
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
      cout << name << ":" << values[ value() -29] << '\n';
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 32 + os);
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
  if (name) mu_aencKey.set_self_2(name, ".aencKey", os + 72 ); else mu_aencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_sencMsg.set_self_2(name, ".sencMsg", os + 104 ); else mu_sencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_sencKey.set_self_2(name, ".sencKey", os + 136 ); else mu_sencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart.set_self_2(name, ".concatPart", os + 168 ); else mu_concatPart.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 680 ); else mu_length.set_self_2(NULL, NULL, 0);
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
  if (name) mu_sender.set_self_2(name, ".sender", os + 712 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 720 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 728 ); else mu_empty.set_self_2(NULL, NULL, 0);
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
  mu_1_NonceType mu_r;
  mu_1_NonceType mu_HostIP;
  mu_1_NonceType mu_hostipsk;
  mu_1_AgentType mu_Host;
  mu_1_AgentType mu_Gateway;
  mu_1_AgentType mu_Server;
  mu_1_NonceType mu_locr;
  mu_1_NonceType mu_locHostIP;
  mu_1_NonceType mu_lochostipsk;
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
    w = CompareWeight(a.mu_r, b.mu_r);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HostIP, b.mu_HostIP);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hostipsk, b.mu_hostipsk);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locr, b.mu_locr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locHostIP, b.mu_locHostIP);
    if (w!=0) return w;
    w = CompareWeight(a.mu_lochostipsk, b.mu_lochostipsk);
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
    w = Compare(a.mu_r, b.mu_r);
    if (w!=0) return w;
    w = Compare(a.mu_HostIP, b.mu_HostIP);
    if (w!=0) return w;
    w = Compare(a.mu_hostipsk, b.mu_hostipsk);
    if (w!=0) return w;
    w = Compare(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = Compare(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = Compare(a.mu_locr, b.mu_locr);
    if (w!=0) return w;
    w = Compare(a.mu_locHostIP, b.mu_locHostIP);
    if (w!=0) return w;
    w = Compare(a.mu_lochostipsk, b.mu_lochostipsk);
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
    mu_r.MultisetSort();
    mu_HostIP.MultisetSort();
    mu_hostipsk.MultisetSort();
    mu_Host.MultisetSort();
    mu_Gateway.MultisetSort();
    mu_Server.MultisetSort();
    mu_locr.MultisetSort();
    mu_locHostIP.MultisetSort();
    mu_lochostipsk.MultisetSort();
    mu_locHost.MultisetSort();
    mu_locGateway.MultisetSort();
    mu_locServer.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_r.print_statistic();
    mu_HostIP.print_statistic();
    mu_hostipsk.print_statistic();
    mu_Host.print_statistic();
    mu_Gateway.print_statistic();
    mu_Server.print_statistic();
    mu_locr.print_statistic();
    mu_locHostIP.print_statistic();
    mu_lochostipsk.print_statistic();
    mu_locHost.print_statistic();
    mu_locGateway.print_statistic();
    mu_locServer.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_r.clear();
    mu_HostIP.clear();
    mu_hostipsk.clear();
    mu_Host.clear();
    mu_Gateway.clear();
    mu_Server.clear();
    mu_locr.clear();
    mu_locHostIP.clear();
    mu_lochostipsk.clear();
    mu_locHost.clear();
    mu_locGateway.clear();
    mu_locServer.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_r.undefine();
    mu_HostIP.undefine();
    mu_hostipsk.undefine();
    mu_Host.undefine();
    mu_Gateway.undefine();
    mu_Server.undefine();
    mu_locr.undefine();
    mu_locHostIP.undefine();
    mu_lochostipsk.undefine();
    mu_locHost.undefine();
    mu_locGateway.undefine();
    mu_locServer.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_r.reset();
    mu_HostIP.reset();
    mu_hostipsk.reset();
    mu_Host.reset();
    mu_Gateway.reset();
    mu_Server.reset();
    mu_locr.reset();
    mu_locHostIP.reset();
    mu_lochostipsk.reset();
    mu_locHost.reset();
    mu_locGateway.reset();
    mu_locServer.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_r.print();
    mu_HostIP.print();
    mu_hostipsk.print();
    mu_Host.print();
    mu_Gateway.print();
    mu_Server.print();
    mu_locr.print();
    mu_locHostIP.print();
    mu_lochostipsk.print();
    mu_locHost.print();
    mu_locGateway.print();
    mu_locServer.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_r.print_diff(prevstate);
    mu_HostIP.print_diff(prevstate);
    mu_hostipsk.print_diff(prevstate);
    mu_Host.print_diff(prevstate);
    mu_Gateway.print_diff(prevstate);
    mu_Server.print_diff(prevstate);
    mu_locr.print_diff(prevstate);
    mu_locHostIP.print_diff(prevstate);
    mu_lochostipsk.print_diff(prevstate);
    mu_locHost.print_diff(prevstate);
    mu_locGateway.print_diff(prevstate);
    mu_locServer.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_r.to_state(thestate);
    mu_HostIP.to_state(thestate);
    mu_hostipsk.to_state(thestate);
    mu_Host.to_state(thestate);
    mu_Gateway.to_state(thestate);
    mu_Server.to_state(thestate);
    mu_locr.to_state(thestate);
    mu_locHostIP.to_state(thestate);
    mu_lochostipsk.to_state(thestate);
    mu_locHost.to_state(thestate);
    mu_locGateway.to_state(thestate);
    mu_locServer.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleHost& operator= (const mu_1_RoleHost& from) {
    mu_r.value(from.mu_r.value());
    mu_HostIP.value(from.mu_HostIP.value());
    mu_hostipsk.value(from.mu_hostipsk.value());
    mu_Host.value(from.mu_Host.value());
    mu_Gateway.value(from.mu_Gateway.value());
    mu_Server.value(from.mu_Server.value());
    mu_locr.value(from.mu_locr.value());
    mu_locHostIP.value(from.mu_locHostIP.value());
    mu_lochostipsk.value(from.mu_lochostipsk.value());
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

  if (name) mu_r.set_self_2(name, ".r", os + 0 ); else mu_r.set_self_2(NULL, NULL, 0);
  if (name) mu_HostIP.set_self_2(name, ".HostIP", os + 8 ); else mu_HostIP.set_self_2(NULL, NULL, 0);
  if (name) mu_hostipsk.set_self_2(name, ".hostipsk", os + 16 ); else mu_hostipsk.set_self_2(NULL, NULL, 0);
  if (name) mu_Host.set_self_2(name, ".Host", os + 24 ); else mu_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_Gateway.set_self_2(name, ".Gateway", os + 32 ); else mu_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_Server.set_self_2(name, ".Server", os + 40 ); else mu_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_locr.set_self_2(name, ".locr", os + 48 ); else mu_locr.set_self_2(NULL, NULL, 0);
  if (name) mu_locHostIP.set_self_2(name, ".locHostIP", os + 56 ); else mu_locHostIP.set_self_2(NULL, NULL, 0);
  if (name) mu_lochostipsk.set_self_2(name, ".lochostipsk", os + 64 ); else mu_lochostipsk.set_self_2(NULL, NULL, 0);
  if (name) mu_locHost.set_self_2(name, ".locHost", os + 72 ); else mu_locHost.set_self_2(NULL, NULL, 0);
  if (name) mu_locGateway.set_self_2(name, ".locGateway", os + 80 ); else mu_locGateway.set_self_2(NULL, NULL, 0);
  if (name) mu_locServer.set_self_2(name, ".locServer", os + 88 ); else mu_locServer.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 96 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 104 ); else mu_commit.set_self_2(NULL, NULL, 0);
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
  mu_1_NonceType mu_r;
  mu_1_NonceType mu_HostIP;
  mu_1_NonceType mu_hostipsk;
  mu_1_AgentType mu_Host;
  mu_1_AgentType mu_Gateway;
  mu_1_AgentType mu_Server;
  mu_1_NonceType mu_locr;
  mu_1_NonceType mu_locHostIP;
  mu_1_NonceType mu_lochostipsk;
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
    w = CompareWeight(a.mu_r, b.mu_r);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HostIP, b.mu_HostIP);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hostipsk, b.mu_hostipsk);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locr, b.mu_locr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locHostIP, b.mu_locHostIP);
    if (w!=0) return w;
    w = CompareWeight(a.mu_lochostipsk, b.mu_lochostipsk);
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
    w = Compare(a.mu_r, b.mu_r);
    if (w!=0) return w;
    w = Compare(a.mu_HostIP, b.mu_HostIP);
    if (w!=0) return w;
    w = Compare(a.mu_hostipsk, b.mu_hostipsk);
    if (w!=0) return w;
    w = Compare(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = Compare(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = Compare(a.mu_locr, b.mu_locr);
    if (w!=0) return w;
    w = Compare(a.mu_locHostIP, b.mu_locHostIP);
    if (w!=0) return w;
    w = Compare(a.mu_lochostipsk, b.mu_lochostipsk);
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
    mu_r.MultisetSort();
    mu_HostIP.MultisetSort();
    mu_hostipsk.MultisetSort();
    mu_Host.MultisetSort();
    mu_Gateway.MultisetSort();
    mu_Server.MultisetSort();
    mu_locr.MultisetSort();
    mu_locHostIP.MultisetSort();
    mu_lochostipsk.MultisetSort();
    mu_locHost.MultisetSort();
    mu_locGateway.MultisetSort();
    mu_locServer.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_r.print_statistic();
    mu_HostIP.print_statistic();
    mu_hostipsk.print_statistic();
    mu_Host.print_statistic();
    mu_Gateway.print_statistic();
    mu_Server.print_statistic();
    mu_locr.print_statistic();
    mu_locHostIP.print_statistic();
    mu_lochostipsk.print_statistic();
    mu_locHost.print_statistic();
    mu_locGateway.print_statistic();
    mu_locServer.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_r.clear();
    mu_HostIP.clear();
    mu_hostipsk.clear();
    mu_Host.clear();
    mu_Gateway.clear();
    mu_Server.clear();
    mu_locr.clear();
    mu_locHostIP.clear();
    mu_lochostipsk.clear();
    mu_locHost.clear();
    mu_locGateway.clear();
    mu_locServer.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_r.undefine();
    mu_HostIP.undefine();
    mu_hostipsk.undefine();
    mu_Host.undefine();
    mu_Gateway.undefine();
    mu_Server.undefine();
    mu_locr.undefine();
    mu_locHostIP.undefine();
    mu_lochostipsk.undefine();
    mu_locHost.undefine();
    mu_locGateway.undefine();
    mu_locServer.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_r.reset();
    mu_HostIP.reset();
    mu_hostipsk.reset();
    mu_Host.reset();
    mu_Gateway.reset();
    mu_Server.reset();
    mu_locr.reset();
    mu_locHostIP.reset();
    mu_lochostipsk.reset();
    mu_locHost.reset();
    mu_locGateway.reset();
    mu_locServer.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_r.print();
    mu_HostIP.print();
    mu_hostipsk.print();
    mu_Host.print();
    mu_Gateway.print();
    mu_Server.print();
    mu_locr.print();
    mu_locHostIP.print();
    mu_lochostipsk.print();
    mu_locHost.print();
    mu_locGateway.print();
    mu_locServer.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_r.print_diff(prevstate);
    mu_HostIP.print_diff(prevstate);
    mu_hostipsk.print_diff(prevstate);
    mu_Host.print_diff(prevstate);
    mu_Gateway.print_diff(prevstate);
    mu_Server.print_diff(prevstate);
    mu_locr.print_diff(prevstate);
    mu_locHostIP.print_diff(prevstate);
    mu_lochostipsk.print_diff(prevstate);
    mu_locHost.print_diff(prevstate);
    mu_locGateway.print_diff(prevstate);
    mu_locServer.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_r.to_state(thestate);
    mu_HostIP.to_state(thestate);
    mu_hostipsk.to_state(thestate);
    mu_Host.to_state(thestate);
    mu_Gateway.to_state(thestate);
    mu_Server.to_state(thestate);
    mu_locr.to_state(thestate);
    mu_locHostIP.to_state(thestate);
    mu_lochostipsk.to_state(thestate);
    mu_locHost.to_state(thestate);
    mu_locGateway.to_state(thestate);
    mu_locServer.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleGateway& operator= (const mu_1_RoleGateway& from) {
    mu_r.value(from.mu_r.value());
    mu_HostIP.value(from.mu_HostIP.value());
    mu_hostipsk.value(from.mu_hostipsk.value());
    mu_Host.value(from.mu_Host.value());
    mu_Gateway.value(from.mu_Gateway.value());
    mu_Server.value(from.mu_Server.value());
    mu_locr.value(from.mu_locr.value());
    mu_locHostIP.value(from.mu_locHostIP.value());
    mu_lochostipsk.value(from.mu_lochostipsk.value());
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

  if (name) mu_r.set_self_2(name, ".r", os + 0 ); else mu_r.set_self_2(NULL, NULL, 0);
  if (name) mu_HostIP.set_self_2(name, ".HostIP", os + 8 ); else mu_HostIP.set_self_2(NULL, NULL, 0);
  if (name) mu_hostipsk.set_self_2(name, ".hostipsk", os + 16 ); else mu_hostipsk.set_self_2(NULL, NULL, 0);
  if (name) mu_Host.set_self_2(name, ".Host", os + 24 ); else mu_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_Gateway.set_self_2(name, ".Gateway", os + 32 ); else mu_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_Server.set_self_2(name, ".Server", os + 40 ); else mu_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_locr.set_self_2(name, ".locr", os + 48 ); else mu_locr.set_self_2(NULL, NULL, 0);
  if (name) mu_locHostIP.set_self_2(name, ".locHostIP", os + 56 ); else mu_locHostIP.set_self_2(NULL, NULL, 0);
  if (name) mu_lochostipsk.set_self_2(name, ".lochostipsk", os + 64 ); else mu_lochostipsk.set_self_2(NULL, NULL, 0);
  if (name) mu_locHost.set_self_2(name, ".locHost", os + 72 ); else mu_locHost.set_self_2(NULL, NULL, 0);
  if (name) mu_locGateway.set_self_2(name, ".locGateway", os + 80 ); else mu_locGateway.set_self_2(NULL, NULL, 0);
  if (name) mu_locServer.set_self_2(name, ".locServer", os + 88 ); else mu_locServer.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 96 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 104 ); else mu_commit.set_self_2(NULL, NULL, 0);
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
  mu_1_NonceType mu_r;
  mu_1_NonceType mu_HostIP;
  mu_1_NonceType mu_hostipsk;
  mu_1_AgentType mu_Host;
  mu_1_AgentType mu_Gateway;
  mu_1_AgentType mu_Server;
  mu_1_NonceType mu_locr;
  mu_1_NonceType mu_locHostIP;
  mu_1_NonceType mu_lochostipsk;
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
    w = CompareWeight(a.mu_r, b.mu_r);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HostIP, b.mu_HostIP);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hostipsk, b.mu_hostipsk);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locr, b.mu_locr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locHostIP, b.mu_locHostIP);
    if (w!=0) return w;
    w = CompareWeight(a.mu_lochostipsk, b.mu_lochostipsk);
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
    w = Compare(a.mu_r, b.mu_r);
    if (w!=0) return w;
    w = Compare(a.mu_HostIP, b.mu_HostIP);
    if (w!=0) return w;
    w = Compare(a.mu_hostipsk, b.mu_hostipsk);
    if (w!=0) return w;
    w = Compare(a.mu_Host, b.mu_Host);
    if (w!=0) return w;
    w = Compare(a.mu_Gateway, b.mu_Gateway);
    if (w!=0) return w;
    w = Compare(a.mu_Server, b.mu_Server);
    if (w!=0) return w;
    w = Compare(a.mu_locr, b.mu_locr);
    if (w!=0) return w;
    w = Compare(a.mu_locHostIP, b.mu_locHostIP);
    if (w!=0) return w;
    w = Compare(a.mu_lochostipsk, b.mu_lochostipsk);
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
    mu_r.MultisetSort();
    mu_HostIP.MultisetSort();
    mu_hostipsk.MultisetSort();
    mu_Host.MultisetSort();
    mu_Gateway.MultisetSort();
    mu_Server.MultisetSort();
    mu_locr.MultisetSort();
    mu_locHostIP.MultisetSort();
    mu_lochostipsk.MultisetSort();
    mu_locHost.MultisetSort();
    mu_locGateway.MultisetSort();
    mu_locServer.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_r.print_statistic();
    mu_HostIP.print_statistic();
    mu_hostipsk.print_statistic();
    mu_Host.print_statistic();
    mu_Gateway.print_statistic();
    mu_Server.print_statistic();
    mu_locr.print_statistic();
    mu_locHostIP.print_statistic();
    mu_lochostipsk.print_statistic();
    mu_locHost.print_statistic();
    mu_locGateway.print_statistic();
    mu_locServer.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_r.clear();
    mu_HostIP.clear();
    mu_hostipsk.clear();
    mu_Host.clear();
    mu_Gateway.clear();
    mu_Server.clear();
    mu_locr.clear();
    mu_locHostIP.clear();
    mu_lochostipsk.clear();
    mu_locHost.clear();
    mu_locGateway.clear();
    mu_locServer.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_r.undefine();
    mu_HostIP.undefine();
    mu_hostipsk.undefine();
    mu_Host.undefine();
    mu_Gateway.undefine();
    mu_Server.undefine();
    mu_locr.undefine();
    mu_locHostIP.undefine();
    mu_lochostipsk.undefine();
    mu_locHost.undefine();
    mu_locGateway.undefine();
    mu_locServer.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_r.reset();
    mu_HostIP.reset();
    mu_hostipsk.reset();
    mu_Host.reset();
    mu_Gateway.reset();
    mu_Server.reset();
    mu_locr.reset();
    mu_locHostIP.reset();
    mu_lochostipsk.reset();
    mu_locHost.reset();
    mu_locGateway.reset();
    mu_locServer.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_r.print();
    mu_HostIP.print();
    mu_hostipsk.print();
    mu_Host.print();
    mu_Gateway.print();
    mu_Server.print();
    mu_locr.print();
    mu_locHostIP.print();
    mu_lochostipsk.print();
    mu_locHost.print();
    mu_locGateway.print();
    mu_locServer.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_r.print_diff(prevstate);
    mu_HostIP.print_diff(prevstate);
    mu_hostipsk.print_diff(prevstate);
    mu_Host.print_diff(prevstate);
    mu_Gateway.print_diff(prevstate);
    mu_Server.print_diff(prevstate);
    mu_locr.print_diff(prevstate);
    mu_locHostIP.print_diff(prevstate);
    mu_lochostipsk.print_diff(prevstate);
    mu_locHost.print_diff(prevstate);
    mu_locGateway.print_diff(prevstate);
    mu_locServer.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_r.to_state(thestate);
    mu_HostIP.to_state(thestate);
    mu_hostipsk.to_state(thestate);
    mu_Host.to_state(thestate);
    mu_Gateway.to_state(thestate);
    mu_Server.to_state(thestate);
    mu_locr.to_state(thestate);
    mu_locHostIP.to_state(thestate);
    mu_lochostipsk.to_state(thestate);
    mu_locHost.to_state(thestate);
    mu_locGateway.to_state(thestate);
    mu_locServer.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleServer& operator= (const mu_1_RoleServer& from) {
    mu_r.value(from.mu_r.value());
    mu_HostIP.value(from.mu_HostIP.value());
    mu_hostipsk.value(from.mu_hostipsk.value());
    mu_Host.value(from.mu_Host.value());
    mu_Gateway.value(from.mu_Gateway.value());
    mu_Server.value(from.mu_Server.value());
    mu_locr.value(from.mu_locr.value());
    mu_locHostIP.value(from.mu_locHostIP.value());
    mu_lochostipsk.value(from.mu_lochostipsk.value());
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

  if (name) mu_r.set_self_2(name, ".r", os + 0 ); else mu_r.set_self_2(NULL, NULL, 0);
  if (name) mu_HostIP.set_self_2(name, ".HostIP", os + 8 ); else mu_HostIP.set_self_2(NULL, NULL, 0);
  if (name) mu_hostipsk.set_self_2(name, ".hostipsk", os + 16 ); else mu_hostipsk.set_self_2(NULL, NULL, 0);
  if (name) mu_Host.set_self_2(name, ".Host", os + 24 ); else mu_Host.set_self_2(NULL, NULL, 0);
  if (name) mu_Gateway.set_self_2(name, ".Gateway", os + 32 ); else mu_Gateway.set_self_2(NULL, NULL, 0);
  if (name) mu_Server.set_self_2(name, ".Server", os + 40 ); else mu_Server.set_self_2(NULL, NULL, 0);
  if (name) mu_locr.set_self_2(name, ".locr", os + 48 ); else mu_locr.set_self_2(NULL, NULL, 0);
  if (name) mu_locHostIP.set_self_2(name, ".locHostIP", os + 56 ); else mu_locHostIP.set_self_2(NULL, NULL, 0);
  if (name) mu_lochostipsk.set_self_2(name, ".lochostipsk", os + 64 ); else mu_lochostipsk.set_self_2(NULL, NULL, 0);
  if (name) mu_locHost.set_self_2(name, ".locHost", os + 72 ); else mu_locHost.set_self_2(NULL, NULL, 0);
  if (name) mu_locGateway.set_self_2(name, ".locGateway", os + 80 ); else mu_locGateway.set_self_2(NULL, NULL, 0);
  if (name) mu_locServer.set_self_2(name, ".locServer", os + 88 ); else mu_locServer.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 96 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 104 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleServer::~mu_1_RoleServer()
{
}

/*** end record declaration ***/
mu_1_RoleServer mu_1_RoleServer_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_indexType array[ 1001 ];
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
    if ( ( index >= 0 ) && ( index <= 1000 ) )
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
    for (int i = 0; i < 1001; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
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
    for (int i=0; i<1001; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1001; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1001; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1001; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1001; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1001; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1001; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1001; i++)
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
  for(int i = 0; i < 1001; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 32 + os);
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
  if (name) mu_length.set_self_2(name, ".length", os + 32032 ); else mu_length.set_self_2(NULL, NULL, 0);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 736 + os);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 112 + os);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 112 + os);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 112 + os);
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
  mu_1_Message array[ 1001 ];
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
    if ( ( index >= 0 ) && ( index <= 1000 ) )
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
    for (int i = 0; i < 1001; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
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
    for (int i=0; i<1001; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1001; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1001; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1001; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1001; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1001; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1001; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1001; i++)
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
  for(int i = 0; i < 1001; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 712 + os);
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
  mu_0_boolean array[ 1001 ];
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
    if ( ( index >= 0 ) && ( index <= 1000 ) )
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
    for (int i = 0; i < 1001; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
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
    for (int i=0; i<1001; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1001; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1001; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1001; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1001; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1001; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1001; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1001; i++)
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
  for(int i = 0; i < 1001; i++) {
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
  mu_0_boolean array[ 1001 ];
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
    if ( ( index >= 0 ) && ( index <= 1000 ) )
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
    for (int i = 0; i < 1001; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
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
    for (int i=0; i<1001; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1001; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1001; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1001; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1001; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1001; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1001; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1001; i++)
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
  for(int i = 0; i < 1001; i++) {
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
const int mu_totalFact = 1000;
const int mu_msgLength = 15;
const int mu_chanNum = 10;
const int mu_Intruder = 1;
const int mu_HostID = 2;
const int mu_GatewayIP = 3;
const int mu_ServerIP = 4;
const int mu_anyAgent = 5;
const int mu_Na = 6;
const int mu_HostIP = 7;
const int mu_secSK = 8;
const int mu_anyNonce = 9;
const int mu_PK = 10;
const int mu_SK = 11;
const int mu_Symk = 12;
const int mu_Host1 = 13;
const int mu_Host2 = 14;
const int mu_Host3 = 15;
const int mu_Host4 = 16;
const int mu_Gateway1 = 17;
const int mu_Gateway2 = 18;
const int mu_Gateway3 = 19;
const int mu_Gateway4 = 20;
const int mu_Gateway5 = 21;
const int mu_Gateway6 = 22;
const int mu_Gateway7 = 23;
const int mu_Gateway8 = 24;
const int mu_Server1 = 25;
const int mu_Server2 = 26;
const int mu_Server3 = 27;
const int mu_Server4 = 28;
const int mu_null = 29;
const int mu_agent = 30;
const int mu_nonce = 31;
const int mu_key = 32;
const int mu_aenc = 33;
const int mu_senc = 34;
const int mu_concat = 35;
const int mu_hash = 36;
/*** Variable declaration ***/
mu_1__type_2 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_3 mu_roleHost("roleHost",7360);

/*** Variable declaration ***/
mu_1__type_4 mu_roleGateway("roleGateway",7472);

/*** Variable declaration ***/
mu_1__type_5 mu_roleServer("roleServer",7584);

/*** Variable declaration ***/
mu_1__type_6 mu_msgs("msgs",7696);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",720408);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",720440);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat1Set("sPat1Set",752504);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",784568);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat2Set("sPat2Set",816632);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",848696);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat3Set("sPat3Set",880760);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",912824);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat4Set("sPat4Set",944888);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",976952);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat5Set("sPat5Set",1009016);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",1041080);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat6Set("sPat6Set",1073144);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",1105208);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat7Set("sPat7Set",1137272);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",1169336);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat8Set("sPat8Set",1201400);

/*** Variable declaration ***/
mu_1_msgSet mu_pat9Set("pat9Set",1233464);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat9Set("sPat9Set",1265528);

/*** Variable declaration ***/
mu_1_msgSet mu_pat10Set("pat10Set",1297592);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat10Set("sPat10Set",1329656);

/*** Variable declaration ***/
mu_1_msgSet mu_pat11Set("pat11Set",1361720);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat11Set("sPat11Set",1393784);

/*** Variable declaration ***/
mu_1_msgSet mu_pat12Set("pat12Set",1425848);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat12Set("sPat12Set",1457912);

/*** Variable declaration ***/
mu_1_msgSet mu_pat13Set("pat13Set",1489976);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat13Set("sPat13Set",1522040);

/*** Variable declaration ***/
mu_1_msgSet mu_pat14Set("pat14Set",1554104);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat14Set("sPat14Set",1586168);

/*** Variable declaration ***/
mu_1__type_7 mu_Spy_known("Spy_known",1618232);

/*** Variable declaration ***/
mu_1__type_8 mu_emit("emit",1626240);

/*** Variable declaration ***/
mu_1_indexType mu_gnum("gnum",1634248);

void mu_get_msgNo(mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",64);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr9;
bool mu__boolexpr10;
bool mu__boolexpr11;
bool mu__boolexpr12;
bool mu__boolexpr13;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr13) mu__boolexpr12 = TRUE ;
  else {
bool mu__boolexpr14;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr12 = (mu__boolexpr14) ; 
}
  if (mu__boolexpr12) mu__boolexpr11 = TRUE ;
  else {
bool mu__boolexpr15;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr15 = FALSE ;
  else {
bool mu__boolexpr16;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr15 = (mu__boolexpr16) ; 
}
  mu__boolexpr11 = (mu__boolexpr15) ; 
}
  if (mu__boolexpr11) mu__boolexpr10 = TRUE ;
  else {
bool mu__boolexpr17;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr17 = FALSE ;
  else {
bool mu__boolexpr18;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr17 = (mu__boolexpr18) ; 
}
  mu__boolexpr10 = (mu__boolexpr17) ; 
}
  if (mu__boolexpr10) mu__boolexpr9 = TRUE ;
  else {
bool mu__boolexpr19;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr19 = FALSE ;
  else {
bool mu__boolexpr20;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr19 = (mu__boolexpr20) ; 
}
  mu__boolexpr9 = (mu__boolexpr19) ; 
}
if ( mu__boolexpr9 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr21;
  if (!((mu_msg.mu_msgType) == (mu_concat))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_msg.mu_length) == (mu_msgs[mu_i].mu_length)) ; 
}
if ( mu__boolexpr21 )
{
mu_j = mu_msg.mu_length;
mu_flag = mu_true;
{
  bool mu__while_expr_23;  mu__while_expr_23 = (mu_j) > (0);
int mu__counter_22 = 0;
while (mu__while_expr_23) {
if ( ++mu__counter_22 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msg.mu_concatPart[mu_j]) != (mu_msgs[mu_i].mu_concatPart[mu_j]) )
{
mu_flag = mu_false;
}
mu_j = (mu_j) - (1);
};
mu__while_expr_23 = (mu_j) > (0);
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
  bool mu__while_expr_25;  mu__while_expr_25 = (mu_i) < (mu_msg.mu_length);
int mu__counter_24 = 0;
while (mu__while_expr_25) {
if ( ++mu__counter_24 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ",";
mu_i = (mu_i) + (1);
};
mu__while_expr_25 = (mu_i) < (mu_msg.mu_length);
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

void mu_lookAddPat1(const mu_1_AgentType& mu_Host, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_Host) )
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
if (mu_Host.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_Host;
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

void mu_constructSpat1(const mu_1_AgentType& mu_Host, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_27;  mu__while_expr_27 = (mu_i) <= (mu_msg_end);
int mu__counter_26 = 0;
while (mu__while_expr_27) {
if ( ++mu__counter_26 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_Host) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_27 = (mu_i) <= (mu_msg_end);
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
if (mu_Host.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_Host;
mu_msgs[mu_index].mu_length = 1;
}
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat1\n";
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

void mu_lookAddPat2(const mu_1_AgentType& mu_Host, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",712);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",744);

mu_index = 0;
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr28;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr28 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1) )
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

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
if ( mu_flagPart1 )
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

void mu_constructSpat2(const mu_1_AgentType& mu_Host, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

mu_index = 0;
mu_constructSpat1 ( mu_Host, mu_i1 );
mu_i = 1;
{
  bool mu__while_expr_30;  mu__while_expr_30 = (mu_i) <= (mu_msg_end);
int mu__counter_29 = 0;
while (mu__while_expr_30) {
if ( ++mu__counter_29 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr31;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr31 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_30 = (mu_i) <= (mu_msg_end);
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
mu_msgs[mu_index].mu_length = 1;
}
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat2\n";
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

void mu_lookAddPat3(const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr32;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK))) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_HostSk)) ; 
}
if ( mu__boolexpr32 )
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

void mu_isPat3(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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

void mu_constructSpat3(const mu_1_AgentType& mu_HostSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_34;  mu__while_expr_34 = (mu_i) <= (mu_msg_end);
int mu__counter_33 = 0;
while (mu__while_expr_34) {
if ( ++mu__counter_33 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr35;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK)) ; 
}
if ( mu__boolexpr35 )
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
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_SK;
if (mu_HostSk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_HostSk;
mu_msgs[mu_index].mu_length = 1;
}
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat3\n";
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

void mu_lookAddPat4(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",712);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1424);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1456);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1488);

mu_index = 0;
mu_lookAddPat2 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_HostSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr36;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr36 )
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
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr37;
  if (!(mu_flagPart1)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = (mu_flagPart2) ; 
}
if ( mu__boolexpr37 )
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

void mu_constructSpat4(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_HostSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",96);

mu_index = 0;
mu_constructSpat2 ( mu_Host, mu_i1 );
mu_constructSpat3 ( mu_HostSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_39;  mu__while_expr_39 = (mu_i) <= (mu_msg_end);
int mu__counter_38 = 0;
while (mu__while_expr_39) {
if ( ++mu__counter_38 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr40;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr40 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_39 = (mu_i) <= (mu_msg_end);
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
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat4\n";
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

void mu_lookAddPat5(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",712);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1424);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1456);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1488);

mu_index = 0;
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_Host, mu_HostSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr41;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr41 )
{
bool mu__boolexpr42;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr42 )
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

void mu_isPat5(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat4 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr43;
  if (!(mu_flagPart1)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_flagPart2) ; 
}
if ( mu__boolexpr43 )
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

void mu_constructSpat5(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_HostSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",96);

mu_index = 0;
mu_constructSpat1 ( mu_Host, mu_i1 );
mu_constructSpat4 ( mu_Host, mu_HostSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_45;  mu__while_expr_45 = (mu_i) <= (mu_msg_end);
int mu__counter_44 = 0;
while (mu__while_expr_45) {
if ( ++mu__counter_44 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr46;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr46 )
{
bool mu__boolexpr47;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr47 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_45 = (mu_i) <= (mu_msg_end);
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
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat5\n";
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

void mu_lookAddPat6(const mu_1_NonceType& mu_r, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_r) )
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
if (mu_r.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_r;
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

void mu_constructSpat6(const mu_1_NonceType& mu_r, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_49;  mu__while_expr_49 = (mu_i) <= (mu_msg_end);
int mu__counter_48 = 0;
while (mu__while_expr_49) {
if ( ++mu__counter_48 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_r) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_49 = (mu_i) <= (mu_msg_end);
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
if (mu_r.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_r;
mu_msgs[mu_index].mu_length = 1;
}
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat6\n";
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

void mu_lookAddPat7(const mu_1_NonceType& mu_r, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",712);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",744);

mu_index = 0;
mu_lookAddPat6 ( mu_r, mu_msg1, mu_i1 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr50;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr50 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1) )
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
mu_msgs[mu_index].mu_length = 1;
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

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
if ( mu_flagPart1 )
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

void mu_constructSpat7(const mu_1_NonceType& mu_r, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

mu_index = 0;
mu_constructSpat6 ( mu_r, mu_i1 );
mu_i = 1;
{
  bool mu__while_expr_52;  mu__while_expr_52 = (mu_i) <= (mu_msg_end);
int mu__counter_51 = 0;
while (mu__while_expr_52) {
if ( ++mu__counter_51 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr53;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr53 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_52 = (mu_i) <= (mu_msg_end);
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
mu_msgs[mu_index].mu_length = 1;
}
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat7\n";
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

void mu_lookAddPat8(const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",712);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1424);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1456);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1488);

mu_index = 0;
mu_lookAddPat7 ( mu_r, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_ServerSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr54;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr54 )
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

void mu_isPat8(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat7 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr55;
  if (!(mu_flagPart1)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (mu_flagPart2) ; 
}
if ( mu__boolexpr55 )
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

void mu_constructSpat8(const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_ServerSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",96);

mu_index = 0;
mu_constructSpat7 ( mu_r, mu_i1 );
mu_constructSpat3 ( mu_ServerSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_57;  mu__while_expr_57 = (mu_i) <= (mu_msg_end);
int mu__counter_56 = 0;
while (mu__while_expr_57) {
if ( ++mu__counter_56 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr58;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr58 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_57 = (mu_i) <= (mu_msg_end);
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
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat8\n";
mu_sPat8Set.mu_length = (mu_sPat8Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat8Set.mu_content[mu_sPat8Set.mu_length].undefine();
else
  mu_sPat8Set.mu_content[mu_sPat8Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat9(const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",712);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1424);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1456);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1488);

mu_index = 0;
mu_lookAddPat6 ( mu_r, mu_msg1, mu_i1 );
mu_lookAddPat8 ( mu_r, mu_ServerSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr59;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr59 )
{
bool mu__boolexpr60;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr60 )
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

void mu_isPat9(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat8 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr61;
  if (!(mu_flagPart1)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (mu_flagPart2) ; 
}
if ( mu__boolexpr61 )
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

void mu_constructSpat9(const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_ServerSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",96);

mu_index = 0;
mu_constructSpat6 ( mu_r, mu_i1 );
mu_constructSpat8 ( mu_r, mu_ServerSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_63;  mu__while_expr_63 = (mu_i) <= (mu_msg_end);
int mu__counter_62 = 0;
while (mu__while_expr_63) {
if ( ++mu__counter_62 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr64;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr64 )
{
bool mu__boolexpr65;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr65 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_63 = (mu_i) <= (mu_msg_end);
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
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat9\n";
mu_sPat9Set.mu_length = (mu_sPat9Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat9Set.mu_content[mu_sPat9Set.mu_length].undefine();
else
  mu_sPat9Set.mu_content[mu_sPat9Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat10(const mu_1_AgentType& mu_HostPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr66;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_HostPk)) ; 
}
if ( mu__boolexpr66 )
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
mu_msgs[mu_index].mu_k.mu_encType = mu_PK;
if (mu_HostPk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_HostPk;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat10(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_key) )
{
if ( (mu_msg.mu_k.mu_encType) == (mu_PK) )
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

void mu_constructSpat10(const mu_1_AgentType& mu_HostPk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_68;  mu__while_expr_68 = (mu_i) <= (mu_msg_end);
int mu__counter_67 = 0;
while (mu__while_expr_68) {
if ( ++mu__counter_67 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr69;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr69 )
{
if ( (mu_msgs[mu_i].mu_k.mu_ag) == (mu_HostPk) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_68 = (mu_i) <= (mu_msg_end);
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
mu_msgs[mu_index].mu_k.mu_encType = mu_PK;
if (mu_HostPk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_HostPk;
mu_msgs[mu_index].mu_length = 1;
}
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat10\n";
mu_sPat10Set.mu_length = (mu_sPat10Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat10Set.mu_content[mu_sPat10Set.mu_length].undefine();
else
  mu_sPat10Set.mu_content[mu_sPat10Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat11(const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",712);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1424);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1456);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1488);

mu_index = 0;
mu_lookAddPat6 ( mu_hostipsk, mu_msg1, mu_i1 );
mu_lookAddPat10 ( mu_HostPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr70;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr70 )
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

void mu_isPat11(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat6 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat10 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr71;
  if (!(mu_flagPart1)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_flagPart2) ; 
}
if ( mu__boolexpr71 )
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

void mu_constructSpat11(const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",96);

mu_index = 0;
mu_constructSpat6 ( mu_hostipsk, mu_i1 );
mu_constructSpat10 ( mu_HostPk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_73;  mu__while_expr_73 = (mu_i) <= (mu_msg_end);
int mu__counter_72 = 0;
while (mu__while_expr_73) {
if ( ++mu__counter_72 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr74;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr74 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_73 = (mu_i) <= (mu_msg_end);
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
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat11\n";
mu_sPat11Set.mu_length = (mu_sPat11Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat11Set.mu_content[mu_sPat11Set.mu_length].undefine();
else
  mu_sPat11Set.mu_content[mu_sPat11Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat12(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",712);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1424);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1456);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1488);

mu_index = 0;
mu_lookAddPat6 ( mu_HostIP, mu_msg1, mu_i1 );
mu_lookAddPat11 ( mu_hostipsk, mu_HostPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr75;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr75 )
{
bool mu__boolexpr76;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
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

void mu_isPat12(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat11 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr77;
  if (!(mu_flagPart1)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_flagPart2) ; 
}
if ( mu__boolexpr77 )
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

void mu_constructSpat12(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",96);

mu_index = 0;
mu_constructSpat6 ( mu_HostIP, mu_i1 );
mu_constructSpat11 ( mu_hostipsk, mu_HostPk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_79;  mu__while_expr_79 = (mu_i) <= (mu_msg_end);
int mu__counter_78 = 0;
while (mu__while_expr_79) {
if ( ++mu__counter_78 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr80;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr80 )
{
bool mu__boolexpr81;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr81 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_79 = (mu_i) <= (mu_msg_end);
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
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat12\n";
mu_sPat12Set.mu_length = (mu_sPat12Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat12Set.mu_content[mu_sPat12Set.mu_length].undefine();
else
  mu_sPat12Set.mu_content[mu_sPat12Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat13(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",712);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1424);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1456);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1488);

mu_index = 0;
mu_lookAddPat12 ( mu_HostIP, mu_hostipsk, mu_HostPk, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_ServerSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr82;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr82 )
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

void mu_isPat13(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat12 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr83;
  if (!(mu_flagPart1)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_flagPart2) ; 
}
if ( mu__boolexpr83 )
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

void mu_constructSpat13(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_ServerSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",96);

mu_index = 0;
mu_constructSpat12 ( mu_HostIP, mu_hostipsk, mu_HostPk, mu_i1 );
mu_constructSpat3 ( mu_ServerSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_85;  mu__while_expr_85 = (mu_i) <= (mu_msg_end);
int mu__counter_84 = 0;
while (mu__while_expr_85) {
if ( ++mu__counter_84 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr86;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr86 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_85 = (mu_i) <= (mu_msg_end);
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
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat13\n";
mu_sPat13Set.mu_length = (mu_sPat13Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat13Set.mu_content[mu_sPat13Set.mu_length].undefine();
else
  mu_sPat13Set.mu_content[mu_sPat13Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat14(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",712);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",1424);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",2136);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",2168);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",2200);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",2232);

mu_index = 0;
mu_lookAddPat6 ( mu_HostIP, mu_msg1, mu_i1 );
mu_lookAddPat11 ( mu_hostipsk, mu_HostPk, mu_msg2, mu_i2 );
mu_lookAddPat13 ( mu_HostIP, mu_hostipsk, mu_HostPk, mu_ServerSk, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr87;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr87 )
{
bool mu__boolexpr88;
bool mu__boolexpr89;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr88 )
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

void mu_isPat14(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat11 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat13 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr90;
bool mu__boolexpr91;
  if (!(mu_flagPart1)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_flagPart3) ; 
}
if ( mu__boolexpr90 )
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

void mu_constructSpat14(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_ServerSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",64);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",96);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",128);

mu_index = 0;
mu_constructSpat6 ( mu_HostIP, mu_i1 );
mu_constructSpat11 ( mu_hostipsk, mu_HostPk, mu_i2 );
mu_constructSpat13 ( mu_HostIP, mu_hostipsk, mu_HostPk, mu_ServerSk, mu_i3 );
mu_i = 1;
{
  bool mu__while_expr_93;  mu__while_expr_93 = (mu_i) <= (mu_msg_end);
int mu__counter_92 = 0;
while (mu__while_expr_93) {
if ( ++mu__counter_92 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr94;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr94 )
{
bool mu__boolexpr95;
bool mu__boolexpr96;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr95 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_93 = (mu_i) <= (mu_msg_end);
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
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat14\n";
mu_sPat14Set.mu_length = (mu_sPat14Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat14Set.mu_content[mu_sPat14Set.mu_length].undefine();
else
  mu_sPat14Set.mu_content[mu_sPat14Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_cons1(const mu_1_AgentType& mu_Host, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_Host, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat1\n";
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_AgentType& mu_Host, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_Host, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat2\n";
};
/*** end procedure declaration ***/

void mu_destruct2(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",712);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Host = mu_msgNum1.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_HostSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat3\n";
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_Host, mu_HostSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat4\n";
};
/*** end procedure declaration ***/

void mu_destruct4(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_AgentType& mu_HostSk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",728);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_HostSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_Host = mu_msgNum1.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_Host, mu_HostSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat5\n";
};
/*** end procedure declaration ***/

void mu_destruct5(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_AgentType& mu_HostSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",712);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1424);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Host = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_k = mu_msgs[mu_msgNum2.mu_aencKey].mu_k;
mu_HostSk = mu_k.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_NonceType& mu_r, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_r, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat6\n";
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_NonceType& mu_r, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_r, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat7\n";
};
/*** end procedure declaration ***/

void mu_destruct7(mu_1_Message& mu_msg, mu_1_NonceType& mu_r)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",712);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_r = mu_msgNum1.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons8(const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat8 ( mu_r, mu_ServerSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat8\n";
};
/*** end procedure declaration ***/

void mu_destruct8(mu_1_Message& mu_msg, mu_1_NonceType& mu_r, mu_1_AgentType& mu_ServerSk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",728);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_ServerSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_r = mu_msgNum1.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons9(const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat9 ( mu_r, mu_ServerSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat9\n";
};
/*** end procedure declaration ***/

void mu_destruct9(mu_1_Message& mu_msg, mu_1_NonceType& mu_r, mu_1_AgentType& mu_ServerSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",712);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1424);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_r = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_k = mu_msgs[mu_msgNum2.mu_aencKey].mu_k;
mu_ServerSk = mu_k.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons10(const mu_1_AgentType& mu_HostPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat10 ( mu_HostPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat10\n";
};
/*** end procedure declaration ***/

void mu_cons11(const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat11 ( mu_hostipsk, mu_HostPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat11\n";
};
/*** end procedure declaration ***/

void mu_destruct11(mu_1_Message& mu_msg, mu_1_NonceType& mu_hostipsk, mu_1_AgentType& mu_HostPk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",728);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",1440);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_HostPk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_hostipsk = mu_msg1.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons12(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat12 ( mu_HostIP, mu_hostipsk, mu_HostPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat12\n";
};
/*** end procedure declaration ***/

void mu_destruct12(mu_1_Message& mu_msg, mu_1_NonceType& mu_HostIP, mu_1_NonceType& mu_hostipsk, mu_1_AgentType& mu_HostPk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",712);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1424);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_HostIP = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_k = mu_msgs[mu_msgNum2.mu_aencKey].mu_k;
mu_HostPk = mu_k.mu_ag;
mu_hostipsk = mu_msgs[mu_msgNum2.mu_aencMsg].mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons13(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat13 ( mu_HostIP, mu_hostipsk, mu_HostPk, mu_ServerSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat13\n";
};
/*** end procedure declaration ***/

void mu_destruct13(mu_1_Message& mu_msg, mu_1_NonceType& mu_HostIP, mu_1_NonceType& mu_hostipsk, mu_1_AgentType& mu_HostPk, mu_1_AgentType& mu_ServerSk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",728);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",1440);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_ServerSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_HostIP = mu_msgNum1.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons14(const mu_1_NonceType& mu_HostIP, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat14 ( mu_HostIP, mu_hostipsk, mu_HostPk, mu_ServerSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat14\n";
};
/*** end procedure declaration ***/

void mu_destruct14(mu_1_Message& mu_msg, mu_1_NonceType& mu_HostIP, mu_1_NonceType& mu_hostipsk, mu_1_AgentType& mu_HostPk, mu_1_AgentType& mu_ServerSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",712);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",1424);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",2136);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_HostIP = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_k = mu_msgs[mu_msgNum2.mu_aencKey].mu_k;
mu_HostPk = mu_k.mu_ag;
mu_hostipsk = mu_msgs[mu_msgNum2.mu_aencMsg].mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_k = mu_msgs[mu_msgNum3.mu_aencKey].mu_k;
mu_ServerSk = mu_k.mu_ag;
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
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr97;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_agent))) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
if ( mu__boolexpr97 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr98;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
if ( mu__boolexpr98 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr99;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr99 = FALSE ;
  else {
bool mu__boolexpr100;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr99 = (mu__boolexpr100) ; 
}
if ( mu__boolexpr99 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr101;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_aenc))) mu__boolexpr101 = FALSE ;
  else {
bool mu__boolexpr102;
  if (!((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg)) ; 
}
  mu__boolexpr101 = (mu__boolexpr102) ; 
}
if ( mu__boolexpr101 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr103;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_senc))) mu__boolexpr103 = FALSE ;
  else {
bool mu__boolexpr104;
  if (!((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg)) ; 
}
  mu__boolexpr103 = (mu__boolexpr104) ; 
}
if ( mu__boolexpr103 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr105;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr105 = FALSE ;
  else {
bool mu__boolexpr106;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msg.mu_concatPart[1]))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msg.mu_concatPart[2])) ; 
}
  mu__boolexpr105 = (mu__boolexpr106) ; 
}
if ( mu__boolexpr105 )
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

mu_1_indexType mu_construct2By1(const mu_1_indexType& mu_msgNo1)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr107;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr107 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1) )
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
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct2By1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct4By23(const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr108;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo2))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr108 )
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
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo3;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct4By23 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct5By14(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr109;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr109 )
{
bool mu__boolexpr110;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr110 )
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
	Error.Error("The end of function construct5By14 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By6(const mu_1_indexType& mu_msgNo1)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr111;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr111 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1) )
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
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct7By6 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct8By73(const mu_1_indexType& mu_msgNo7,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr112;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo7))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr112 )
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
if (mu_msgNo7.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo7;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo3;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct8By73 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct9By68(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr113;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr113 )
{
bool mu__boolexpr114;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr114 )
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
	Error.Error("The end of function construct9By68 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct11By610(const mu_1_indexType& mu_msgNo6,const mu_1_indexType& mu_msgNo10)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr115;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo6))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo10)) ; 
}
if ( mu__boolexpr115 )
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
if (mu_msgNo6.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo6;
if (mu_msgNo10.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo10;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct11By610 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct12By611(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr116;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr116 )
{
bool mu__boolexpr117;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr117 )
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
	Error.Error("The end of function construct12By611 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct13By123(const mu_1_indexType& mu_msgNo12,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr118;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo12))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr118 )
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
if (mu_msgNo12.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo12;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo3;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct13By123 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct14By61113(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr119;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr119 )
{
bool mu__boolexpr120;
bool mu__boolexpr121;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr120 )
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
	Error.Error("The end of function construct14By61113 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 15; mu_i++) {
bool mu__boolexpr122;
  if (!((mu_msgNo) != (0))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr122 )
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

bool mu__boolexpr123;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr123 )
{
return mu_matchAgent( mu_m1.mu_ag, mu_m2.mu_ag );
}
else
{
bool mu__boolexpr124;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr124 )
{
return mu_matchNonce( mu_m1.mu_noncePart, mu_m2.mu_noncePart );
}
else
{
bool mu__boolexpr125;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr125 )
{
bool mu__boolexpr126;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr126;
}
else
{
bool mu__boolexpr127;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr127 )
{
bool mu__boolexpr128;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr128;
}
else
{
bool mu__boolexpr129;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr129 )
{
bool mu__boolexpr130;
  if (!(mu_match( mu_msgs[mu_m1.mu_sencMsg], mu_msgs[mu_m2.mu_sencMsg] ))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (mu_match( mu_msgs[mu_m1.mu_sencKey], mu_msgs[mu_m2.mu_sencKey] )) ; 
}
return mu__boolexpr130;
}
else
{
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr131 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr135;
  if (!((mu_i) > (0))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_134;  mu__while_expr_134 = mu__boolexpr135;
int mu__counter_133 = 0;
while (mu__while_expr_134) {
if ( ++mu__counter_133 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr136;
  if (!(mu_concatFlag)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr136;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr137;
  if (!((mu_i) > (0))) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = (mu_concatFlag) ; 
}
mu__while_expr_134 = mu__boolexpr137;
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
  bool mu__while_expr_139;  mu__while_expr_139 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
int mu__counter_138 = 0;
while (mu__while_expr_139) {
if ( ++mu__counter_138 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( mu_match( mu_m1, mu_msgs[mu_sPatnSet.mu_content[mu_i]] ) )
{
mu_flag = mu_true;
}
mu_i = (mu_i) + (1);
};
mu__while_expr_139 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
}
};
return mu_flag;
	Error.Error("The end of function matchPat reached without returning values.");
};
/*** end function declaration ***/

void mu_deconcatPat2(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",32);

if ( !(mu_Spy_known[mu_msg.mu_concatPart[1]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msg.mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
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
/*** end procedure declaration ***/

void mu_enconcatPat2()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",32);

mu_i1 = 1;
{
  bool mu__while_expr_141;  mu__while_expr_141 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_140 = 0;
while (mu__while_expr_141) {
if ( ++mu__counter_140 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr142;
  if (!(mu_matchPat( mu_msgs[mu_construct2By1( mu_pat1Set.mu_content[mu_i1] )], mu_sPat2Set ))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (!(mu_Spy_known[mu_construct2By1( mu_pat1Set.mu_content[mu_i1] )])) ; 
}
if ( mu__boolexpr142 )
{
mu_concatMsgNo = mu_construct2By1( mu_pat1Set.mu_content[mu_i1] );
if ( !(mu_exist( mu_pat2Set, mu_concatMsgNo )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_141 = (mu_i1) <= (mu_pat1Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDeryptionPat4(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",712);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",744);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr143;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr143 = TRUE ;
  else {
  mu__boolexpr143 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr143 )
{
mu_Spy_known[mu_msg.mu_aencMsg] = mu_true;
mu_msgPat2 = mu_msg.mu_aencMsg;
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
}
};
/*** end procedure declaration ***/

void mu_aEncryptionPat4()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_145;  mu__while_expr_145 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_144 = 0;
while (mu__while_expr_145) {
if ( ++mu__counter_144 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_147;  mu__while_expr_147 = (mu_j) <= (mu_pat3Set.mu_length);
int mu__counter_146 = 0;
while (mu__while_expr_147) {
if ( ++mu__counter_146 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr148;
  if (!(mu_matchPat( mu_msgs[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )], mu_sPat4Set ))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (!(mu_Spy_known[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr148 )
{
if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat4Set, mu_encMsgNo )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
}
mu_j = (mu_j) + (1);
};
mu__while_expr_147 = (mu_j) <= (mu_pat3Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_145 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat5(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",64);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",72);

if ( !(mu_Spy_known[mu_msg.mu_concatPart[1]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msg.mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
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
if ( !(mu_Spy_known[mu_msg.mu_concatPart[2]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msg.mu_concatPart[2];
mu_isPat4 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat4Set, mu_msgPat2 )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msgPat2;
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat5()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",32);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",64);

mu_i1 = 1;
{
  bool mu__while_expr_150;  mu__while_expr_150 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_149 = 0;
while (mu__while_expr_150) {
if ( ++mu__counter_149 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_152;  mu__while_expr_152 = (mu_i2) <= (mu_pat4Set.mu_length);
int mu__counter_151 = 0;
while (mu__while_expr_152) {
if ( ++mu__counter_151 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr153;
  if (!(mu_matchPat( mu_msgs[mu_construct5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] )], mu_sPat5Set ))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (!(mu_Spy_known[mu_construct5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] )])) ; 
}
if ( mu__boolexpr153 )
{
mu_concatMsgNo = mu_construct5By14( mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] );
if ( !(mu_exist( mu_pat5Set, mu_concatMsgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_152 = (mu_i2) <= (mu_pat4Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_150 = (mu_i1) <= (mu_pat1Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat7(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",32);

if ( !(mu_Spy_known[mu_msg.mu_concatPart[1]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msg.mu_concatPart[1];
mu_isPat6 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat6Set, mu_msgPat1 )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_msgPat1;
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat7()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",32);

mu_i1 = 1;
{
  bool mu__while_expr_155;  mu__while_expr_155 = (mu_i1) <= (mu_pat6Set.mu_length);
int mu__counter_154 = 0;
while (mu__while_expr_155) {
if ( ++mu__counter_154 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr156;
  if (!(mu_matchPat( mu_msgs[mu_construct7By6( mu_pat6Set.mu_content[mu_i1] )], mu_sPat7Set ))) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (!(mu_Spy_known[mu_construct7By6( mu_pat6Set.mu_content[mu_i1] )])) ; 
}
if ( mu__boolexpr156 )
{
mu_concatMsgNo = mu_construct7By6( mu_pat6Set.mu_content[mu_i1] );
if ( !(mu_exist( mu_pat7Set, mu_concatMsgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_155 = (mu_i1) <= (mu_pat6Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDeryptionPat8(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat7("msgPat7",712);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",744);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr157;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr157 = TRUE ;
  else {
  mu__boolexpr157 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr157 )
{
mu_Spy_known[mu_msg.mu_aencMsg] = mu_true;
mu_msgPat7 = mu_msg.mu_aencMsg;
mu_isPat7 ( mu_msgs[mu_msgPat7], mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgPat7 )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgPat7.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgPat7;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_aEncryptionPat8()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_159;  mu__while_expr_159 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_158 = 0;
while (mu__while_expr_159) {
if ( ++mu__counter_158 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_161;  mu__while_expr_161 = (mu_j) <= (mu_pat3Set.mu_length);
int mu__counter_160 = 0;
while (mu__while_expr_161) {
if ( ++mu__counter_160 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr162;
  if (!(mu_matchPat( mu_msgs[mu_construct8By73( mu_pat7Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )], mu_sPat8Set ))) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = (!(mu_Spy_known[mu_construct8By73( mu_pat7Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr162 )
{
if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct8By73( mu_pat7Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat8Set, mu_encMsgNo )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
}
mu_j = (mu_j) + (1);
};
mu__while_expr_161 = (mu_j) <= (mu_pat3Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_159 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat9(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",64);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",72);

if ( !(mu_Spy_known[mu_msg.mu_concatPart[1]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msg.mu_concatPart[1];
mu_isPat6 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat6Set, mu_msgPat1 )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[2]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msg.mu_concatPart[2];
mu_isPat8 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat8Set, mu_msgPat2 )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_msgPat2;
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat9()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",32);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",64);

mu_i1 = 1;
{
  bool mu__while_expr_164;  mu__while_expr_164 = (mu_i1) <= (mu_pat6Set.mu_length);
int mu__counter_163 = 0;
while (mu__while_expr_164) {
if ( ++mu__counter_163 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_166;  mu__while_expr_166 = (mu_i2) <= (mu_pat8Set.mu_length);
int mu__counter_165 = 0;
while (mu__while_expr_166) {
if ( ++mu__counter_165 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr167;
  if (!(mu_matchPat( mu_msgs[mu_construct9By68( mu_pat6Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2] )], mu_sPat9Set ))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (!(mu_Spy_known[mu_construct9By68( mu_pat6Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2] )])) ; 
}
if ( mu__boolexpr167 )
{
mu_concatMsgNo = mu_construct9By68( mu_pat6Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2] );
if ( !(mu_exist( mu_pat9Set, mu_concatMsgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_166 = (mu_i2) <= (mu_pat8Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_164 = (mu_i1) <= (mu_pat6Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDeryptionPat11(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat6("msgPat6",712);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",744);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr168;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr168 = TRUE ;
  else {
  mu__boolexpr168 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr168 )
{
mu_Spy_known[mu_msg.mu_aencMsg] = mu_true;
mu_msgPat6 = mu_msg.mu_aencMsg;
mu_isPat6 ( mu_msgs[mu_msgPat6], mu_flag_pat6 );
if ( mu_flag_pat6 )
{
if ( !(mu_exist( mu_pat6Set, mu_msgPat6 )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_msgPat6.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_msgPat6;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_aEncryptionPat11()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_170;  mu__while_expr_170 = (mu_i) <= (mu_pat6Set.mu_length);
int mu__counter_169 = 0;
while (mu__while_expr_170) {
if ( ++mu__counter_169 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_172;  mu__while_expr_172 = (mu_j) <= (mu_pat10Set.mu_length);
int mu__counter_171 = 0;
while (mu__while_expr_172) {
if ( ++mu__counter_171 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr173;
  if (!(mu_matchPat( mu_msgs[mu_construct11By610( mu_pat6Set.mu_content[mu_i], mu_pat10Set.mu_content[mu_j] )], mu_sPat11Set ))) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = (!(mu_Spy_known[mu_construct11By610( mu_pat6Set.mu_content[mu_i], mu_pat10Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr173 )
{
if ( (mu_msgs[mu_pat10Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct11By610( mu_pat6Set.mu_content[mu_i], mu_pat10Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat11Set, mu_encMsgNo )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
}
mu_j = (mu_j) + (1);
};
mu__while_expr_172 = (mu_j) <= (mu_pat10Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_170 = (mu_i) <= (mu_pat6Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat12(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",64);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",72);

if ( !(mu_Spy_known[mu_msg.mu_concatPart[1]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msg.mu_concatPart[1];
mu_isPat6 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat6Set, mu_msgPat1 )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[2]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msg.mu_concatPart[2];
mu_isPat11 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat11Set, mu_msgPat2 )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_msgPat2;
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat12()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",32);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",64);

mu_i1 = 1;
{
  bool mu__while_expr_175;  mu__while_expr_175 = (mu_i1) <= (mu_pat6Set.mu_length);
int mu__counter_174 = 0;
while (mu__while_expr_175) {
if ( ++mu__counter_174 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_177;  mu__while_expr_177 = (mu_i2) <= (mu_pat11Set.mu_length);
int mu__counter_176 = 0;
while (mu__while_expr_177) {
if ( ++mu__counter_176 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr178;
  if (!(mu_matchPat( mu_msgs[mu_construct12By611( mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2] )], mu_sPat12Set ))) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (!(mu_Spy_known[mu_construct12By611( mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2] )])) ; 
}
if ( mu__boolexpr178 )
{
mu_concatMsgNo = mu_construct12By611( mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2] );
if ( !(mu_exist( mu_pat12Set, mu_concatMsgNo )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_177 = (mu_i2) <= (mu_pat11Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_175 = (mu_i1) <= (mu_pat6Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDeryptionPat13(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat12("msgPat12",712);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",744);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr179;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr179 = TRUE ;
  else {
  mu__boolexpr179 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr179 )
{
mu_Spy_known[mu_msg.mu_aencMsg] = mu_true;
mu_msgPat12 = mu_msg.mu_aencMsg;
mu_isPat12 ( mu_msgs[mu_msgPat12], mu_flag_pat12 );
if ( mu_flag_pat12 )
{
if ( !(mu_exist( mu_pat12Set, mu_msgPat12 )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_msgPat12.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_msgPat12;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_aEncryptionPat13()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_181;  mu__while_expr_181 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_180 = 0;
while (mu__while_expr_181) {
if ( ++mu__counter_180 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_183;  mu__while_expr_183 = (mu_j) <= (mu_pat3Set.mu_length);
int mu__counter_182 = 0;
while (mu__while_expr_183) {
if ( ++mu__counter_182 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr184;
  if (!(mu_matchPat( mu_msgs[mu_construct13By123( mu_pat12Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )], mu_sPat13Set ))) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (!(mu_Spy_known[mu_construct13By123( mu_pat12Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr184 )
{
if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct13By123( mu_pat12Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat13Set, mu_encMsgNo )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
}
mu_j = (mu_j) + (1);
};
mu__while_expr_183 = (mu_j) <= (mu_pat3Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_181 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat14(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",32);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",64);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",96);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",104);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",112);

if ( !(mu_Spy_known[mu_msg.mu_concatPart[1]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msg.mu_concatPart[1];
mu_isPat6 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat6Set, mu_msgPat1 )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[2]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msg.mu_concatPart[2];
mu_isPat11 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat11Set, mu_msgPat2 )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[3]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msg.mu_concatPart[3];
mu_isPat13 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat13Set, mu_msgPat3 )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_msgPat3;
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat14()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",32);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",64);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",96);

mu_i1 = 1;
{
  bool mu__while_expr_186;  mu__while_expr_186 = (mu_i1) <= (mu_pat6Set.mu_length);
int mu__counter_185 = 0;
while (mu__while_expr_186) {
if ( ++mu__counter_185 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_188;  mu__while_expr_188 = (mu_i2) <= (mu_pat11Set.mu_length);
int mu__counter_187 = 0;
while (mu__while_expr_188) {
if ( ++mu__counter_187 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i3 = 1;
{
  bool mu__while_expr_190;  mu__while_expr_190 = (mu_i3) <= (mu_pat13Set.mu_length);
int mu__counter_189 = 0;
while (mu__while_expr_190) {
if ( ++mu__counter_189 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr191;
  if (!(mu_matchPat( mu_msgs[mu_construct14By61113( mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3] )], mu_sPat14Set ))) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (!(mu_Spy_known[mu_construct14By61113( mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3] )])) ; 
}
if ( mu__boolexpr191 )
{
mu_concatMsgNo = mu_construct14By61113( mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3] );
if ( !(mu_exist( mu_pat14Set, mu_concatMsgNo )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i3 = (mu_i3) + (1);
};
mu__while_expr_190 = (mu_i3) <= (mu_pat13Set.mu_length);
}
};
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_188 = (mu_i2) <= (mu_pat11Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_186 = (mu_i1) <= (mu_pat6Set.mu_length);
}
};
};
/*** end procedure declaration ***/





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
  mu_pat8Set.clear();
  mu_sPat8Set.clear();
  mu_pat9Set.clear();
  mu_sPat9Set.clear();
  mu_pat10Set.clear();
  mu_sPat10Set.clear();
  mu_pat11Set.clear();
  mu_sPat11Set.clear();
  mu_pat12Set.clear();
  mu_sPat12Set.clear();
  mu_pat13Set.clear();
  mu_sPat13Set.clear();
  mu_pat14Set.clear();
  mu_sPat14Set.clear();
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
  mu_pat8Set.undefine();
  mu_sPat8Set.undefine();
  mu_pat9Set.undefine();
  mu_sPat9Set.undefine();
  mu_pat10Set.undefine();
  mu_sPat10Set.undefine();
  mu_pat11Set.undefine();
  mu_sPat11Set.undefine();
  mu_pat12Set.undefine();
  mu_sPat12Set.undefine();
  mu_pat13Set.undefine();
  mu_sPat13Set.undefine();
  mu_pat14Set.undefine();
  mu_sPat14Set.undefine();
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
  mu_pat8Set.reset();
  mu_sPat8Set.reset();
  mu_pat9Set.reset();
  mu_sPat9Set.reset();
  mu_pat10Set.reset();
  mu_sPat10Set.reset();
  mu_pat11Set.reset();
  mu_sPat11Set.reset();
  mu_pat12Set.reset();
  mu_sPat12Set.reset();
  mu_pat13Set.reset();
  mu_sPat13Set.reset();
  mu_pat14Set.reset();
  mu_sPat14Set.reset();
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
  mu_pat8Set.print();
  mu_sPat8Set.print();
  mu_pat9Set.print();
  mu_sPat9Set.print();
  mu_pat10Set.print();
  mu_sPat10Set.print();
  mu_pat11Set.print();
  mu_sPat11Set.print();
  mu_pat12Set.print();
  mu_sPat12Set.print();
  mu_pat13Set.print();
  mu_sPat13Set.print();
  mu_pat14Set.print();
  mu_sPat14Set.print();
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
  mu_pat8Set.print_statistic();
  mu_sPat8Set.print_statistic();
  mu_pat9Set.print_statistic();
  mu_sPat9Set.print_statistic();
  mu_pat10Set.print_statistic();
  mu_sPat10Set.print_statistic();
  mu_pat11Set.print_statistic();
  mu_sPat11Set.print_statistic();
  mu_pat12Set.print_statistic();
  mu_sPat12Set.print_statistic();
  mu_pat13Set.print_statistic();
  mu_sPat13Set.print_statistic();
  mu_pat14Set.print_statistic();
  mu_sPat14Set.print_statistic();
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
    mu_pat8Set.print_diff(prevstate);
    mu_sPat8Set.print_diff(prevstate);
    mu_pat9Set.print_diff(prevstate);
    mu_sPat9Set.print_diff(prevstate);
    mu_pat10Set.print_diff(prevstate);
    mu_sPat10Set.print_diff(prevstate);
    mu_pat11Set.print_diff(prevstate);
    mu_sPat11Set.print_diff(prevstate);
    mu_pat12Set.print_diff(prevstate);
    mu_sPat12Set.print_diff(prevstate);
    mu_pat13Set.print_diff(prevstate);
    mu_sPat13Set.print_diff(prevstate);
    mu_pat14Set.print_diff(prevstate);
    mu_sPat14Set.print_diff(prevstate);
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
  mu_pat8Set.to_state( newstate );
  mu_sPat8Set.to_state( newstate );
  mu_pat9Set.to_state( newstate );
  mu_sPat9Set.to_state( newstate );
  mu_pat10Set.to_state( newstate );
  mu_sPat10Set.to_state( newstate );
  mu_pat11Set.to_state( newstate );
  mu_sPat11Set.to_state( newstate );
  mu_pat12Set.to_state( newstate );
  mu_sPat12Set.to_state( newstate );
  mu_pat13Set.to_state( newstate );
  mu_sPat13Set.to_state( newstate );
  mu_pat14Set.to_state( newstate );
  mu_sPat14Set.to_state( newstate );
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
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[8], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
bool mu__boolexpr196;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = ((mu_i) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_matchPat( mu_msgs[mu_pat14Set.mu_content[mu_i]], mu_sPat14Set )) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (!(mu_emit[mu_pat14Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr192;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 16 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr197;
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = ((mu_i) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (mu_matchPat( mu_msgs[mu_pat14Set.mu_content[mu_i]], mu_sPat14Set )) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = (!(mu_emit[mu_pat14Set.mu_content[mu_i]])) ; 
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
    r = what_rule - 0;
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
if ( !(mu_emit[mu_pat14Set.mu_content[mu_i]]) )
{
mu_ch[8].clear();
mu_ch[8].mu_msg = mu_msgs[mu_pat14Set.mu_content[mu_i]];
mu_ch[8].mu_sender = mu_Intruder;
mu_ch[8].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[8].mu_empty = mu_false;
mu_emit[mu_pat14Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch8. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[8].mu_msg );
cout << "\n";
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
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[7], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
bool mu__boolexpr206;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_i) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_matchPat( mu_msgs[mu_pat14Set.mu_content[mu_i]], mu_sPat14Set )) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (!(mu_emit[mu_pat14Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr202;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 32 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_i) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = (mu_matchPat( mu_msgs[mu_pat14Set.mu_content[mu_i]], mu_sPat14Set )) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (!(mu_emit[mu_pat14Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr207) {
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
    r = what_rule - 16;
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
if ( !(mu_emit[mu_pat14Set.mu_content[mu_i]]) )
{
mu_ch[7].clear();
mu_ch[7].mu_msg = mu_msgs[mu_pat14Set.mu_content[mu_i]];
mu_ch[7].mu_sender = mu_Intruder;
mu_ch[7].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[7].mu_empty = mu_false;
mu_emit[mu_pat14Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch7. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[7].mu_msg );
cout << "\n";
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
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[6], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (mu_matchPat( mu_msgs[mu_pat9Set.mu_content[mu_i]], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = (!(mu_emit[mu_pat9Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr212;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 32;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 48 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr217;
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
bool mu__boolexpr221;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_matchPat( mu_msgs[mu_pat9Set.mu_content[mu_i]], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (!(mu_emit[mu_pat9Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr217) {
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
    r = what_rule - 32;
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
if ( !(mu_emit[mu_pat9Set.mu_content[mu_i]]) )
{
mu_ch[6].clear();
mu_ch[6].mu_msg = mu_msgs[mu_pat9Set.mu_content[mu_i]];
mu_ch[6].mu_sender = mu_Intruder;
mu_ch[6].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[6].mu_empty = mu_false;
mu_emit[mu_pat9Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch6. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
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
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[5], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_matchPat( mu_msgs[mu_pat9Set.mu_content[mu_i]], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (!(mu_emit[mu_pat9Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr222;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 48;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 64 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (mu_matchPat( mu_msgs[mu_pat9Set.mu_content[mu_i]], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = (!(mu_emit[mu_pat9Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr227) {
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
    r = what_rule - 48;
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
if ( !(mu_emit[mu_pat9Set.mu_content[mu_i]]) )
{
mu_ch[5].clear();
mu_ch[5].mu_msg = mu_msgs[mu_pat9Set.mu_content[mu_i]];
mu_ch[5].mu_sender = mu_Intruder;
mu_ch[5].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[5].mu_empty = mu_false;
mu_emit[mu_pat9Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch5. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[5].mu_msg );
cout << "\n";
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
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[4], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr232;
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (mu_matchPat( mu_msgs[mu_pat9Set.mu_content[mu_i]], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = (!(mu_emit[mu_pat9Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr232;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 64;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 80 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
bool mu__boolexpr240;
bool mu__boolexpr241;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = (mu_matchPat( mu_msgs[mu_pat9Set.mu_content[mu_i]], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (!(mu_emit[mu_pat9Set.mu_content[mu_i]])) ; 
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
    r = what_rule - 64;
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
if ( !(mu_emit[mu_pat9Set.mu_content[mu_i]]) )
{
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat9Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat9Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch4. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
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
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[3], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (mu_matchPat( mu_msgs[mu_pat9Set.mu_content[mu_i]], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (!(mu_emit[mu_pat9Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr242;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 80;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 96 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = (mu_matchPat( mu_msgs[mu_pat9Set.mu_content[mu_i]], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (!(mu_emit[mu_pat9Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr247) {
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
    r = what_rule - 80;
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
if ( !(mu_emit[mu_pat9Set.mu_content[mu_i]]) )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat9Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat9Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch3. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
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
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[2], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_matchPat( mu_msgs[mu_pat5Set.mu_content[mu_i]], mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = (!(mu_emit[mu_pat5Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr252;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 96;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 112 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_matchPat( mu_msgs[mu_pat5Set.mu_content[mu_i]], mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (!(mu_emit[mu_pat5Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr257) {
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
    r = what_rule - 96;
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
if ( !(mu_emit[mu_pat5Set.mu_content[mu_i]]) )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat5Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat5Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch2. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
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
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[1], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_matchPat( mu_msgs[mu_pat5Set.mu_content[mu_i]], mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = (!(mu_emit[mu_pat5Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr262;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 112;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 128 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (mu_matchPat( mu_msgs[mu_pat5Set.mu_content[mu_i]], mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = (!(mu_emit[mu_pat5Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr267) {
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
    r = what_rule - 112;
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
if ( !(mu_emit[mu_pat5Set.mu_content[mu_i]]) )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat5Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat5Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch1. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[1].mu_msg );
cout << "\n";
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
    return tsprintf("intruderGetMsgFromCh[8]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[8].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 128;
    while (what_rule < 129 )
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
    r = what_rule - 128;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat14("flag_pat14",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[8].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat14 ( mu_msg, mu_flag_pat14 );
if ( mu_flag_pat14 )
{
if ( !(mu_exist( mu_pat14Set, mu_msgNo )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_273;  mu__while_expr_273 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_272 = 0;
while (mu__while_expr_273) {
if ( ++mu__counter_272 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat2 ( mu_msgs[mu_pat2Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_273 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
mu_enconcatPat2 (  );
mu_i = 1;
{
  bool mu__while_expr_275;  mu__while_expr_275 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_274 = 0;
while (mu__while_expr_275) {
if ( ++mu__counter_274 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_275 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_277;  mu__while_expr_277 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_276 = 0;
while (mu__while_expr_277) {
if ( ++mu__counter_276 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_277 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_279;  mu__while_expr_279 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_278 = 0;
while (mu__while_expr_279) {
if ( ++mu__counter_278 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_279 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_enconcatPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_281;  mu__while_expr_281 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_280 = 0;
while (mu__while_expr_281) {
if ( ++mu__counter_280 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_281 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_aEncryptionPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_283;  mu__while_expr_283 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_282 = 0;
while (mu__while_expr_283) {
if ( ++mu__counter_282 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_283 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_285;  mu__while_expr_285 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_284 = 0;
while (mu__while_expr_285) {
if ( ++mu__counter_284 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_285 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_aEncryptionPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_287;  mu__while_expr_287 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_286 = 0;
while (mu__while_expr_287) {
if ( ++mu__counter_286 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_287 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_enconcatPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_289;  mu__while_expr_289 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_288 = 0;
while (mu__while_expr_289) {
if ( ++mu__counter_288 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_289 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_aEncryptionPat13 (  );
mu_i = 1;
{
  bool mu__while_expr_291;  mu__while_expr_291 = (mu_i) <= (mu_pat14Set.mu_length);
int mu__counter_290 = 0;
while (mu__while_expr_291) {
if ( ++mu__counter_290 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat14 ( mu_msgs[mu_pat14Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_291 = (mu_i) <= (mu_pat14Set.mu_length);
}
};
mu_enconcatPat14 (  );
}
mu_ch[8].mu_empty = mu_true;
mu_ch[8].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[7]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[7].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 129;
    while (what_rule < 130 )
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
    r = what_rule - 129;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat14("flag_pat14",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[7].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat14 ( mu_msg, mu_flag_pat14 );
if ( mu_flag_pat14 )
{
if ( !(mu_exist( mu_pat14Set, mu_msgNo )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_293;  mu__while_expr_293 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_292 = 0;
while (mu__while_expr_293) {
if ( ++mu__counter_292 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat2 ( mu_msgs[mu_pat2Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_293 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
mu_enconcatPat2 (  );
mu_i = 1;
{
  bool mu__while_expr_295;  mu__while_expr_295 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_294 = 0;
while (mu__while_expr_295) {
if ( ++mu__counter_294 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_295 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_297;  mu__while_expr_297 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_296 = 0;
while (mu__while_expr_297) {
if ( ++mu__counter_296 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_297 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_299;  mu__while_expr_299 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_298 = 0;
while (mu__while_expr_299) {
if ( ++mu__counter_298 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_299 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_enconcatPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_301;  mu__while_expr_301 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_300 = 0;
while (mu__while_expr_301) {
if ( ++mu__counter_300 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_301 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_aEncryptionPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_303;  mu__while_expr_303 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_302 = 0;
while (mu__while_expr_303) {
if ( ++mu__counter_302 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_303 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_305;  mu__while_expr_305 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_304 = 0;
while (mu__while_expr_305) {
if ( ++mu__counter_304 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_305 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_aEncryptionPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_307;  mu__while_expr_307 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_306 = 0;
while (mu__while_expr_307) {
if ( ++mu__counter_306 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_307 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_enconcatPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_309;  mu__while_expr_309 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_308 = 0;
while (mu__while_expr_309) {
if ( ++mu__counter_308 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_309 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_aEncryptionPat13 (  );
mu_i = 1;
{
  bool mu__while_expr_311;  mu__while_expr_311 = (mu_i) <= (mu_pat14Set.mu_length);
int mu__counter_310 = 0;
while (mu__while_expr_311) {
if ( ++mu__counter_310 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat14 ( mu_msgs[mu_pat14Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_311 = (mu_i) <= (mu_pat14Set.mu_length);
}
};
mu_enconcatPat14 (  );
}
mu_ch[7].mu_empty = mu_true;
mu_ch[7].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[6]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[6].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 130;
    while (what_rule < 131 )
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
    r = what_rule - 130;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[6].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
if ( !(mu_exist( mu_pat9Set, mu_msgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_313;  mu__while_expr_313 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_312 = 0;
while (mu__while_expr_313) {
if ( ++mu__counter_312 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat2 ( mu_msgs[mu_pat2Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_313 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
mu_enconcatPat2 (  );
mu_i = 1;
{
  bool mu__while_expr_315;  mu__while_expr_315 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_314 = 0;
while (mu__while_expr_315) {
if ( ++mu__counter_314 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_315 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_317;  mu__while_expr_317 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_316 = 0;
while (mu__while_expr_317) {
if ( ++mu__counter_316 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_317 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_319;  mu__while_expr_319 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_318 = 0;
while (mu__while_expr_319) {
if ( ++mu__counter_318 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_319 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_enconcatPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_321;  mu__while_expr_321 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_320 = 0;
while (mu__while_expr_321) {
if ( ++mu__counter_320 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_321 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_aEncryptionPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_323;  mu__while_expr_323 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_322 = 0;
while (mu__while_expr_323) {
if ( ++mu__counter_322 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_323 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_325;  mu__while_expr_325 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_324 = 0;
while (mu__while_expr_325) {
if ( ++mu__counter_324 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_325 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_aEncryptionPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_327;  mu__while_expr_327 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_326 = 0;
while (mu__while_expr_327) {
if ( ++mu__counter_326 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_327 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_enconcatPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_329;  mu__while_expr_329 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_328 = 0;
while (mu__while_expr_329) {
if ( ++mu__counter_328 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_329 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_aEncryptionPat13 (  );
mu_i = 1;
{
  bool mu__while_expr_331;  mu__while_expr_331 = (mu_i) <= (mu_pat14Set.mu_length);
int mu__counter_330 = 0;
while (mu__while_expr_331) {
if ( ++mu__counter_330 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat14 ( mu_msgs[mu_pat14Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_331 = (mu_i) <= (mu_pat14Set.mu_length);
}
};
mu_enconcatPat14 (  );
}
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[5]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[5].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 131;
    while (what_rule < 132 )
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
    r = what_rule - 131;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[5].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
if ( !(mu_exist( mu_pat9Set, mu_msgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_333;  mu__while_expr_333 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_332 = 0;
while (mu__while_expr_333) {
if ( ++mu__counter_332 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat2 ( mu_msgs[mu_pat2Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_333 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
mu_enconcatPat2 (  );
mu_i = 1;
{
  bool mu__while_expr_335;  mu__while_expr_335 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_334 = 0;
while (mu__while_expr_335) {
if ( ++mu__counter_334 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_335 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_337;  mu__while_expr_337 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_336 = 0;
while (mu__while_expr_337) {
if ( ++mu__counter_336 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_337 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_339;  mu__while_expr_339 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_338 = 0;
while (mu__while_expr_339) {
if ( ++mu__counter_338 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_339 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_enconcatPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_341;  mu__while_expr_341 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_340 = 0;
while (mu__while_expr_341) {
if ( ++mu__counter_340 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_341 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_aEncryptionPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_343;  mu__while_expr_343 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_342 = 0;
while (mu__while_expr_343) {
if ( ++mu__counter_342 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_343 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_345;  mu__while_expr_345 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_344 = 0;
while (mu__while_expr_345) {
if ( ++mu__counter_344 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_345 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_aEncryptionPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_347;  mu__while_expr_347 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_346 = 0;
while (mu__while_expr_347) {
if ( ++mu__counter_346 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_347 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_enconcatPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_349;  mu__while_expr_349 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_348 = 0;
while (mu__while_expr_349) {
if ( ++mu__counter_348 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_349 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_aEncryptionPat13 (  );
mu_i = 1;
{
  bool mu__while_expr_351;  mu__while_expr_351 = (mu_i) <= (mu_pat14Set.mu_length);
int mu__counter_350 = 0;
while (mu__while_expr_351) {
if ( ++mu__counter_350 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat14 ( mu_msgs[mu_pat14Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_351 = (mu_i) <= (mu_pat14Set.mu_length);
}
};
mu_enconcatPat14 (  );
}
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[4]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[4].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 132;
    while (what_rule < 133 )
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
    r = what_rule - 132;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[4].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
if ( !(mu_exist( mu_pat9Set, mu_msgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_353;  mu__while_expr_353 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_352 = 0;
while (mu__while_expr_353) {
if ( ++mu__counter_352 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat2 ( mu_msgs[mu_pat2Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_353 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
mu_enconcatPat2 (  );
mu_i = 1;
{
  bool mu__while_expr_355;  mu__while_expr_355 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_354 = 0;
while (mu__while_expr_355) {
if ( ++mu__counter_354 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_355 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_357;  mu__while_expr_357 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_356 = 0;
while (mu__while_expr_357) {
if ( ++mu__counter_356 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_357 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_359;  mu__while_expr_359 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_358 = 0;
while (mu__while_expr_359) {
if ( ++mu__counter_358 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_359 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_enconcatPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_361;  mu__while_expr_361 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_360 = 0;
while (mu__while_expr_361) {
if ( ++mu__counter_360 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_361 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_aEncryptionPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_363;  mu__while_expr_363 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_362 = 0;
while (mu__while_expr_363) {
if ( ++mu__counter_362 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_363 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_365;  mu__while_expr_365 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_364 = 0;
while (mu__while_expr_365) {
if ( ++mu__counter_364 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_365 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_aEncryptionPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_367;  mu__while_expr_367 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_366 = 0;
while (mu__while_expr_367) {
if ( ++mu__counter_366 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_367 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_enconcatPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_369;  mu__while_expr_369 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_368 = 0;
while (mu__while_expr_369) {
if ( ++mu__counter_368 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_369 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_aEncryptionPat13 (  );
mu_i = 1;
{
  bool mu__while_expr_371;  mu__while_expr_371 = (mu_i) <= (mu_pat14Set.mu_length);
int mu__counter_370 = 0;
while (mu__while_expr_371) {
if ( ++mu__counter_370 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat14 ( mu_msgs[mu_pat14Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_371 = (mu_i) <= (mu_pat14Set.mu_length);
}
};
mu_enconcatPat14 (  );
}
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[3]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[3].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 133;
    while (what_rule < 134 )
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
    r = what_rule - 133;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
if ( !(mu_exist( mu_pat9Set, mu_msgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_373;  mu__while_expr_373 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_372 = 0;
while (mu__while_expr_373) {
if ( ++mu__counter_372 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat2 ( mu_msgs[mu_pat2Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_373 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
mu_enconcatPat2 (  );
mu_i = 1;
{
  bool mu__while_expr_375;  mu__while_expr_375 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_374 = 0;
while (mu__while_expr_375) {
if ( ++mu__counter_374 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_375 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_377;  mu__while_expr_377 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_376 = 0;
while (mu__while_expr_377) {
if ( ++mu__counter_376 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_377 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_379;  mu__while_expr_379 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_378 = 0;
while (mu__while_expr_379) {
if ( ++mu__counter_378 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_379 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_enconcatPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_381;  mu__while_expr_381 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_380 = 0;
while (mu__while_expr_381) {
if ( ++mu__counter_380 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_381 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_aEncryptionPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_383;  mu__while_expr_383 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_382 = 0;
while (mu__while_expr_383) {
if ( ++mu__counter_382 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_383 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_385;  mu__while_expr_385 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_384 = 0;
while (mu__while_expr_385) {
if ( ++mu__counter_384 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_385 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_aEncryptionPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_387;  mu__while_expr_387 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_386 = 0;
while (mu__while_expr_387) {
if ( ++mu__counter_386 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_387 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_enconcatPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_389;  mu__while_expr_389 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_388 = 0;
while (mu__while_expr_389) {
if ( ++mu__counter_388 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_389 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_aEncryptionPat13 (  );
mu_i = 1;
{
  bool mu__while_expr_391;  mu__while_expr_391 = (mu_i) <= (mu_pat14Set.mu_length);
int mu__counter_390 = 0;
while (mu__while_expr_391) {
if ( ++mu__counter_390 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat14 ( mu_msgs[mu_pat14Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_391 = (mu_i) <= (mu_pat14Set.mu_length);
}
};
mu_enconcatPat14 (  );
}
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[2]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 134;
    while (what_rule < 135 )
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
    r = what_rule - 134;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat5 ( mu_msg, mu_flag_pat5 );
if ( mu_flag_pat5 )
{
if ( !(mu_exist( mu_pat5Set, mu_msgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_393;  mu__while_expr_393 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_392 = 0;
while (mu__while_expr_393) {
if ( ++mu__counter_392 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat2 ( mu_msgs[mu_pat2Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_393 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
mu_enconcatPat2 (  );
mu_i = 1;
{
  bool mu__while_expr_395;  mu__while_expr_395 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_394 = 0;
while (mu__while_expr_395) {
if ( ++mu__counter_394 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_395 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_397;  mu__while_expr_397 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_396 = 0;
while (mu__while_expr_397) {
if ( ++mu__counter_396 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_397 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_399;  mu__while_expr_399 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_398 = 0;
while (mu__while_expr_399) {
if ( ++mu__counter_398 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_399 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_enconcatPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_401;  mu__while_expr_401 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_400 = 0;
while (mu__while_expr_401) {
if ( ++mu__counter_400 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_401 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_aEncryptionPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_403;  mu__while_expr_403 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_402 = 0;
while (mu__while_expr_403) {
if ( ++mu__counter_402 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_403 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_405;  mu__while_expr_405 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_404 = 0;
while (mu__while_expr_405) {
if ( ++mu__counter_404 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_405 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_aEncryptionPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_407;  mu__while_expr_407 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_406 = 0;
while (mu__while_expr_407) {
if ( ++mu__counter_406 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_407 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_enconcatPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_409;  mu__while_expr_409 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_408 = 0;
while (mu__while_expr_409) {
if ( ++mu__counter_408 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_409 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_aEncryptionPat13 (  );
mu_i = 1;
{
  bool mu__while_expr_411;  mu__while_expr_411 = (mu_i) <= (mu_pat14Set.mu_length);
int mu__counter_410 = 0;
while (mu__while_expr_411) {
if ( ++mu__counter_410 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat14 ( mu_msgs[mu_pat14Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_411 = (mu_i) <= (mu_pat14Set.mu_length);
}
};
mu_enconcatPat14 (  );
}
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[1]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[1].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 135;
    while (what_rule < 136 )
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
    r = what_rule - 135;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[1].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat5 ( mu_msg, mu_flag_pat5 );
if ( mu_flag_pat5 )
{
if ( !(mu_exist( mu_pat5Set, mu_msgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_413;  mu__while_expr_413 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_412 = 0;
while (mu__while_expr_413) {
if ( ++mu__counter_412 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat2 ( mu_msgs[mu_pat2Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_413 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
mu_enconcatPat2 (  );
mu_i = 1;
{
  bool mu__while_expr_415;  mu__while_expr_415 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_414 = 0;
while (mu__while_expr_415) {
if ( ++mu__counter_414 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_415 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_417;  mu__while_expr_417 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_416 = 0;
while (mu__while_expr_417) {
if ( ++mu__counter_416 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_417 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_419;  mu__while_expr_419 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_418 = 0;
while (mu__while_expr_419) {
if ( ++mu__counter_418 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_419 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_enconcatPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_421;  mu__while_expr_421 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_420 = 0;
while (mu__while_expr_421) {
if ( ++mu__counter_420 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_421 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_aEncryptionPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_423;  mu__while_expr_423 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_422 = 0;
while (mu__while_expr_423) {
if ( ++mu__counter_422 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_423 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_425;  mu__while_expr_425 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_424 = 0;
while (mu__while_expr_425) {
if ( ++mu__counter_424 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_425 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_aEncryptionPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_427;  mu__while_expr_427 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_426 = 0;
while (mu__while_expr_427) {
if ( ++mu__counter_426 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_427 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_enconcatPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_429;  mu__while_expr_429 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_428 = 0;
while (mu__while_expr_429) {
if ( ++mu__counter_428 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_429 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_aEncryptionPat13 (  );
mu_i = 1;
{
  bool mu__while_expr_431;  mu__while_expr_431 = (mu_i) <= (mu_pat14Set.mu_length);
int mu__counter_430 = 0;
while (mu__while_expr_431) {
if ( ++mu__counter_430 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat14 ( mu_msgs[mu_pat14Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_431 = (mu_i) <= (mu_pat14Set.mu_length);
}
};
mu_enconcatPat14 (  );
}
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
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
bool mu__boolexpr432;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server4))) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr432;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 136;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 137 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr433;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server4))) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr433) {
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
    r = what_rule - 136;
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
mu_1_indexType mu_msgNo("msgNo",712);

mu_msg.clear();
mu_cons14 ( mu_roleServer[mu_i].mu_HostIP, mu_roleServer[mu_i].mu_hostipsk, mu_roleServer[mu_i].mu_Host, mu_roleServer[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[7].mu_empty = mu_false;
mu_ch[7].mu_msg = mu_msg;
mu_ch[7].mu_sender = mu_roleServer[mu_i].mu_Server;
mu_ch[7].mu_receiver = mu_Intruder;
mu_roleServer[mu_i].mu_st = mu_Server1;
cout << "roleServer send into ch[7]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[7].mu_msg );
cout << "\n";
mu_roleServer[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr434;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server3))) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr434;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 137;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 138 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr435;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server3))) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr435) {
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
    r = what_rule - 137;
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
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",720);

mu_msg.clear();
mu_msg = mu_ch[6].mu_msg;
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
mu_destruct9 ( mu_msg, mu_roleServer[mu_i].mu_locr, mu_roleServer[mu_i].mu_locHost );
bool mu__boolexpr436;
  if (!(mu_matchNonce( mu_roleServer[mu_i].mu_locr, mu_roleServer[mu_i].mu_r ))) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = (mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr436 )
{
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
mu_roleServer[mu_i].mu_st = mu_Server4;
}
}
cout << "roleServer recieve from ch[6]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr437;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server2))) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr437;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 138;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 139 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr438;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server2))) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr438) {
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
    r = what_rule - 138;
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
mu_1_indexType mu_msgNo("msgNo",712);

mu_msg.clear();
mu_cons9 ( mu_roleServer[mu_i].mu_r, mu_roleServer[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleServer[mu_i].mu_Server;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleServer[mu_i].mu_st = mu_Server3;
cout << "roleServer send into ch[3]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
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
bool mu__boolexpr439;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server1))) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr439;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 139;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 140 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr440;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server1))) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr440) {
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
    r = what_rule - 139;
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
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",720);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_isPat5 ( mu_msg, mu_flag_pat5 );
if ( mu_flag_pat5 )
{
mu_destruct5 ( mu_msg, mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_locHost );
bool mu__boolexpr441;
  if (!(mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host ))) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = (mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr441 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleServer[mu_i].mu_st = mu_Server2;
}
}
cout << "roleServer recieve from ch[2]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr442;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway8))) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = ((mu_ch[8].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr442;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 140;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 141 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr443;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway8))) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = ((mu_ch[8].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr443) {
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
    r = what_rule - 140;
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
mu_1_indexType mu_msgNo("msgNo",712);

mu_msg.clear();
mu_cons14 ( mu_roleGateway[mu_i].mu_locHostIP, mu_roleGateway[mu_i].mu_lochostipsk, mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[8].mu_empty = mu_false;
mu_ch[8].mu_msg = mu_msg;
mu_ch[8].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[8].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway1;
cout << "roleGateway send into ch[8]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[8].mu_msg );
cout << "\n";
mu_roleGateway[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr444;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway7))) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = ((mu_ch[7].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr444;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 141;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 142 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr445;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway7))) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = ((mu_ch[7].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr445) {
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
    r = what_rule - 141;
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
mu_0_boolean mu_flag_pat14("flag_pat14",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",720);

mu_msg.clear();
mu_msg = mu_ch[7].mu_msg;
mu_isPat14 ( mu_msg, mu_flag_pat14 );
if ( mu_flag_pat14 )
{
mu_destruct14 ( mu_msg, mu_roleGateway[mu_i].mu_locHostIP, mu_roleGateway[mu_i].mu_lochostipsk, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locServer );
bool mu__boolexpr446;
bool mu__boolexpr447;
bool mu__boolexpr448;
  if (!(mu_matchNonce( mu_roleGateway[mu_i].mu_locHostIP, mu_roleGateway[mu_i].mu_HostIP ))) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = (mu_matchNonce( mu_roleGateway[mu_i].mu_lochostipsk, mu_roleGateway[mu_i].mu_hostipsk )) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host )) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr446 )
{
mu_ch[7].mu_empty = mu_true;
mu_ch[7].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway8;
}
}
cout << "roleGateway recieve from ch[7]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr449;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway6))) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr449;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 142;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 143 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr450;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway6))) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr450) {
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
    r = what_rule - 142;
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
mu_1_indexType mu_msgNo("msgNo",712);

mu_msg.clear();
mu_cons9 ( mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[6].mu_empty = mu_false;
mu_ch[6].mu_msg = mu_msg;
mu_ch[6].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[6].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway7;
cout << "roleGateway send into ch[6]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
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
bool mu__boolexpr451;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway5))) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr451;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 143;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 144 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr452;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway5))) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr452) {
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
    r = what_rule - 143;
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
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",720);

mu_msg.clear();
mu_msg = mu_ch[5].mu_msg;
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
mu_destruct9 ( mu_msg, mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_locHost );
bool mu__boolexpr453;
  if (!(mu_matchNonce( mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_r ))) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr453 )
{
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway6;
}
}
cout << "roleGateway recieve from ch[5]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr454;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway4))) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr454;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 144;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 145 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr455;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway4))) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr455) {
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
    r = what_rule - 144;
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
mu_1_indexType mu_msgNo("msgNo",712);

mu_msg.clear();
mu_cons9 ( mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway5;
cout << "roleGateway send into ch[4]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
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
bool mu__boolexpr456;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway3))) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr456;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 145;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 146 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr457;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway3))) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr457) {
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
    r = what_rule - 145;
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
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",720);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
mu_destruct9 ( mu_msg, mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_locServer );
bool mu__boolexpr458;
  if (!(mu_matchNonce( mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_r ))) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr458 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway4;
}
}
cout << "roleGateway recieve from ch[3]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr459;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway2))) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr459;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 146;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 147 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr460;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway2))) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr460) {
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
    r = what_rule - 146;
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
mu_1_indexType mu_msgNo("msgNo",712);

mu_msg.clear();
mu_cons5 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway3;
cout << "roleGateway send into ch[2]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
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
bool mu__boolexpr461;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway1))) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr461;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 147;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 148 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr462;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway1))) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr462) {
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
    r = what_rule - 147;
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
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",720);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_isPat5 ( mu_msg, mu_flag_pat5 );
if ( mu_flag_pat5 )
{
mu_destruct5 ( mu_msg, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locHost );
bool mu__boolexpr463;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host ))) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr463 )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway2;
}
}
cout << "roleGateway recieve from ch[1]. ";
cout << " msg: ";
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
bool mu__boolexpr464;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host4))) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr464;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 148;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 149 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr465;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host4))) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr465) {
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
    r = what_rule - 148;
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
mu_0_boolean mu_flag_pat14("flag_pat14",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",720);

mu_msg.clear();
mu_msg = mu_ch[8].mu_msg;
mu_isPat14 ( mu_msg, mu_flag_pat14 );
if ( mu_flag_pat14 )
{
mu_destruct14 ( mu_msg, mu_roleHost[mu_i].mu_locHostIP, mu_roleHost[mu_i].mu_lochostipsk, mu_roleHost[mu_i].mu_locHost, mu_roleHost[mu_i].mu_locServer );
bool mu__boolexpr466;
bool mu__boolexpr467;
bool mu__boolexpr468;
  if (!(mu_matchNonce( mu_roleHost[mu_i].mu_locHostIP, mu_roleHost[mu_i].mu_HostIP ))) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = (mu_matchNonce( mu_roleHost[mu_i].mu_lochostipsk, mu_roleHost[mu_i].mu_hostipsk )) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = (mu_matchAgent( mu_roleHost[mu_i].mu_locHost, mu_roleHost[mu_i].mu_Host )) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = (mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr466 )
{
mu_ch[8].mu_empty = mu_true;
mu_ch[8].mu_msg.clear();
mu_roleHost[mu_i].mu_st = mu_Host1;
}
}
cout << "roleHost recieve from ch[8]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
mu_roleHost[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr469;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host3))) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr469;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 149;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 150 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr470;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host3))) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr470) {
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
    r = what_rule - 149;
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
mu_1_indexType mu_msgNo("msgNo",712);

mu_msg.clear();
mu_cons9 ( mu_roleHost[mu_i].mu_locr, mu_roleHost[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[5].mu_empty = mu_false;
mu_ch[5].mu_msg = mu_msg;
mu_ch[5].mu_sender = mu_roleHost[mu_i].mu_Host;
mu_ch[5].mu_receiver = mu_Intruder;
mu_roleHost[mu_i].mu_st = mu_Host4;
cout << "roleHost send into ch[5]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
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
bool mu__boolexpr471;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host2))) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr471;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 150;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 151 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr472;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host2))) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr472) {
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
    r = what_rule - 150;
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
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",720);

mu_msg.clear();
mu_msg = mu_ch[4].mu_msg;
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
mu_destruct9 ( mu_msg, mu_roleHost[mu_i].mu_locr, mu_roleHost[mu_i].mu_locServer );
bool mu__boolexpr473;
  if (!(mu_matchNonce( mu_roleHost[mu_i].mu_locr, mu_roleHost[mu_i].mu_r ))) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = (mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr473 )
{
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
mu_roleHost[mu_i].mu_st = mu_Host3;
}
}
cout << "roleHost recieve from ch[4]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr474;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host1))) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr474;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 151;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 152 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr475;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host1))) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr475) {
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
    r = what_rule - 151;
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
mu_1_indexType mu_msgNo("msgNo",712);

mu_msg.clear();
mu_cons5 ( mu_roleHost[mu_i].mu_Host, mu_roleHost[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleHost[mu_i].mu_Host;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleHost[mu_i].mu_st = mu_Host2;
cout << "roleHost send into ch[1]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[1].mu_msg );
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<16)
    { R0.NextRule(what_rule);
      if (what_rule<16) return; }
  if (what_rule>=16 && what_rule<32)
    { R1.NextRule(what_rule);
      if (what_rule<32) return; }
  if (what_rule>=32 && what_rule<48)
    { R2.NextRule(what_rule);
      if (what_rule<48) return; }
  if (what_rule>=48 && what_rule<64)
    { R3.NextRule(what_rule);
      if (what_rule<64) return; }
  if (what_rule>=64 && what_rule<80)
    { R4.NextRule(what_rule);
      if (what_rule<80) return; }
  if (what_rule>=80 && what_rule<96)
    { R5.NextRule(what_rule);
      if (what_rule<96) return; }
  if (what_rule>=96 && what_rule<112)
    { R6.NextRule(what_rule);
      if (what_rule<112) return; }
  if (what_rule>=112 && what_rule<128)
    { R7.NextRule(what_rule);
      if (what_rule<128) return; }
  if (what_rule>=128 && what_rule<129)
    { R8.NextRule(what_rule);
      if (what_rule<129) return; }
  if (what_rule>=129 && what_rule<130)
    { R9.NextRule(what_rule);
      if (what_rule<130) return; }
  if (what_rule>=130 && what_rule<131)
    { R10.NextRule(what_rule);
      if (what_rule<131) return; }
  if (what_rule>=131 && what_rule<132)
    { R11.NextRule(what_rule);
      if (what_rule<132) return; }
  if (what_rule>=132 && what_rule<133)
    { R12.NextRule(what_rule);
      if (what_rule<133) return; }
  if (what_rule>=133 && what_rule<134)
    { R13.NextRule(what_rule);
      if (what_rule<134) return; }
  if (what_rule>=134 && what_rule<135)
    { R14.NextRule(what_rule);
      if (what_rule<135) return; }
  if (what_rule>=135 && what_rule<136)
    { R15.NextRule(what_rule);
      if (what_rule<136) return; }
  if (what_rule>=136 && what_rule<137)
    { R16.NextRule(what_rule);
      if (what_rule<137) return; }
  if (what_rule>=137 && what_rule<138)
    { R17.NextRule(what_rule);
      if (what_rule<138) return; }
  if (what_rule>=138 && what_rule<139)
    { R18.NextRule(what_rule);
      if (what_rule<139) return; }
  if (what_rule>=139 && what_rule<140)
    { R19.NextRule(what_rule);
      if (what_rule<140) return; }
  if (what_rule>=140 && what_rule<141)
    { R20.NextRule(what_rule);
      if (what_rule<141) return; }
  if (what_rule>=141 && what_rule<142)
    { R21.NextRule(what_rule);
      if (what_rule<142) return; }
  if (what_rule>=142 && what_rule<143)
    { R22.NextRule(what_rule);
      if (what_rule<143) return; }
  if (what_rule>=143 && what_rule<144)
    { R23.NextRule(what_rule);
      if (what_rule<144) return; }
  if (what_rule>=144 && what_rule<145)
    { R24.NextRule(what_rule);
      if (what_rule<145) return; }
  if (what_rule>=145 && what_rule<146)
    { R25.NextRule(what_rule);
      if (what_rule<146) return; }
  if (what_rule>=146 && what_rule<147)
    { R26.NextRule(what_rule);
      if (what_rule<147) return; }
  if (what_rule>=147 && what_rule<148)
    { R27.NextRule(what_rule);
      if (what_rule<148) return; }
  if (what_rule>=148 && what_rule<149)
    { R28.NextRule(what_rule);
      if (what_rule<149) return; }
  if (what_rule>=149 && what_rule<150)
    { R29.NextRule(what_rule);
      if (what_rule<150) return; }
  if (what_rule>=150 && what_rule<151)
    { R30.NextRule(what_rule);
      if (what_rule<151) return; }
  if (what_rule>=151 && what_rule<152)
    { R31.NextRule(what_rule);
      if (what_rule<152) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=15) return R0.Condition(r-0);
  if (r>=16 && r<=31) return R1.Condition(r-16);
  if (r>=32 && r<=47) return R2.Condition(r-32);
  if (r>=48 && r<=63) return R3.Condition(r-48);
  if (r>=64 && r<=79) return R4.Condition(r-64);
  if (r>=80 && r<=95) return R5.Condition(r-80);
  if (r>=96 && r<=111) return R6.Condition(r-96);
  if (r>=112 && r<=127) return R7.Condition(r-112);
  if (r>=128 && r<=128) return R8.Condition(r-128);
  if (r>=129 && r<=129) return R9.Condition(r-129);
  if (r>=130 && r<=130) return R10.Condition(r-130);
  if (r>=131 && r<=131) return R11.Condition(r-131);
  if (r>=132 && r<=132) return R12.Condition(r-132);
  if (r>=133 && r<=133) return R13.Condition(r-133);
  if (r>=134 && r<=134) return R14.Condition(r-134);
  if (r>=135 && r<=135) return R15.Condition(r-135);
  if (r>=136 && r<=136) return R16.Condition(r-136);
  if (r>=137 && r<=137) return R17.Condition(r-137);
  if (r>=138 && r<=138) return R18.Condition(r-138);
  if (r>=139 && r<=139) return R19.Condition(r-139);
  if (r>=140 && r<=140) return R20.Condition(r-140);
  if (r>=141 && r<=141) return R21.Condition(r-141);
  if (r>=142 && r<=142) return R22.Condition(r-142);
  if (r>=143 && r<=143) return R23.Condition(r-143);
  if (r>=144 && r<=144) return R24.Condition(r-144);
  if (r>=145 && r<=145) return R25.Condition(r-145);
  if (r>=146 && r<=146) return R26.Condition(r-146);
  if (r>=147 && r<=147) return R27.Condition(r-147);
  if (r>=148 && r<=148) return R28.Condition(r-148);
  if (r>=149 && r<=149) return R29.Condition(r-149);
  if (r>=150 && r<=150) return R30.Condition(r-150);
  if (r>=151 && r<=151) return R31.Condition(r-151);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=15) { R0.Code(r-0); return; } 
  if (r>=16 && r<=31) { R1.Code(r-16); return; } 
  if (r>=32 && r<=47) { R2.Code(r-32); return; } 
  if (r>=48 && r<=63) { R3.Code(r-48); return; } 
  if (r>=64 && r<=79) { R4.Code(r-64); return; } 
  if (r>=80 && r<=95) { R5.Code(r-80); return; } 
  if (r>=96 && r<=111) { R6.Code(r-96); return; } 
  if (r>=112 && r<=127) { R7.Code(r-112); return; } 
  if (r>=128 && r<=128) { R8.Code(r-128); return; } 
  if (r>=129 && r<=129) { R9.Code(r-129); return; } 
  if (r>=130 && r<=130) { R10.Code(r-130); return; } 
  if (r>=131 && r<=131) { R11.Code(r-131); return; } 
  if (r>=132 && r<=132) { R12.Code(r-132); return; } 
  if (r>=133 && r<=133) { R13.Code(r-133); return; } 
  if (r>=134 && r<=134) { R14.Code(r-134); return; } 
  if (r>=135 && r<=135) { R15.Code(r-135); return; } 
  if (r>=136 && r<=136) { R16.Code(r-136); return; } 
  if (r>=137 && r<=137) { R17.Code(r-137); return; } 
  if (r>=138 && r<=138) { R18.Code(r-138); return; } 
  if (r>=139 && r<=139) { R19.Code(r-139); return; } 
  if (r>=140 && r<=140) { R20.Code(r-140); return; } 
  if (r>=141 && r<=141) { R21.Code(r-141); return; } 
  if (r>=142 && r<=142) { R22.Code(r-142); return; } 
  if (r>=143 && r<=143) { R23.Code(r-143); return; } 
  if (r>=144 && r<=144) { R24.Code(r-144); return; } 
  if (r>=145 && r<=145) { R25.Code(r-145); return; } 
  if (r>=146 && r<=146) { R26.Code(r-146); return; } 
  if (r>=147 && r<=147) { R27.Code(r-147); return; } 
  if (r>=148 && r<=148) { R28.Code(r-148); return; } 
  if (r>=149 && r<=149) { R29.Code(r-149); return; } 
  if (r>=150 && r<=150) { R30.Code(r-150); return; } 
  if (r>=151 && r<=151) { R31.Code(r-151); return; } 
}
int Priority(unsigned short r)
{
  if (r<=15) { return R0.Priority(); } 
  if (r>=16 && r<=31) { return R1.Priority(); } 
  if (r>=32 && r<=47) { return R2.Priority(); } 
  if (r>=48 && r<=63) { return R3.Priority(); } 
  if (r>=64 && r<=79) { return R4.Priority(); } 
  if (r>=80 && r<=95) { return R5.Priority(); } 
  if (r>=96 && r<=111) { return R6.Priority(); } 
  if (r>=112 && r<=127) { return R7.Priority(); } 
  if (r>=128 && r<=128) { return R8.Priority(); } 
  if (r>=129 && r<=129) { return R9.Priority(); } 
  if (r>=130 && r<=130) { return R10.Priority(); } 
  if (r>=131 && r<=131) { return R11.Priority(); } 
  if (r>=132 && r<=132) { return R12.Priority(); } 
  if (r>=133 && r<=133) { return R13.Priority(); } 
  if (r>=134 && r<=134) { return R14.Priority(); } 
  if (r>=135 && r<=135) { return R15.Priority(); } 
  if (r>=136 && r<=136) { return R16.Priority(); } 
  if (r>=137 && r<=137) { return R17.Priority(); } 
  if (r>=138 && r<=138) { return R18.Priority(); } 
  if (r>=139 && r<=139) { return R19.Priority(); } 
  if (r>=140 && r<=140) { return R20.Priority(); } 
  if (r>=141 && r<=141) { return R21.Priority(); } 
  if (r>=142 && r<=142) { return R22.Priority(); } 
  if (r>=143 && r<=143) { return R23.Priority(); } 
  if (r>=144 && r<=144) { return R24.Priority(); } 
  if (r>=145 && r<=145) { return R25.Priority(); } 
  if (r>=146 && r<=146) { return R26.Priority(); } 
  if (r>=147 && r<=147) { return R27.Priority(); } 
  if (r>=148 && r<=148) { return R28.Priority(); } 
  if (r>=149 && r<=149) { return R29.Priority(); } 
  if (r>=150 && r<=150) { return R30.Priority(); } 
  if (r>=151 && r<=151) { return R31.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=15) return R0.Name(r-0);
  if (r>=16 && r<=31) return R1.Name(r-16);
  if (r>=32 && r<=47) return R2.Name(r-32);
  if (r>=48 && r<=63) return R3.Name(r-48);
  if (r>=64 && r<=79) return R4.Name(r-64);
  if (r>=80 && r<=95) return R5.Name(r-80);
  if (r>=96 && r<=111) return R6.Name(r-96);
  if (r>=112 && r<=127) return R7.Name(r-112);
  if (r>=128 && r<=128) return R8.Name(r-128);
  if (r>=129 && r<=129) return R9.Name(r-129);
  if (r>=130 && r<=130) return R10.Name(r-130);
  if (r>=131 && r<=131) return R11.Name(r-131);
  if (r>=132 && r<=132) return R12.Name(r-132);
  if (r>=133 && r<=133) return R13.Name(r-133);
  if (r>=134 && r<=134) return R14.Name(r-134);
  if (r>=135 && r<=135) return R15.Name(r-135);
  if (r>=136 && r<=136) return R16.Name(r-136);
  if (r>=137 && r<=137) return R17.Name(r-137);
  if (r>=138 && r<=138) return R18.Name(r-138);
  if (r>=139 && r<=139) return R19.Name(r-139);
  if (r>=140 && r<=140) return R20.Name(r-140);
  if (r>=141 && r<=141) return R21.Name(r-141);
  if (r>=142 && r<=142) return R22.Name(r-142);
  if (r>=143 && r<=143) return R23.Name(r-143);
  if (r>=144 && r<=144) return R24.Name(r-144);
  if (r>=145 && r<=145) return R25.Name(r-145);
  if (r>=146 && r<=146) return R26.Name(r-146);
  if (r>=147 && r<=147) return R27.Name(r-147);
  if (r>=148 && r<=148) return R28.Name(r-148);
  if (r>=149 && r<=149) return R29.Name(r-149);
  if (r>=150 && r<=150) return R30.Name(r-150);
  if (r>=151 && r<=151) return R31.Name(r-151);
  return NULL;
}
};
const unsigned numrules = 152;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 152


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
mu_roleHost[1].mu_st = mu_Host1;
mu_roleHost[1].mu_commit = mu_false;
mu_roleHost[1].mu_r = mu_anyNonce;
mu_roleHost[1].mu_HostIP = mu_anyNonce;
mu_roleHost[1].mu_hostipsk = mu_anyNonce;
mu_roleHost[1].mu_Server = mu_anyAgent;
mu_roleGateway[1].mu_Host = mu_HostID;
mu_roleGateway[1].mu_Server = mu_ServerIP;
mu_roleGateway[1].mu_Gateway = mu_GatewayIP;
mu_roleGateway[1].mu_st = mu_Gateway1;
mu_roleGateway[1].mu_commit = mu_false;
mu_roleGateway[1].mu_r = mu_anyNonce;
mu_roleGateway[1].mu_HostIP = mu_anyNonce;
mu_roleGateway[1].mu_hostipsk = mu_anyNonce;
mu_roleServer[1].mu_Host = mu_HostID;
mu_roleServer[1].mu_Gateway = mu_GatewayIP;
mu_roleServer[1].mu_Server = mu_ServerIP;
mu_roleServer[1].mu_r = mu_Na;
mu_roleServer[1].mu_HostIP = mu_HostIP;
mu_roleServer[1].mu_hostipsk = mu_secSK;
mu_roleServer[1].mu_st = mu_Server1;
mu_roleServer[1].mu_commit = mu_false;
{
for(int mu_i = 1; mu_i <= 10; mu_i++) {
mu_ch[mu_i].mu_empty = mu_true;
};
};
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
mu_msgs[mu_i].mu_msgType = mu_null;
mu_msgs[mu_i].mu_length = 0;
};
};
mu_msg_end = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
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
mu_pat8Set.mu_content[mu_i] = 0;
mu_sPat8Set.mu_content[mu_i] = 0;
mu_pat9Set.mu_content[mu_i] = 0;
mu_sPat9Set.mu_content[mu_i] = 0;
mu_pat10Set.mu_content[mu_i] = 0;
mu_sPat10Set.mu_content[mu_i] = 0;
mu_pat11Set.mu_content[mu_i] = 0;
mu_sPat11Set.mu_content[mu_i] = 0;
mu_pat12Set.mu_content[mu_i] = 0;
mu_sPat12Set.mu_content[mu_i] = 0;
mu_pat13Set.mu_content[mu_i] = 0;
mu_sPat13Set.mu_content[mu_i] = 0;
mu_pat14Set.mu_content[mu_i] = 0;
mu_sPat14Set.mu_content[mu_i] = 0;
};
};
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
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
mu_pat8Set.mu_length = 0;
mu_sPat8Set.mu_length = 0;
mu_pat9Set.mu_length = 0;
mu_sPat9Set.mu_length = 0;
mu_pat10Set.mu_length = 0;
mu_sPat10Set.mu_length = 0;
mu_pat11Set.mu_length = 0;
mu_sPat11Set.mu_length = 0;
mu_pat12Set.mu_length = 0;
mu_sPat12Set.mu_length = 0;
mu_pat13Set.mu_length = 0;
mu_sPat13Set.mu_length = 0;
mu_pat14Set.mu_length = 0;
mu_sPat14Set.mu_length = 0;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleHost[mu_i].mu_Host;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_msg_end;
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
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_msg_end;
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
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat5 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_Host, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat5 ( mu_roleServer[mu_i].mu_Host, mu_roleServer[mu_i].mu_Host, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat9 ( mu_roleGateway[mu_i].mu_r, mu_roleGateway[mu_i].mu_Server, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat9 ( mu_roleHost[mu_i].mu_r, mu_roleHost[mu_i].mu_Server, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat9 ( mu_roleGateway[mu_i].mu_r, mu_roleGateway[mu_i].mu_Host, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat9 ( mu_roleServer[mu_i].mu_r, mu_roleServer[mu_i].mu_Host, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat14 ( mu_roleGateway[mu_i].mu_HostIP, mu_roleGateway[mu_i].mu_hostipsk, mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_Server, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat14 ( mu_roleHost[mu_i].mu_HostIP, mu_roleHost[mu_i].mu_hostipsk, mu_roleHost[mu_i].mu_Host, mu_roleHost[mu_i].mu_Server, mu_gnum );
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
int mu__invariant_476() // Invariant "auth1"
{
bool mu__quant477; 
mu__quant477 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr478;
  if (!((mu_roleHost[mu_i].mu_commit) == (mu_true))) mu__boolexpr478 = TRUE ;
  else {
bool mu__quant479; 
mu__quant479 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleServer[mu_i].mu_r) == (mu_roleHost[mu_j].mu_r)) )
  { mu__quant479 = TRUE; break; }
};
};
  mu__boolexpr478 = (mu__quant479) ; 
}
if ( !(mu__boolexpr478) )
  { mu__quant477 = FALSE; break; }
};
};
return mu__quant477;
};

bool mu__condition_480() // Condition for Rule "auth1"
{
  return mu__invariant_476( );
}

/**** end rule declaration ****/

int mu__invariant_481() // Invariant "sec1"
{
bool mu__quant482; 
mu__quant482 = TRUE;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr483;
bool mu__boolexpr484;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = ((mu_msgs[mu_i].mu_noncePart) == (mu_secSK)) ; 
}
  if (!(mu__boolexpr484)) mu__boolexpr483 = TRUE ;
  else {
  mu__boolexpr483 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr483) )
  { mu__quant482 = FALSE; break; }
};
};
return mu__quant482;
};

bool mu__condition_485() // Condition for Rule "sec1"
{
  return mu__invariant_481( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"sec1", &mu__condition_485, NULL, },
{"auth1", &mu__condition_480, NULL, },
};
const unsigned short numinvariants = 2;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
emit:NoScalarset
Spy_known:NoScalarset
sPat14Set:NoScalarset
sPat13Set:NoScalarset
sPat12Set:NoScalarset
sPat11Set:NoScalarset
sPat10Set:NoScalarset
sPat9Set:NoScalarset
sPat8Set:NoScalarset
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
pat8Set:NoScalarset
pat9Set:NoScalarset
pat10Set:NoScalarset
pat11Set:NoScalarset
pat12Set:NoScalarset
pat13Set:NoScalarset
pat14Set:NoScalarset
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
        mu_sPat14Set.MultisetSort();
        mu_sPat13Set.MultisetSort();
        mu_sPat12Set.MultisetSort();
        mu_sPat11Set.MultisetSort();
        mu_sPat10Set.MultisetSort();
        mu_sPat9Set.MultisetSort();
        mu_sPat8Set.MultisetSort();
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
        mu_pat8Set.MultisetSort();
        mu_pat9Set.MultisetSort();
        mu_pat10Set.MultisetSort();
        mu_pat11Set.MultisetSort();
        mu_pat12Set.MultisetSort();
        mu_pat13Set.MultisetSort();
        mu_pat14Set.MultisetSort();
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
  for (j=0; j<1001; j++)
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
  for (j=0; j<1001; j++)
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
  for (j=0; j<1001; j++)
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
  for (j=0; j<1001; j++)
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
              mu_sPat14Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat14Set.MultisetSort();
              mu_sPat13Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat13Set.MultisetSort();
              mu_sPat12Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat12Set.MultisetSort();
              mu_sPat11Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat11Set.MultisetSort();
              mu_sPat10Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat10Set.MultisetSort();
              mu_sPat9Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat9Set.MultisetSort();
              mu_sPat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat8Set.MultisetSort();
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
              mu_pat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_pat9Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat9Set.MultisetSort();
              mu_pat10Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat10Set.MultisetSort();
              mu_pat11Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat11Set.MultisetSort();
              mu_pat12Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat12Set.MultisetSort();
              mu_pat13Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat13Set.MultisetSort();
              mu_pat14Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat14Set.MultisetSort();
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
          mu_sPat14Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat14Set.MultisetSort();
          mu_sPat13Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat13Set.MultisetSort();
          mu_sPat12Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat12Set.MultisetSort();
          mu_sPat11Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat11Set.MultisetSort();
          mu_sPat10Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat10Set.MultisetSort();
          mu_sPat9Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat9Set.MultisetSort();
          mu_sPat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat8Set.MultisetSort();
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
          mu_pat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat8Set.MultisetSort();
          mu_pat9Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat9Set.MultisetSort();
          mu_pat10Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat10Set.MultisetSort();
          mu_pat11Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat11Set.MultisetSort();
          mu_pat12Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat12Set.MultisetSort();
          mu_pat13Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat13Set.MultisetSort();
          mu_pat14Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat14Set.MultisetSort();
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
              mu_sPat14Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat14Set.MultisetSort();
              mu_sPat13Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat13Set.MultisetSort();
              mu_sPat12Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat12Set.MultisetSort();
              mu_sPat11Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat11Set.MultisetSort();
              mu_sPat10Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat10Set.MultisetSort();
              mu_sPat9Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat9Set.MultisetSort();
              mu_sPat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat8Set.MultisetSort();
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
              mu_pat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_pat9Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat9Set.MultisetSort();
              mu_pat10Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat10Set.MultisetSort();
              mu_pat11Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat11Set.MultisetSort();
              mu_pat12Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat12Set.MultisetSort();
              mu_pat13Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat13Set.MultisetSort();
              mu_pat14Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat14Set.MultisetSort();
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
      mu_sPat14Set.MultisetSort();
      mu_sPat13Set.MultisetSort();
      mu_sPat12Set.MultisetSort();
      mu_sPat11Set.MultisetSort();
      mu_sPat10Set.MultisetSort();
      mu_sPat9Set.MultisetSort();
      mu_sPat8Set.MultisetSort();
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
      mu_pat8Set.MultisetSort();
      mu_pat9Set.MultisetSort();
      mu_pat10Set.MultisetSort();
      mu_pat11Set.MultisetSort();
      mu_pat12Set.MultisetSort();
      mu_pat13Set.MultisetSort();
      mu_pat14Set.MultisetSort();
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
        mu_sPat14Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat14Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat13Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat13Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat12Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat12Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat11Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat11Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat10Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat10Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat9Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat9Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat8Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat8Set.MultisetSort();
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
        mu_pat8Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat8Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat9Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat9Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat10Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat10Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat11Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat11Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat12Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat12Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat13Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat13Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat14Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat14Set.MultisetSort();
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
