/******************************
  Program "outputs/result.m" compiled by "Caching Murphi Release 5.4.9.1"

  Murphi Last Compiled date: "Aug  7 2019"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9.1"
#define MURPHI_DATE "Aug  7 2019"
#define PROTOCOL_NAME "outputs/result"
#define BITS_IN_WORLD 13704
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
  mu_1_indexType (const char *name, int os): mu__byte(0, 30, 5, name, os) {};
  mu_1_indexType (void): mu__byte(0, 30, 5) {};
  mu_1_indexType (int val): mu__byte(0, 30, 5, "Parameter or function result.", 0)
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
  mu_1_indexType array[ 31 ];
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
    if ( ( index >= 0 ) && ( index <= 30 ) )
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
    for (int i = 0; i < 31; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<31; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<31; i++) {
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
    for (int i=0; i<31; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<31; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 31; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 31; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 31; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 31; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 31; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 31; i++)
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
  for(int i = 0; i < 31; i++) {
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
  if (name) mu_length.set_self_2(name, ".length", os + 248 ); else mu_length.set_self_2(NULL, NULL, 0);
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
  mu_1_Message array[ 31 ];
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
    if ( ( index >= 0 ) && ( index <= 30 ) )
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
    for (int i = 0; i < 31; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<31; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<31; i++) {
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
    for (int i=0; i<31; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<31; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 31; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 31; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 31; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 31; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 31; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 31; i++)
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
  for(int i = 0; i < 31; i++) {
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
  mu_0_boolean array[ 31 ];
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
    if ( ( index >= 0 ) && ( index <= 30 ) )
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
    for (int i = 0; i < 31; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<31; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<31; i++) {
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
    for (int i=0; i<31; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<31; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 31; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 31; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 31; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 31; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 31; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 31; i++)
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
  for(int i = 0; i < 31; i++) {
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
  mu_0_boolean array[ 31 ];
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
    if ( ( index >= 0 ) && ( index <= 30 ) )
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
    for (int i = 0; i < 31; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<31; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<31; i++) {
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
    for (int i=0; i<31; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<31; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 31; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 31; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 31; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 31; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 31; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 31; i++)
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
  for(int i = 0; i < 31; i++) {
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
const int mu_totalFact = 30;
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
mu_1__type_3 mu_roleHost("roleHost",2320);

/*** Variable declaration ***/
mu_1__type_4 mu_roleGateway("roleGateway",2432);

/*** Variable declaration ***/
mu_1__type_5 mu_roleServer("roleServer",2544);

/*** Variable declaration ***/
mu_1__type_6 mu_msgs("msgs",2656);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",9104);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",9112);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",9368);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",9624);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",9880);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",10136);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",10392);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",10648);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",10904);

/*** Variable declaration ***/
mu_1_msgSet mu_pat9Set("pat9Set",11160);

/*** Variable declaration ***/
mu_1_msgSet mu_pat10Set("pat10Set",11416);

/*** Variable declaration ***/
mu_1_msgSet mu_pat11Set("pat11Set",11672);

/*** Variable declaration ***/
mu_1_msgSet mu_pat12Set("pat12Set",11928);

/*** Variable declaration ***/
mu_1_msgSet mu_pat13Set("pat13Set",12184);

/*** Variable declaration ***/
mu_1_msgSet mu_pat14Set("pat14Set",12440);

/*** Variable declaration ***/
mu_1_msgSet mu_pat15Set("pat15Set",12696);

/*** Variable declaration ***/
mu_1_msgSet mu_pat16Set("pat16Set",12952);

/*** Variable declaration ***/
mu_1__type_7 mu_Spy_known("Spy_known",13208);

/*** Variable declaration ***/
mu_1__type_8 mu_emit("emit",13456);

void mu_lookAddPat1(const mu_1_AgentType& mu_Host, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
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

void mu_lookAddPat2(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_Gateway, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Gateway, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr9;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr9 )
{
bool mu__boolexpr10;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
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

void mu_isPat2(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr11;
  if (!(mu_flagPart1)) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = (mu_flagPart2) ; 
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

void mu_lookAddPat3(const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
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

void mu_lookAddPat4(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_Gateway, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat2 ( mu_Host, mu_Gateway, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_HostSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
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

void mu_lookAddPat5(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_Gateway, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Gateway, mu_msg2, mu_i2 );
mu_lookAddPat4 ( mu_Host, mu_Gateway, mu_HostSk, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr15;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr15 )
{
bool mu__boolexpr16;
bool mu__boolexpr17;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr16 )
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

void mu_isPat5(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat4 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr18;
bool mu__boolexpr19;
  if (!(mu_flagPart1)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = (mu_flagPart3) ; 
}
if ( mu__boolexpr18 )
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

void mu_lookAddPat6(const mu_1_NonceType& mu_r, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
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

void mu_lookAddPat7(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_Server, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_r, mu_msg2, mu_i2 );
mu_lookAddPat1 ( mu_Server, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr20;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr20 )
{
bool mu__boolexpr21;
bool mu__boolexpr22;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
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
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr23;
bool mu__boolexpr24;
  if (!(mu_flagPart1)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = (mu_flagPart3) ; 
}
if ( mu__boolexpr23 )
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

void mu_lookAddPat8(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_Server, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat7 ( mu_Host, mu_r, mu_Server, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_ServerSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr25;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr25 )
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
bool mu__boolexpr26;
  if (!(mu_flagPart1)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = (mu_flagPart2) ; 
}
if ( mu__boolexpr26 )
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

void mu_lookAddPat9(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_Server, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",208);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",416);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",624);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",832);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",840);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",848);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",856);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",864);

mu_index = 0;
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_r, mu_msg2, mu_i2 );
mu_lookAddPat1 ( mu_Server, mu_msg3, mu_i3 );
mu_lookAddPat8 ( mu_Host, mu_r, mu_Server, mu_ServerSk, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr27;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr27 )
{
bool mu__boolexpr28;
bool mu__boolexpr29;
bool mu__boolexpr30;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr28 )
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
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
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

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat8 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr31;
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!(mu_flagPart1)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = (mu_flagPart4) ; 
}
if ( mu__boolexpr31 )
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

void mu_lookAddPat10(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_r, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr34;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr34 )
{
bool mu__boolexpr35;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr35 )
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

void mu_isPat10(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr36;
  if (!(mu_flagPart1)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = (mu_flagPart2) ; 
}
if ( mu__boolexpr36 )
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

void mu_lookAddPat11(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat10 ( mu_Host, mu_r, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_HostSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr37;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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
mu_isPat10 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr38;
  if (!(mu_flagPart1)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = (mu_flagPart2) ; 
}
if ( mu__boolexpr38 )
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

void mu_lookAddPat12(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_r, mu_msg2, mu_i2 );
mu_lookAddPat11 ( mu_Host, mu_r, mu_HostSk, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr39;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr39 )
{
bool mu__boolexpr40;
bool mu__boolexpr41;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr40 )
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

void mu_isPat12(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat11 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr42;
bool mu__boolexpr43;
  if (!(mu_flagPart1)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_flagPart3) ; 
}
if ( mu__boolexpr42 )
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

void mu_lookAddPat13(const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat6 ( mu_hostipsk, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_HostPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr44;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr44 )
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
mu_isPat6 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr45;
  if (!(mu_flagPart1)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = (mu_flagPart2) ; 
}
if ( mu__boolexpr45 )
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

void mu_lookAddPat14(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_HostIP, const mu_1_AgentType& mu_Gateway, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_Server, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",208);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",416);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",624);

/*** Variable declaration ***/
mu_1_Message mu_msg5("msg5",832);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1040);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1048);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1056);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",1064);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",1072);

/*** Variable declaration ***/
mu_1_indexType mu_i5("i5",1080);

mu_index = 0;
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_HostIP, mu_msg2, mu_i2 );
mu_lookAddPat1 ( mu_Gateway, mu_msg3, mu_i3 );
mu_lookAddPat13 ( mu_hostipsk, mu_HostPk, mu_msg4, mu_i4 );
mu_lookAddPat1 ( mu_Server, mu_msg5, mu_i5 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr46;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_msgs[mu_i].mu_length) == (5)) ; 
}
if ( mu__boolexpr46 )
{
bool mu__boolexpr47;
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_i5)) ; 
}
if ( mu__boolexpr47 )
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
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
if (mu_i5.isundefined())
  mu_msgs[mu_index].mu_concatPart[5].undefine();
else
  mu_msgs[mu_index].mu_concatPart[5] = mu_i5;
mu_msgs[mu_index].mu_length = 5;
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

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart5("flagPart5",40);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
mu_flagPart5 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat13 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[5]], mu_flagPart5 );
bool mu__boolexpr51;
bool mu__boolexpr52;
bool mu__boolexpr53;
bool mu__boolexpr54;
  if (!(mu_flagPart1)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = (mu_flagPart4) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = (mu_flagPart5) ; 
}
if ( mu__boolexpr51 )
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

void mu_lookAddPat15(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_HostIP, const mu_1_AgentType& mu_Gateway, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_Server, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat14 ( mu_Host, mu_HostIP, mu_Gateway, mu_hostipsk, mu_HostPk, mu_Server, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_ServerSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr55;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr55 )
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

void mu_isPat15(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat14 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr56;
  if (!(mu_flagPart1)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_flagPart2) ; 
}
if ( mu__boolexpr56 )
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

void mu_lookAddPat16(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_HostIP, const mu_1_AgentType& mu_Gateway, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_Server, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",208);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",416);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",624);

/*** Variable declaration ***/
mu_1_Message mu_msg5("msg5",832);

/*** Variable declaration ***/
mu_1_Message mu_msg6("msg6",1040);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1248);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1256);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1264);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",1272);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",1280);

/*** Variable declaration ***/
mu_1_indexType mu_i5("i5",1288);

/*** Variable declaration ***/
mu_1_indexType mu_i6("i6",1296);

mu_index = 0;
mu_lookAddPat1 ( mu_Host, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_HostIP, mu_msg2, mu_i2 );
mu_lookAddPat1 ( mu_Gateway, mu_msg3, mu_i3 );
mu_lookAddPat13 ( mu_hostipsk, mu_HostPk, mu_msg4, mu_i4 );
mu_lookAddPat1 ( mu_Server, mu_msg5, mu_i5 );
mu_lookAddPat15 ( mu_Host, mu_HostIP, mu_Gateway, mu_hostipsk, mu_HostPk, mu_Server, mu_ServerSk, mu_msg6, mu_i6 );
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr57;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_msgs[mu_i].mu_length) == (6)) ; 
}
if ( mu__boolexpr57 )
{
bool mu__boolexpr58;
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_i5)) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_msgs[mu_i].mu_concatPart[6]) == (mu_i6)) ; 
}
if ( mu__boolexpr58 )
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
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
if (mu_i5.isundefined())
  mu_msgs[mu_index].mu_concatPart[5].undefine();
else
  mu_msgs[mu_index].mu_concatPart[5] = mu_i5;
if (mu_i6.isundefined())
  mu_msgs[mu_index].mu_concatPart[6].undefine();
else
  mu_msgs[mu_index].mu_concatPart[6] = mu_i6;
mu_msgs[mu_index].mu_length = 6;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat16(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart5("flagPart5",40);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart6("flagPart6",48);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
mu_flagPart5 = mu_false;
mu_flagPart6 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat6 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat13 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[5]], mu_flagPart5 );
mu_isPat15 ( mu_msgs[mu_msg.mu_concatPart[6]], mu_flagPart6 );
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
bool mu__boolexpr66;
bool mu__boolexpr67;
  if (!(mu_flagPart1)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_flagPart4) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_flagPart5) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_flagPart6) ; 
}
if ( mu__boolexpr63 )
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

void mu_cons1(const mu_1_AgentType& mu_Host, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_Host, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_Gateway, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_Host, mu_Gateway, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct2(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_AgentType& mu_Gateway)
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
mu_Gateway = mu_msgNum2.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_HostSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_Gateway, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_Host, mu_Gateway, mu_HostSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct4(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_AgentType& mu_Gateway, mu_1_AgentType& mu_HostSk)
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
mu_Gateway = mu_msgNum2.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_AgentType& mu_Host, const mu_1_AgentType& mu_Gateway, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_Host, mu_Gateway, mu_HostSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct5(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_AgentType& mu_Gateway, mu_1_AgentType& mu_HostSk)
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
mu_Gateway = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_k = mu_msgs[mu_msgNum3.mu_aencKey].mu_k;
mu_HostSk = mu_k.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_NonceType& mu_r, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_r, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_Server, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_Host, mu_r, mu_Server, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct7(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_r, mu_1_AgentType& mu_Server)
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
mu_r = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_Server = mu_msgNum3.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons8(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_Server, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat8 ( mu_Host, mu_r, mu_Server, mu_ServerSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct8(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_r, mu_1_AgentType& mu_Server, mu_1_AgentType& mu_ServerSk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",224);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",640);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_ServerSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_msgNum3 = mu_msgs[mu_msg1.mu_concatPart[3]];
mu_Host = mu_msgNum1.mu_ag;
mu_r = mu_msgNum2.mu_noncePart;
mu_Server = mu_msgNum3.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons9(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_Server, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat9 ( mu_Host, mu_r, mu_Server, mu_ServerSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct9(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_r, mu_1_AgentType& mu_Server, mu_1_AgentType& mu_ServerSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",208);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",416);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",624);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",832);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Host = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_r = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_Server = mu_msgNum3.mu_ag;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_k = mu_msgs[mu_msgNum4.mu_aencKey].mu_k;
mu_ServerSk = mu_k.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons10(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat10 ( mu_Host, mu_r, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct10(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_r)
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
mu_r = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons11(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat11 ( mu_Host, mu_r, mu_HostSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct11(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_r, mu_1_AgentType& mu_HostSk)
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
mu_r = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons12(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_r, const mu_1_AgentType& mu_HostSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat12 ( mu_Host, mu_r, mu_HostSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct12(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_r, mu_1_AgentType& mu_HostSk)
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
mu_r = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_k = mu_msgs[mu_msgNum3.mu_aencKey].mu_k;
mu_HostSk = mu_k.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons13(const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat13 ( mu_hostipsk, mu_HostPk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct13(mu_1_Message& mu_msg, mu_1_NonceType& mu_hostipsk, mu_1_AgentType& mu_HostPk)
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
mu_HostPk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_hostipsk = mu_msg1.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons14(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_HostIP, const mu_1_AgentType& mu_Gateway, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_Server, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat14 ( mu_Host, mu_HostIP, mu_Gateway, mu_hostipsk, mu_HostPk, mu_Server, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct14(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_HostIP, mu_1_AgentType& mu_Gateway, mu_1_NonceType& mu_hostipsk, mu_1_AgentType& mu_HostPk, mu_1_AgentType& mu_Server)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",208);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",416);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",624);

/*** Variable declaration ***/
mu_1_Message mu_msgNum5("msgNum5",832);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1040);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Host = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_HostIP = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_Gateway = mu_msgNum3.mu_ag;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_k = mu_msgs[mu_msgNum4.mu_aencKey].mu_k;
mu_HostPk = mu_k.mu_ag;
mu_msgNum5 = mu_msgs[mu_msg.mu_concatPart[5]];
mu_Server = mu_msgNum5.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons15(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_HostIP, const mu_1_AgentType& mu_Gateway, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_Server, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat15 ( mu_Host, mu_HostIP, mu_Gateway, mu_hostipsk, mu_HostPk, mu_Server, mu_ServerSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct15(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_HostIP, mu_1_AgentType& mu_Gateway, mu_1_NonceType& mu_hostipsk, mu_1_AgentType& mu_HostPk, mu_1_AgentType& mu_Server, mu_1_AgentType& mu_ServerSk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",224);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",640);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",848);

/*** Variable declaration ***/
mu_1_Message mu_msgNum5("msgNum5",1056);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_ServerSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_msgNum3 = mu_msgs[mu_msg1.mu_concatPart[3]];
mu_msgNum4 = mu_msgs[mu_msg1.mu_concatPart[4]];
mu_msgNum5 = mu_msgs[mu_msg1.mu_concatPart[5]];
mu_Host = mu_msgNum1.mu_ag;
mu_HostIP = mu_msgNum2.mu_noncePart;
mu_Gateway = mu_msgNum3.mu_ag;
mu_Server = mu_msgNum5.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons16(const mu_1_AgentType& mu_Host, const mu_1_NonceType& mu_HostIP, const mu_1_AgentType& mu_Gateway, const mu_1_NonceType& mu_hostipsk, const mu_1_AgentType& mu_HostPk, const mu_1_AgentType& mu_Server, const mu_1_AgentType& mu_ServerSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat16 ( mu_Host, mu_HostIP, mu_Gateway, mu_hostipsk, mu_HostPk, mu_Server, mu_ServerSk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct16(mu_1_Message& mu_msg, mu_1_AgentType& mu_Host, mu_1_NonceType& mu_HostIP, mu_1_AgentType& mu_Gateway, mu_1_NonceType& mu_hostipsk, mu_1_AgentType& mu_HostPk, mu_1_AgentType& mu_Server, mu_1_AgentType& mu_ServerSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",208);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",416);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",624);

/*** Variable declaration ***/
mu_1_Message mu_msgNum5("msgNum5",832);

/*** Variable declaration ***/
mu_1_Message mu_msgNum6("msgNum6",1040);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1248);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Host = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_HostIP = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_Gateway = mu_msgNum3.mu_ag;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_k = mu_msgs[mu_msgNum4.mu_aencKey].mu_k;
mu_HostPk = mu_k.mu_ag;
mu_msgNum5 = mu_msgs[mu_msg.mu_concatPart[5]];
mu_Server = mu_msgNum5.mu_ag;
mu_msgNum6 = mu_msgs[mu_msg.mu_concatPart[6]];
mu_k = mu_msgs[mu_msgNum6.mu_aencKey].mu_k;
mu_ServerSk = mu_k.mu_ag;
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
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
bool mu__boolexpr72;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr72) mu__boolexpr71 = TRUE ;
  else {
bool mu__boolexpr73;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr71 = (mu__boolexpr73) ; 
}
  if (mu__boolexpr71) mu__boolexpr70 = TRUE ;
  else {
bool mu__boolexpr74;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr74 = FALSE ;
  else {
bool mu__boolexpr75;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr74 = (mu__boolexpr75) ; 
}
  mu__boolexpr70 = (mu__boolexpr74) ; 
}
  if (mu__boolexpr70) mu__boolexpr69 = TRUE ;
  else {
bool mu__boolexpr76;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr76 = FALSE ;
  else {
bool mu__boolexpr77;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr76 = (mu__boolexpr77) ; 
}
  mu__boolexpr69 = (mu__boolexpr76) ; 
}
  if (mu__boolexpr69) mu__boolexpr68 = TRUE ;
  else {
bool mu__boolexpr78;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr78 = FALSE ;
  else {
bool mu__boolexpr79;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr78 = (mu__boolexpr79) ; 
}
  mu__boolexpr68 = (mu__boolexpr78) ; 
}
if ( mu__boolexpr68 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr80;
  if (!((mu_msg.mu_msgType) == (mu_concat))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_msg.mu_length) == (mu_msgs[mu_i].mu_length)) ; 
}
if ( mu__boolexpr80 )
{
mu_j = mu_msg.mu_length;
mu_flag = mu_true;
{
  bool mu__while_expr_82;  mu__while_expr_82 = (mu_j) > (0);
int mu__counter_81 = 0;
while (mu__while_expr_82) {
if ( ++mu__counter_81 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msg.mu_concatPart[mu_j]) != (mu_msgs[mu_i].mu_concatPart[mu_j]) )
{
mu_flag = mu_false;
}
mu_j = (mu_j) - (1);
};
mu__while_expr_82 = (mu_j) > (0);
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
  bool mu__while_expr_84;  mu__while_expr_84 = (mu_i) < (mu_msg.mu_length);
int mu__counter_83 = 0;
while (mu__while_expr_84) {
if ( ++mu__counter_83 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ",";
mu_i = (mu_i) + (1);
};
mu__while_expr_84 = (mu_i) < (mu_msg.mu_length);
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
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr85;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_agent))) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
if ( mu__boolexpr85 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr86;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
if ( mu__boolexpr86 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr87;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr87 = FALSE ;
  else {
bool mu__boolexpr88;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr87 = (mu__boolexpr88) ; 
}
if ( mu__boolexpr87 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr89;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_aenc))) mu__boolexpr89 = FALSE ;
  else {
bool mu__boolexpr90;
  if (!((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg)) ; 
}
  mu__boolexpr89 = (mu__boolexpr90) ; 
}
if ( mu__boolexpr89 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr91;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_senc))) mu__boolexpr91 = FALSE ;
  else {
bool mu__boolexpr92;
  if (!((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg)) ; 
}
  mu__boolexpr91 = (mu__boolexpr92) ; 
}
if ( mu__boolexpr91 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr93;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr93 = FALSE ;
  else {
bool mu__boolexpr94;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msg.mu_concatPart[1]))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msg.mu_concatPart[2])) ; 
}
  mu__boolexpr93 = (mu__boolexpr94) ; 
}
if ( mu__boolexpr93 )
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

mu_1_indexType mu_construct2By11(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr95;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr95 )
{
bool mu__boolexpr96;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr96 )
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
	Error.Error("The end of function construct2By11 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct4By23(const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr97;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo2))) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr97 )
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

mu_1_indexType mu_construct5By114(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr98;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr98 )
{
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr99 )
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
	Error.Error("The end of function construct5By114 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By161(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr101;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr101 )
{
bool mu__boolexpr102;
bool mu__boolexpr103;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr102 )
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
	Error.Error("The end of function construct7By161 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct8By73(const mu_1_indexType& mu_msgNo7,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr104;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo7))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr104 )
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

mu_1_indexType mu_construct9By1618(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr105;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr105 )
{
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr106 )
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
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
mu_msgs[mu_index].mu_length = 4;
}
return mu_index;
	Error.Error("The end of function construct9By1618 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct10By16(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
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
	Error.Error("The end of function construct10By16 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct11By103(const mu_1_indexType& mu_msgNo10,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr111;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo10))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr111 )
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
if (mu_msgNo10.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo10;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo3;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct11By103 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct12By1611(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr112;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr112 )
{
bool mu__boolexpr113;
bool mu__boolexpr114;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr113 )
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
	Error.Error("The end of function construct12By1611 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct13By63(const mu_1_indexType& mu_msgNo6,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr115;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo6))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
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
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo3;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct13By63 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct14By161131(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4,const mu_1_indexType& mu_msgNo5)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr116;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_msgs[mu_i].mu_length) == (5)) ; 
}
if ( mu__boolexpr116 )
{
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_msgNo5)) ; 
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
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
if (mu_msgNo5.isundefined())
  mu_msgs[mu_index].mu_concatPart[5].undefine();
else
  mu_msgs[mu_index].mu_concatPart[5] = mu_msgNo5;
mu_msgs[mu_index].mu_length = 5;
}
return mu_index;
	Error.Error("The end of function construct14By161131 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct15By143(const mu_1_indexType& mu_msgNo14,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr121;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo14))) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr121 )
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
if (mu_msgNo14.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo14;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo3;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct15By143 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct16By16113115(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4,const mu_1_indexType& mu_msgNo5,const mu_1_indexType& mu_msgNo6)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr122;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_msgs[mu_i].mu_length) == (6)) ; 
}
if ( mu__boolexpr122 )
{
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_msgNo5)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_msgs[mu_i].mu_concatPart[6]) == (mu_msgNo6)) ; 
}
if ( mu__boolexpr123 )
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
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
if (mu_msgNo5.isundefined())
  mu_msgs[mu_index].mu_concatPart[5].undefine();
else
  mu_msgs[mu_index].mu_concatPart[5] = mu_msgNo5;
if (mu_msgNo6.isundefined())
  mu_msgs[mu_index].mu_concatPart[6].undefine();
else
  mu_msgs[mu_index].mu_concatPart[6] = mu_msgNo6;
mu_msgs[mu_index].mu_length = 6;
}
return mu_index;
	Error.Error("The end of function construct16By16113115 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 15; mu_i++) {
bool mu__boolexpr128;
  if (!((mu_msgNo) != (0))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr128 )
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

bool mu__boolexpr129;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr129 )
{
bool mu__boolexpr130;
bool mu__boolexpr131;
  if (!((mu_m1.mu_ag) != (mu_anyAgent))) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_m2.mu_ag) != (mu_anyAgent)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (mu_matchAgent( mu_m1.mu_ag, mu_m2.mu_ag )) ; 
}
return mu__boolexpr130;
}
else
{
bool mu__boolexpr132;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr132 )
{
bool mu__boolexpr133;
bool mu__boolexpr134;
  if (!((mu_m1.mu_noncePart) != (mu_anyNonce))) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_m2.mu_noncePart) != (mu_anyNonce)) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_matchNonce( mu_m1.mu_noncePart, mu_m2.mu_noncePart )) ; 
}
return mu__boolexpr133;
}
else
{
bool mu__boolexpr135;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr135 )
{
bool mu__boolexpr136;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr136;
}
else
{
bool mu__boolexpr137;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr137 )
{
bool mu__boolexpr138;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr138;
}
else
{
bool mu__boolexpr139;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr139 )
{
bool mu__boolexpr140;
  if (!(mu_match( mu_msgs[mu_m1.mu_sencMsg], mu_msgs[mu_m2.mu_sencMsg] ))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (mu_match( mu_msgs[mu_m1.mu_sencKey], mu_msgs[mu_m2.mu_sencKey] )) ; 
}
return mu__boolexpr140;
}
else
{
bool mu__boolexpr141;
bool mu__boolexpr142;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr141 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr145;
  if (!((mu_i) > (0))) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_144;  mu__while_expr_144 = mu__boolexpr145;
int mu__counter_143 = 0;
while (mu__while_expr_144) {
if ( ++mu__counter_143 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr146;
  if (!(mu_concatFlag)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr146;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr147;
  if (!((mu_i) > (0))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_concatFlag) ; 
}
mu__while_expr_144 = mu__boolexpr147;
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
  mu_pat8Set.clear();
  mu_pat9Set.clear();
  mu_pat10Set.clear();
  mu_pat11Set.clear();
  mu_pat12Set.clear();
  mu_pat13Set.clear();
  mu_pat14Set.clear();
  mu_pat15Set.clear();
  mu_pat16Set.clear();
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
  mu_pat8Set.undefine();
  mu_pat9Set.undefine();
  mu_pat10Set.undefine();
  mu_pat11Set.undefine();
  mu_pat12Set.undefine();
  mu_pat13Set.undefine();
  mu_pat14Set.undefine();
  mu_pat15Set.undefine();
  mu_pat16Set.undefine();
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
  mu_pat8Set.reset();
  mu_pat9Set.reset();
  mu_pat10Set.reset();
  mu_pat11Set.reset();
  mu_pat12Set.reset();
  mu_pat13Set.reset();
  mu_pat14Set.reset();
  mu_pat15Set.reset();
  mu_pat16Set.reset();
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
  mu_pat8Set.print();
  mu_pat9Set.print();
  mu_pat10Set.print();
  mu_pat11Set.print();
  mu_pat12Set.print();
  mu_pat13Set.print();
  mu_pat14Set.print();
  mu_pat15Set.print();
  mu_pat16Set.print();
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
  mu_pat8Set.print_statistic();
  mu_pat9Set.print_statistic();
  mu_pat10Set.print_statistic();
  mu_pat11Set.print_statistic();
  mu_pat12Set.print_statistic();
  mu_pat13Set.print_statistic();
  mu_pat14Set.print_statistic();
  mu_pat15Set.print_statistic();
  mu_pat16Set.print_statistic();
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
    mu_pat8Set.print_diff(prevstate);
    mu_pat9Set.print_diff(prevstate);
    mu_pat10Set.print_diff(prevstate);
    mu_pat11Set.print_diff(prevstate);
    mu_pat12Set.print_diff(prevstate);
    mu_pat13Set.print_diff(prevstate);
    mu_pat14Set.print_diff(prevstate);
    mu_pat15Set.print_diff(prevstate);
    mu_pat16Set.print_diff(prevstate);
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
  mu_pat8Set.to_state( newstate );
  mu_pat9Set.to_state( newstate );
  mu_pat10Set.to_state( newstate );
  mu_pat11Set.to_state( newstate );
  mu_pat12Set.to_state( newstate );
  mu_pat13Set.to_state( newstate );
  mu_pat14Set.to_state( newstate );
  mu_pat15Set.to_state( newstate );
  mu_pat16Set.to_state( newstate );
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
    static mu_1_msgLen mu_i5;
    mu_i5.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 16, i5:%s, i4:%s, i3:%s, i2:%s, i1:%s, i0:%s", mu_i5.Name(), mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i5;
    mu_i5.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
bool mu__boolexpr155;
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_i3) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_i4) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_i5) <= (mu_pat15Set.mu_length)) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i5]]) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = (!(mu_Spy_known[mu_construct16By16113115( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4], mu_pat15Set.mu_content[mu_i5] )])) ; 
}
    return mu__boolexpr148;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_msgLen mu_i5;
    mu_i5.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 16777216 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_i3) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_i4) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_i5) <= (mu_pat15Set.mu_length)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i5]]) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (!(mu_Spy_known[mu_construct16By16113115( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4], mu_pat15Set.mu_content[mu_i5] )])) ; 
}
	      if (mu__boolexpr160) {
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
    mu_i5.value((r % 16) + 0);
    r = r / 16;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
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
    static mu_1_msgLen mu_i5;
    mu_i5.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
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

mu_concatMsgNo = mu_construct16By16113115( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4], mu_pat15Set.mu_content[mu_i5] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat16Set, mu_concatMsgNo )) )
{
mu_pat16Set.mu_length = (mu_pat16Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat16Set.mu_content[mu_pat16Set.mu_length].undefine();
else
  mu_pat16Set.mu_content[mu_pat16Set.mu_length] = mu_concatMsgNo;
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
    return tsprintf("deconcat 16, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
  if (!((mu_i) <= (mu_pat16Set.mu_length))) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
bool mu__boolexpr175;
  if (!(mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = (mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr172 = (!(mu__boolexpr175)) ; 
}
    return mu__boolexpr172;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16777216;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 16777232 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr176;
bool mu__boolexpr177;
bool mu__boolexpr178;
  if (!((mu_i) <= (mu_pat16Set.mu_length))) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
bool mu__boolexpr179;
  if (!(mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr176 = (!(mu__boolexpr179)) ; 
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
    r = what_rule - 16777216;
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
mu_1_indexType mu_msgPat6("msgPat6",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2];
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
    return tsprintf("encrypt 15, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if (!((mu_i) <= (mu_pat14Set.mu_length))) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (!(mu_Spy_known[mu_construct15By143( mu_pat14Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr180;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16777232;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 16777488 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
  if (!((mu_i) <= (mu_pat14Set.mu_length))) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = (!(mu_Spy_known[mu_construct15By143( mu_pat14Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
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
    r = what_rule - 16777232;
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

if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct15By143( mu_pat14Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat15Set, mu_encMsgNo )) )
{
mu_pat15Set.mu_length = (mu_pat15Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat15Set.mu_content[mu_pat15Set.mu_length].undefine();
else
  mu_pat15Set.mu_content[mu_pat15Set.mu_length] = mu_encMsgNo;
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
    return tsprintf("decrypt 15, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
  if (!((mu_i) <= (mu_pat15Set.mu_length))) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = ((mu_pat15Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (!(mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr192;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16777488;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 16777504 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr195;
bool mu__boolexpr196;
bool mu__boolexpr197;
  if (!((mu_i) <= (mu_pat15Set.mu_length))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_pat15Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = (!(mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr195) {
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
    r = what_rule - 16777488;
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
mu_1_indexType mu_msgPat14("msgPat14",208);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat14("flag_pat14",216);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat14 = mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_aencMsg;
mu_isPat14 ( mu_msgs[mu_msgPat14], mu_flag_pat14 );
if ( mu_flag_pat14 )
{
if ( !(mu_exist( mu_pat14Set, mu_msgPat14 )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_msgPat14.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_msgPat14;
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
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 14, i4:%s, i3:%s, i2:%s, i1:%s, i0:%s", mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
bool mu__boolexpr206;
bool mu__boolexpr207;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_i3) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_i4) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (!(mu_Spy_known[mu_construct14By161131( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4] )])) ; 
}
    return mu__boolexpr198;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16777504;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17826080 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr208;
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_i3) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_i4) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = (!(mu_Spy_known[mu_construct14By161131( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4] )])) ; 
}
	      if (mu__boolexpr208) {
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
    r = what_rule - 16777504;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
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
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
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

mu_concatMsgNo = mu_construct14By161131( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat13Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat14Set, mu_concatMsgNo )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_concatMsgNo;
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
    return tsprintf("deconcat 14, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
  if (!((mu_i) <= (mu_pat14Set.mu_length))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
bool mu__boolexpr221;
  if (!(mu_Spy_known[mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_Spy_known[mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr218 = (!(mu__boolexpr221)) ; 
}
    return mu__boolexpr218;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17826080;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17826096 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
  if (!((mu_i) <= (mu_pat14Set.mu_length))) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
bool mu__boolexpr225;
  if (!(mu_Spy_known[mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_Spy_known[mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr222 = (!(mu__boolexpr225)) ; 
}
	      if (mu__boolexpr222) {
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
    r = what_rule - 17826080;
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
mu_1_indexType mu_msgPat6("msgPat6",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat14Set.mu_content[mu_i]].mu_concatPart[2];
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
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("encrypt 13, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (!(mu_Spy_known[mu_construct13By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr226;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17826096;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17826352 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr232;
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = (!(mu_Spy_known[mu_construct13By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr232) {
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
    r = what_rule - 17826096;
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

if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct13By63( mu_pat6Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
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
    return tsprintf("decrypt 13, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr238;
bool mu__boolexpr239;
bool mu__boolexpr240;
  if (!((mu_i) <= (mu_pat13Set.mu_length))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = (!(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr238;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17826352;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17826368 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
  if (!((mu_i) <= (mu_pat13Set.mu_length))) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (!(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_aencMsg])) ; 
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
    r = what_rule - 17826352;
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
mu_1_indexType mu_msgPat6("msgPat6",208);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",216);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_aencMsg;
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
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 12, i2:%s, i1:%s, i0:%s", mu_i2.Name(), mu_i1.Name(), mu_i0.Name());
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
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_i2) <= (mu_pat11Set.mu_length)) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = (!(mu_Spy_known[mu_construct12By1611( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr244;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17826368;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17830464 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr250;
bool mu__boolexpr251;
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_i2) <= (mu_pat11Set.mu_length)) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = (!(mu_Spy_known[mu_construct12By1611( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2] )])) ; 
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
    r = what_rule - 17826368;
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

mu_concatMsgNo = mu_construct12By1611( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat11Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat12Set, mu_concatMsgNo )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_concatMsgNo;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("deconcat 12, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr256;
bool mu__boolexpr257;
bool mu__boolexpr258;
  if (!((mu_i) <= (mu_pat12Set.mu_length))) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
bool mu__boolexpr259;
  if (!(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = (mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr256 = (!(mu__boolexpr259)) ; 
}
    return mu__boolexpr256;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17830464;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17830480 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr260;
bool mu__boolexpr261;
bool mu__boolexpr262;
  if (!((mu_i) <= (mu_pat12Set.mu_length))) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
bool mu__boolexpr263;
  if (!(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr260 = (!(mu__boolexpr263)) ; 
}
	      if (mu__boolexpr260) {
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
    r = what_rule - 17830464;
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
mu_1_indexType mu_msgPat6("msgPat6",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2];
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
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("encrypt 11, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
  if (!((mu_i) <= (mu_pat10Set.mu_length))) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_pat10Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = (!(mu_Spy_known[mu_construct11By103( mu_pat10Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr264;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17830480;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17830736 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
bool mu__boolexpr274;
bool mu__boolexpr275;
  if (!((mu_i) <= (mu_pat10Set.mu_length))) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = ((mu_pat10Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (!(mu_Spy_known[mu_construct11By103( mu_pat10Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
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
    r = what_rule - 17830480;
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

if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct11By103( mu_pat10Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("decrypt 11, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
  if (!((mu_i) <= (mu_pat11Set.mu_length))) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (!(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr276;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17830736;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17830752 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
  if (!((mu_i) <= (mu_pat11Set.mu_length))) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (!(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr279) {
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
    r = what_rule - 17830736;
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
mu_1_indexType mu_msgPat10("msgPat10",208);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat10("flag_pat10",216);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat10 = mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_aencMsg;
mu_isPat10 ( mu_msgs[mu_msgPat10], mu_flag_pat10 );
if ( mu_flag_pat10 )
{
if ( !(mu_exist( mu_pat10Set, mu_msgPat10 )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_msgPat10.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_msgPat10;
}
}
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
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 10, i1:%s, i0:%s", mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr282;
bool mu__boolexpr283;
bool mu__boolexpr284;
bool mu__boolexpr285;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = (!(mu_Spy_known[mu_construct10By16( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1] )])) ; 
}
    return mu__boolexpr282;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17830752;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17831008 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
bool mu__boolexpr289;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = (!(mu_Spy_known[mu_construct10By16( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1] )])) ; 
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
    r = what_rule - 17830752;
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

mu_concatMsgNo = mu_construct10By16( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat10Set, mu_concatMsgNo )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_concatMsgNo;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("deconcat 10, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
  if (!((mu_i) <= (mu_pat10Set.mu_length))) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_pat10Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
bool mu__boolexpr293;
  if (!(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = (mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr290 = (!(mu__boolexpr293)) ; 
}
    return mu__boolexpr290;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17831008;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17831024 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!((mu_i) <= (mu_pat10Set.mu_length))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = ((mu_pat10Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
bool mu__boolexpr297;
  if (!(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr294 = (!(mu__boolexpr297)) ; 
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
    r = what_rule - 17831008;
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
mu_1_indexType mu_msgPat6("msgPat6",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2];
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
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 9, i3:%s, i2:%s, i1:%s, i0:%s", mu_i3.Name(), mu_i2.Name(), mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr298;
bool mu__boolexpr299;
bool mu__boolexpr300;
bool mu__boolexpr301;
bool mu__boolexpr302;
bool mu__boolexpr303;
bool mu__boolexpr304;
bool mu__boolexpr305;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = ((mu_i3) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (!(mu_Spy_known[mu_construct9By1618( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )])) ; 
}
    return mu__boolexpr298;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17831024;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17896560 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_i3) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (!(mu_Spy_known[mu_construct9By1618( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )])) ; 
}
	      if (mu__boolexpr306) {
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
    r = what_rule - 17831024;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
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
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 16) + 0);
    r = r / 16;
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

mu_concatMsgNo = mu_construct9By1618( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat9Set, mu_concatMsgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_concatMsgNo;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("deconcat 9, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
  if (!((mu_i) <= (mu_pat9Set.mu_length))) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
bool mu__boolexpr317;
  if (!(mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr314 = (!(mu__boolexpr317)) ; 
}
    return mu__boolexpr314;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17896560;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17896576 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr318;
bool mu__boolexpr319;
bool mu__boolexpr320;
  if (!((mu_i) <= (mu_pat9Set.mu_length))) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
bool mu__boolexpr321;
  if (!(mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = (mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr318 = (!(mu__boolexpr321)) ; 
}
	      if (mu__boolexpr318) {
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
    r = what_rule - 17896560;
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
mu_1_indexType mu_msgPat6("msgPat6",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2];
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
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("encrypt 8, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr322;
bool mu__boolexpr323;
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (!(mu_Spy_known[mu_construct8By73( mu_pat7Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr322;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17896576;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17896832 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr328;
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
bool mu__boolexpr332;
bool mu__boolexpr333;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr332)) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (!(mu_Spy_known[mu_construct8By73( mu_pat7Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr328) {
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
    r = what_rule - 17896576;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("decrypt 8, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr334;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17896832;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17896848 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr337) {
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
    r = what_rule - 17896832;
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
mu_1_indexType mu_msgPat7("msgPat7",208);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",216);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat7 = mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg;
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
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = (!(mu_Spy_known[mu_construct7By161( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr340;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17896848;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17900944 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr346;
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
bool mu__boolexpr351;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = ((mu_i1) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = (!(mu_Spy_known[mu_construct7By161( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr346) {
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
    r = what_rule - 17896848;
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

mu_concatMsgNo = mu_construct7By161( mu_pat1Set.mu_content[mu_i0], mu_pat6Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] );
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
bool mu__boolexpr352;
bool mu__boolexpr353;
bool mu__boolexpr354;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
bool mu__boolexpr355;
  if (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = (mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr352 = (!(mu__boolexpr355)) ; 
}
    return mu__boolexpr352;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17900944;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17900960 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
bool mu__boolexpr359;
  if (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr356 = (!(mu__boolexpr359)) ; 
}
	      if (mu__boolexpr356) {
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
    r = what_rule - 17900944;
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
mu_1_indexType mu_msgPat6("msgPat6",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2];
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
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 5, i2:%s, i1:%s, i0:%s", mu_i2.Name(), mu_i1.Name(), mu_i0.Name());
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
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
bool mu__boolexpr363;
bool mu__boolexpr364;
bool mu__boolexpr365;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_i2) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = (!(mu_Spy_known[mu_construct5By114( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr360;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17900960;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905056 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
bool mu__boolexpr371;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = ((mu_i2) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (!(mu_Spy_known[mu_construct5By114( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr366) {
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
    r = what_rule - 17900960;
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

mu_concatMsgNo = mu_construct5By114( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat4Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat5Set, mu_concatMsgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_concatMsgNo;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("deconcat 5, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr372;
bool mu__boolexpr373;
bool mu__boolexpr374;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr373)) mu__boolexpr372 = FALSE ;
  else {
bool mu__boolexpr375;
  if (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = (mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr372 = (!(mu__boolexpr375)) ; 
}
    return mu__boolexpr372;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905056;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905072 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr376;
bool mu__boolexpr377;
bool mu__boolexpr378;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
bool mu__boolexpr379;
  if (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr376 = (!(mu__boolexpr379)) ; 
}
	      if (mu__boolexpr376) {
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
    r = what_rule - 17905056;
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
mu_1_indexType mu_msgPat11("msgPat11",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat12("msgPat12",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat11 = mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat11], mu_flag_pat11 );
if ( mu_flag_pat11 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat11 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat11.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat11;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat12 = mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat12], mu_flag_pat12 );
if ( mu_flag_pat12 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat12 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat12.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat12;
}
}
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
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("encrypt 4, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
bool mu__boolexpr383;
bool mu__boolexpr384;
bool mu__boolexpr385;
  if (!((mu_i) <= (mu_pat2Set.mu_length))) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr384)) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = (!(mu_Spy_known[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr380;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905072;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905328 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr386;
bool mu__boolexpr387;
bool mu__boolexpr388;
bool mu__boolexpr389;
bool mu__boolexpr390;
bool mu__boolexpr391;
  if (!((mu_i) <= (mu_pat2Set.mu_length))) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr388)) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = (!(mu_Spy_known[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr386) {
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
    r = what_rule - 17905072;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("decrypt 4, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr392;
bool mu__boolexpr393;
bool mu__boolexpr394;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr392;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905328;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905344 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr395;
bool mu__boolexpr396;
bool mu__boolexpr397;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr395) {
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
    r = what_rule - 17905328;
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
mu_1_indexType mu_msgPat2("msgPat2",208);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",216);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencMsg;
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
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 2, i1:%s, i0:%s", mu_i1.Name(), mu_i0.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr398;
bool mu__boolexpr399;
bool mu__boolexpr400;
bool mu__boolexpr401;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = (!(mu_Spy_known[mu_construct2By11( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] )])) ; 
}
    return mu__boolexpr398;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905344;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905600 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr402;
bool mu__boolexpr403;
bool mu__boolexpr404;
bool mu__boolexpr405;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr404)) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr403)) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = (!(mu_Spy_known[mu_construct2By11( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] )])) ; 
}
	      if (mu__boolexpr402) {
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
    r = what_rule - 17905344;
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

mu_concatMsgNo = mu_construct2By11( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat2Set, mu_concatMsgNo )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_concatMsgNo;
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
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("deconcat 2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr406;
bool mu__boolexpr407;
bool mu__boolexpr408;
  if (!((mu_i) <= (mu_pat2Set.mu_length))) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr408)) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
bool mu__boolexpr409;
  if (!(mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = (mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr406 = (!(mu__boolexpr409)) ; 
}
    return mu__boolexpr406;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905600;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905616 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr410;
bool mu__boolexpr411;
bool mu__boolexpr412;
  if (!((mu_i) <= (mu_pat2Set.mu_length))) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr412)) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = FALSE ;
  else {
bool mu__boolexpr413;
  if (!(mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = (mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr410 = (!(mu__boolexpr413)) ; 
}
	      if (mu__boolexpr410) {
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
    r = what_rule - 17905600;
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
mu_1_indexType mu_msgPat11("msgPat11",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat12("msgPat12",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat11 = mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat11], mu_flag_pat11 );
if ( mu_flag_pat11 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat11 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat11.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat11;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat12 = mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat12], mu_flag_pat12 );
if ( mu_flag_pat12 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat12 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat12.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat12;
}
}
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
bool mu__boolexpr414;
bool mu__boolexpr415;
bool mu__boolexpr416;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_i) <= (mu_pat16Set.mu_length)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr414;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905616;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905632 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr417;
bool mu__boolexpr418;
bool mu__boolexpr419;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = ((mu_i) <= (mu_pat16Set.mu_length)) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr417) {
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
    r = what_rule - 17905616;
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
if ( !(mu_emit[mu_pat16Set.mu_content[mu_i]]) )
{
mu_ch[8].clear();
mu_ch[8].mu_msg = mu_msgs[mu_pat16Set.mu_content[mu_i]];
mu_ch[8].mu_sender = mu_Intruder;
mu_ch[8].mu_receiver = mu_roleHost[mu_j].mu_Host;
mu_ch[8].mu_empty = mu_false;
mu_emit[mu_pat16Set.mu_content[mu_i]] = mu_true;
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
bool mu__boolexpr420;
bool mu__boolexpr421;
bool mu__boolexpr422;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = ((mu_i) <= (mu_pat16Set.mu_length)) ; 
}
  if (!(mu__boolexpr422)) mu__boolexpr421 = FALSE ;
  else {
  mu__boolexpr421 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr421)) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr420;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905632;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905648 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = ((mu_i) <= (mu_pat16Set.mu_length)) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr423) {
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
    r = what_rule - 17905632;
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
if ( !(mu_emit[mu_pat16Set.mu_content[mu_i]]) )
{
mu_ch[7].clear();
mu_ch[7].mu_msg = mu_msgs[mu_pat16Set.mu_content[mu_i]];
mu_ch[7].mu_sender = mu_Intruder;
mu_ch[7].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[7].mu_empty = mu_false;
mu_emit[mu_pat16Set.mu_content[mu_i]] = mu_true;
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
bool mu__boolexpr426;
bool mu__boolexpr427;
bool mu__boolexpr428;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = ((mu_i) <= (mu_pat12Set.mu_length)) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr426;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905648;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905664 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr429;
bool mu__boolexpr430;
bool mu__boolexpr431;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = ((mu_i) <= (mu_pat12Set.mu_length)) ; 
}
  if (!(mu__boolexpr431)) mu__boolexpr430 = FALSE ;
  else {
  mu__boolexpr430 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr430)) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr429) {
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
    r = what_rule - 17905648;
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
if ( !(mu_emit[mu_pat12Set.mu_content[mu_i]]) )
{
mu_ch[6].clear();
mu_ch[6].mu_msg = mu_msgs[mu_pat12Set.mu_content[mu_i]];
mu_ch[6].mu_sender = mu_Intruder;
mu_ch[6].mu_receiver = mu_roleServer[mu_j].mu_Server;
mu_ch[6].mu_empty = mu_false;
mu_emit[mu_pat12Set.mu_content[mu_i]] = mu_true;
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
bool mu__boolexpr432;
bool mu__boolexpr433;
bool mu__boolexpr434;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = ((mu_i) <= (mu_pat12Set.mu_length)) ; 
}
  if (!(mu__boolexpr434)) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr432;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905664;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905680 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr435;
bool mu__boolexpr436;
bool mu__boolexpr437;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = ((mu_i) <= (mu_pat12Set.mu_length)) ; 
}
  if (!(mu__boolexpr437)) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
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
    r = what_rule - 17905664;
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
if ( !(mu_emit[mu_pat12Set.mu_content[mu_i]]) )
{
mu_ch[5].clear();
mu_ch[5].mu_msg = mu_msgs[mu_pat12Set.mu_content[mu_i]];
mu_ch[5].mu_sender = mu_Intruder;
mu_ch[5].mu_receiver = mu_roleGateway[mu_j].mu_Gateway;
mu_ch[5].mu_empty = mu_false;
mu_emit[mu_pat12Set.mu_content[mu_i]] = mu_true;
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
bool mu__boolexpr438;
bool mu__boolexpr439;
bool mu__boolexpr440;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr440)) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr439)) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr438;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905680;
    static mu_1_roleHostNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905696 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr441) {
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
    r = what_rule - 17905680;
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
bool mu__boolexpr444;
bool mu__boolexpr445;
bool mu__boolexpr446;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr444;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905696;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905712 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr447) {
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
    r = what_rule - 17905696;
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
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr450;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905712;
    static mu_1_roleServerNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905728 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr453;
bool mu__boolexpr454;
bool mu__boolexpr455;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr455)) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr453) {
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
    r = what_rule - 17905712;
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
bool mu__boolexpr456;
bool mu__boolexpr457;
bool mu__boolexpr458;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr457)) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr456;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905728;
    static mu_1_roleGatewayNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 17905744 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr459;
bool mu__boolexpr460;
bool mu__boolexpr461;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr459) {
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
    r = what_rule - 17905728;
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
    return tsprintf("intruderGetMsgFromCh[8]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[8].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905744;
    while (what_rule < 17905745 )
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
    r = what_rule - 17905744;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat16("flag_pat16",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[8].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat16 ( mu_msg, mu_flag_pat16 );
if ( mu_flag_pat16 )
{
if ( !(mu_exist( mu_pat16Set, mu_msgNo )) )
{
mu_pat16Set.mu_length = (mu_pat16Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat16Set.mu_content[mu_pat16Set.mu_length].undefine();
else
  mu_pat16Set.mu_content[mu_pat16Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
mu_ch[8].mu_empty = mu_true;
mu_ch[8].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[7]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[7].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905745;
    while (what_rule < 17905746 )
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
    r = what_rule - 17905745;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat16("flag_pat16",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[7].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat16 ( mu_msg, mu_flag_pat16 );
if ( mu_flag_pat16 )
{
if ( !(mu_exist( mu_pat16Set, mu_msgNo )) )
{
mu_pat16Set.mu_length = (mu_pat16Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat16Set.mu_content[mu_pat16Set.mu_length].undefine();
else
  mu_pat16Set.mu_content[mu_pat16Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
mu_ch[7].mu_empty = mu_true;
mu_ch[7].mu_msg.clear();
}
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
    return tsprintf("intruderGetMsgFromCh[6]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[6].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905746;
    while (what_rule < 17905747 )
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
    r = what_rule - 17905746;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[6].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat12 ( mu_msg, mu_flag_pat12 );
if ( mu_flag_pat12 )
{
if ( !(mu_exist( mu_pat12Set, mu_msgNo )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[5]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[5].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905747;
    while (what_rule < 17905748 )
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
    r = what_rule - 17905747;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[5].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat12 ( mu_msg, mu_flag_pat12 );
if ( mu_flag_pat12 )
{
if ( !(mu_exist( mu_pat12Set, mu_msgNo )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
}
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
    return tsprintf("intruderGetMsgFromCh[4]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[4].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905748;
    while (what_rule < 17905749 )
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
    r = what_rule - 17905748;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

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
}
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[3]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[3].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905749;
    while (what_rule < 17905750 )
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
    r = what_rule - 17905749;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

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
}
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
}
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
    return tsprintf("intruderGetMsgFromCh[2]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905750;
    while (what_rule < 17905751 )
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
    r = what_rule - 17905750;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

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
}
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[1]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[1].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905751;
    while (what_rule < 17905752 )
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
    r = what_rule - 17905751;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

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
}
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
}
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
bool mu__boolexpr462;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server4))) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr462;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905752;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905753 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr463;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server4))) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr463) {
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
    r = what_rule - 17905752;
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
mu_cons16 ( mu_roleServer[mu_i].mu_Host, mu_roleServer[mu_i].mu_HostIP, mu_roleServer[mu_i].mu_Gateway, mu_roleServer[mu_i].mu_hostipsk, mu_roleServer[mu_i].mu_Host, mu_roleServer[mu_i].mu_Server, mu_roleServer[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[7].mu_empty = mu_false;
mu_ch[7].mu_msg = mu_msg;
mu_ch[7].mu_sender = mu_roleServer[mu_i].mu_Server;
mu_ch[7].mu_receiver = mu_Intruder;
mu_roleServer[mu_i].mu_st = mu_Server1;
cout << "send4. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[7].mu_msg );
cout << "\n";
mu_roleServer[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr464;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server3))) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr464;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905753;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905754 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr465;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server3))) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
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
    r = what_rule - 17905753;
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
mu_0_boolean mu_flag_pat12("flag_pat12",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[6].mu_msg;
mu_isPat12 ( mu_msg, mu_flag_pat12 );
if ( mu_flag_pat12 )
{
mu_destruct12 ( mu_msg, mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_locr, mu_roleServer[mu_i].mu_locHost );
bool mu__boolexpr466;
bool mu__boolexpr467;
  if (!(mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host ))) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = (mu_matchNonce( mu_roleServer[mu_i].mu_locr, mu_roleServer[mu_i].mu_r )) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = (mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr466 )
{
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
mu_roleServer[mu_i].mu_st = mu_Server4;
}
}
cout << "recv3. ";
mu_ch[6].mu_sender.print();
cout << "   ";
mu_ch[6].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr468;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server2))) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr468;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905754;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905755 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr469;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server2))) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr469) {
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
    r = what_rule - 17905754;
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
mu_cons9 ( mu_roleServer[mu_i].mu_Host, mu_roleServer[mu_i].mu_r, mu_roleServer[mu_i].mu_Server, mu_roleServer[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleServer[mu_i].mu_Server;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleServer[mu_i].mu_st = mu_Server3;
cout << "send2. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
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
bool mu__boolexpr470;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server1))) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr470;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905755;
    static mu_1_roleServerNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905756 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr471;
  if (!((mu_roleServer[mu_i].mu_st) == (mu_Server1))) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr471) {
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
    r = what_rule - 17905755;
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
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_isPat5 ( mu_msg, mu_flag_pat5 );
if ( mu_flag_pat5 )
{
mu_destruct5 ( mu_msg, mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_locGateway, mu_roleServer[mu_i].mu_locHost );
bool mu__boolexpr472;
bool mu__boolexpr473;
  if (!(mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host ))) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = (mu_matchAgent( mu_roleServer[mu_i].mu_locGateway, mu_roleServer[mu_i].mu_Gateway )) ; 
}
  if (!(mu__boolexpr473)) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = (mu_matchAgent( mu_roleServer[mu_i].mu_locHost, mu_roleServer[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr472 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleServer[mu_i].mu_st = mu_Server2;
}
}
cout << "recv1. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr474;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway8))) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = ((mu_ch[8].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr474;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905756;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905757 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr475;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway8))) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = ((mu_ch[8].mu_empty) == (mu_true)) ; 
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
    r = what_rule - 17905756;
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
mu_cons16 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_locHostIP, mu_roleGateway[mu_i].mu_Gateway, mu_roleGateway[mu_i].mu_lochostipsk, mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_Server, mu_roleGateway[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[8].mu_empty = mu_false;
mu_ch[8].mu_msg = mu_msg;
mu_ch[8].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[8].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway1;
cout << "send8. ";
mu_ch[8].mu_sender.print();
cout << "   ";
mu_ch[8].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[8].mu_msg );
cout << "\n";
mu_roleGateway[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr476;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway7))) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_ch[7].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr476;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905757;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905758 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr477;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway7))) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = ((mu_ch[7].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr477) {
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
    r = what_rule - 17905757;
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
mu_0_boolean mu_flag_pat16("flag_pat16",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[7].mu_msg;
mu_isPat16 ( mu_msg, mu_flag_pat16 );
if ( mu_flag_pat16 )
{
mu_destruct16 ( mu_msg, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locHostIP, mu_roleGateway[mu_i].mu_locGateway, mu_roleGateway[mu_i].mu_lochostipsk, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_locServer );
bool mu__boolexpr478;
bool mu__boolexpr479;
bool mu__boolexpr480;
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host ))) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = (mu_matchNonce( mu_roleGateway[mu_i].mu_locHostIP, mu_roleGateway[mu_i].mu_HostIP )) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locGateway, mu_roleGateway[mu_i].mu_Gateway )) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = (mu_matchNonce( mu_roleGateway[mu_i].mu_lochostipsk, mu_roleGateway[mu_i].mu_hostipsk )) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host )) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server )) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr478 )
{
mu_ch[7].mu_empty = mu_true;
mu_ch[7].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway8;
}
}
cout << "recv7. ";
mu_ch[7].mu_sender.print();
cout << "   ";
mu_ch[7].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr484;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway6))) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr484;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905758;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905759 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr485;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway6))) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr485) {
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
    r = what_rule - 17905758;
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
mu_cons12 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[6].mu_empty = mu_false;
mu_ch[6].mu_msg = mu_msg;
mu_ch[6].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[6].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway7;
cout << "send6. ";
mu_ch[6].mu_sender.print();
cout << "   ";
mu_ch[6].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
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
bool mu__boolexpr486;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway5))) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr486;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905759;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905760 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr487;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway5))) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr487) {
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
    r = what_rule - 17905759;
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
mu_0_boolean mu_flag_pat12("flag_pat12",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[5].mu_msg;
mu_isPat12 ( mu_msg, mu_flag_pat12 );
if ( mu_flag_pat12 )
{
mu_destruct12 ( mu_msg, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_locHost );
bool mu__boolexpr488;
bool mu__boolexpr489;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host ))) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = (mu_matchNonce( mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_r )) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr488 )
{
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway6;
}
}
cout << "recv5. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr490;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway4))) mu__boolexpr490 = FALSE ;
  else {
  mu__boolexpr490 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr490;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905760;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905761 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr491;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway4))) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr491) {
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
    r = what_rule - 17905760;
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
mu_cons9 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_Server, mu_roleGateway[mu_i].mu_Server, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway5;
cout << "send4. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
cout << "\n";
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
bool mu__boolexpr492;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway3))) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr492;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905761;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905762 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr493;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway3))) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr493) {
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
    r = what_rule - 17905761;
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
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
mu_destruct9 ( mu_msg, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_locServer );
bool mu__boolexpr494;
bool mu__boolexpr495;
bool mu__boolexpr496;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host ))) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = (mu_matchNonce( mu_roleGateway[mu_i].mu_locr, mu_roleGateway[mu_i].mu_r )) ; 
}
  if (!(mu__boolexpr496)) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server )) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locServer, mu_roleGateway[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr494 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway4;
}
}
cout << "recv3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr497;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway2))) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr497;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905762;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905763 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr498;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway2))) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr498) {
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
    r = what_rule - 17905762;
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
mu_cons5 ( mu_roleGateway[mu_i].mu_Host, mu_roleGateway[mu_i].mu_Gateway, mu_roleGateway[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleGateway[mu_i].mu_Gateway;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleGateway[mu_i].mu_st = mu_Gateway3;
cout << "send2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
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
bool mu__boolexpr499;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway1))) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr499;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905763;
    static mu_1_roleGatewayNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905764 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr500;
  if (!((mu_roleGateway[mu_i].mu_st) == (mu_Gateway1))) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr500) {
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
    r = what_rule - 17905763;
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
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_isPat5 ( mu_msg, mu_flag_pat5 );
if ( mu_flag_pat5 )
{
mu_destruct5 ( mu_msg, mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_locGateway, mu_roleGateway[mu_i].mu_locHost );
bool mu__boolexpr501;
bool mu__boolexpr502;
  if (!(mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host ))) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locGateway, mu_roleGateway[mu_i].mu_Gateway )) ; 
}
  if (!(mu__boolexpr502)) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = (mu_matchAgent( mu_roleGateway[mu_i].mu_locHost, mu_roleGateway[mu_i].mu_Host )) ; 
}
if ( mu__boolexpr501 )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleGateway[mu_i].mu_st = mu_Gateway2;
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
bool mu__boolexpr503;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host4))) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr503;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905764;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905765 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr504;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host4))) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr504) {
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
    r = what_rule - 17905764;
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
mu_0_boolean mu_flag_pat16("flag_pat16",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[8].mu_msg;
mu_isPat16 ( mu_msg, mu_flag_pat16 );
if ( mu_flag_pat16 )
{
mu_destruct16 ( mu_msg, mu_roleHost[mu_i].mu_locHost, mu_roleHost[mu_i].mu_locHostIP, mu_roleHost[mu_i].mu_locGateway, mu_roleHost[mu_i].mu_lochostipsk, mu_roleHost[mu_i].mu_locHost, mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_locServer );
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
bool mu__boolexpr508;
bool mu__boolexpr509;
bool mu__boolexpr510;
  if (!(mu_matchAgent( mu_roleHost[mu_i].mu_locHost, mu_roleHost[mu_i].mu_Host ))) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = (mu_matchNonce( mu_roleHost[mu_i].mu_locHostIP, mu_roleHost[mu_i].mu_HostIP )) ; 
}
  if (!(mu__boolexpr510)) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = (mu_matchAgent( mu_roleHost[mu_i].mu_locGateway, mu_roleHost[mu_i].mu_Gateway )) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = (mu_matchNonce( mu_roleHost[mu_i].mu_lochostipsk, mu_roleHost[mu_i].mu_hostipsk )) ; 
}
  if (!(mu__boolexpr508)) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = (mu_matchAgent( mu_roleHost[mu_i].mu_locHost, mu_roleHost[mu_i].mu_Host )) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = (mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server )) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = (mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr505 )
{
mu_ch[8].mu_empty = mu_true;
mu_ch[8].mu_msg.clear();
mu_roleHost[mu_i].mu_st = mu_Host1;
}
}
cout << "recv4. ";
mu_ch[8].mu_sender.print();
cout << "   ";
mu_ch[8].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
mu_roleHost[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr511;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host3))) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr511;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905765;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905766 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr512;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host3))) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr512) {
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
    r = what_rule - 17905765;
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
mu_cons12 ( mu_roleHost[mu_i].mu_Host, mu_roleHost[mu_i].mu_locr, mu_roleHost[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[5].mu_empty = mu_false;
mu_ch[5].mu_msg = mu_msg;
mu_ch[5].mu_sender = mu_roleHost[mu_i].mu_Host;
mu_ch[5].mu_receiver = mu_Intruder;
mu_roleHost[mu_i].mu_st = mu_Host4;
cout << "send3. ";
mu_ch[5].mu_sender.print();
cout << "   ";
mu_ch[5].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
cout << "\n";
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
bool mu__boolexpr513;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host2))) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr513;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905766;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905767 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr514;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host2))) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr514) {
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
    r = what_rule - 17905766;
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
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[4].mu_msg;
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
mu_destruct9 ( mu_msg, mu_roleHost[mu_i].mu_locHost, mu_roleHost[mu_i].mu_locr, mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_locServer );
bool mu__boolexpr515;
bool mu__boolexpr516;
bool mu__boolexpr517;
  if (!(mu_matchAgent( mu_roleHost[mu_i].mu_locHost, mu_roleHost[mu_i].mu_Host ))) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = (mu_matchNonce( mu_roleHost[mu_i].mu_locr, mu_roleHost[mu_i].mu_r )) ; 
}
  if (!(mu__boolexpr517)) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = (mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server )) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = (mu_matchAgent( mu_roleHost[mu_i].mu_locServer, mu_roleHost[mu_i].mu_Server )) ; 
}
if ( mu__boolexpr515 )
{
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
mu_roleHost[mu_i].mu_st = mu_Host3;
}
}
cout << "recv2. ";
mu_ch[4].mu_sender.print();
cout << "   ";
mu_ch[4].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr518;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host1))) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr518;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17905767;
    static mu_1_roleHostNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 17905768 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr519;
  if (!((mu_roleHost[mu_i].mu_st) == (mu_Host1))) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr519) {
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
    r = what_rule - 17905767;
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
mu_cons5 ( mu_roleHost[mu_i].mu_Host, mu_roleHost[mu_i].mu_Gateway, mu_roleHost[mu_i].mu_Host, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleHost[mu_i].mu_Host;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleHost[mu_i].mu_st = mu_Host2;
cout << "send1. ";
mu_ch[1].mu_sender.print();
cout << "   ";
mu_ch[1].mu_receiver.print();
cout << "   msg: ";
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<16777216)
    { R0.NextRule(what_rule);
      if (what_rule<16777216) return; }
  if (what_rule>=16777216 && what_rule<16777232)
    { R1.NextRule(what_rule);
      if (what_rule<16777232) return; }
  if (what_rule>=16777232 && what_rule<16777488)
    { R2.NextRule(what_rule);
      if (what_rule<16777488) return; }
  if (what_rule>=16777488 && what_rule<16777504)
    { R3.NextRule(what_rule);
      if (what_rule<16777504) return; }
  if (what_rule>=16777504 && what_rule<17826080)
    { R4.NextRule(what_rule);
      if (what_rule<17826080) return; }
  if (what_rule>=17826080 && what_rule<17826096)
    { R5.NextRule(what_rule);
      if (what_rule<17826096) return; }
  if (what_rule>=17826096 && what_rule<17826352)
    { R6.NextRule(what_rule);
      if (what_rule<17826352) return; }
  if (what_rule>=17826352 && what_rule<17826368)
    { R7.NextRule(what_rule);
      if (what_rule<17826368) return; }
  if (what_rule>=17826368 && what_rule<17830464)
    { R8.NextRule(what_rule);
      if (what_rule<17830464) return; }
  if (what_rule>=17830464 && what_rule<17830480)
    { R9.NextRule(what_rule);
      if (what_rule<17830480) return; }
  if (what_rule>=17830480 && what_rule<17830736)
    { R10.NextRule(what_rule);
      if (what_rule<17830736) return; }
  if (what_rule>=17830736 && what_rule<17830752)
    { R11.NextRule(what_rule);
      if (what_rule<17830752) return; }
  if (what_rule>=17830752 && what_rule<17831008)
    { R12.NextRule(what_rule);
      if (what_rule<17831008) return; }
  if (what_rule>=17831008 && what_rule<17831024)
    { R13.NextRule(what_rule);
      if (what_rule<17831024) return; }
  if (what_rule>=17831024 && what_rule<17896560)
    { R14.NextRule(what_rule);
      if (what_rule<17896560) return; }
  if (what_rule>=17896560 && what_rule<17896576)
    { R15.NextRule(what_rule);
      if (what_rule<17896576) return; }
  if (what_rule>=17896576 && what_rule<17896832)
    { R16.NextRule(what_rule);
      if (what_rule<17896832) return; }
  if (what_rule>=17896832 && what_rule<17896848)
    { R17.NextRule(what_rule);
      if (what_rule<17896848) return; }
  if (what_rule>=17896848 && what_rule<17900944)
    { R18.NextRule(what_rule);
      if (what_rule<17900944) return; }
  if (what_rule>=17900944 && what_rule<17900960)
    { R19.NextRule(what_rule);
      if (what_rule<17900960) return; }
  if (what_rule>=17900960 && what_rule<17905056)
    { R20.NextRule(what_rule);
      if (what_rule<17905056) return; }
  if (what_rule>=17905056 && what_rule<17905072)
    { R21.NextRule(what_rule);
      if (what_rule<17905072) return; }
  if (what_rule>=17905072 && what_rule<17905328)
    { R22.NextRule(what_rule);
      if (what_rule<17905328) return; }
  if (what_rule>=17905328 && what_rule<17905344)
    { R23.NextRule(what_rule);
      if (what_rule<17905344) return; }
  if (what_rule>=17905344 && what_rule<17905600)
    { R24.NextRule(what_rule);
      if (what_rule<17905600) return; }
  if (what_rule>=17905600 && what_rule<17905616)
    { R25.NextRule(what_rule);
      if (what_rule<17905616) return; }
  if (what_rule>=17905616 && what_rule<17905632)
    { R26.NextRule(what_rule);
      if (what_rule<17905632) return; }
  if (what_rule>=17905632 && what_rule<17905648)
    { R27.NextRule(what_rule);
      if (what_rule<17905648) return; }
  if (what_rule>=17905648 && what_rule<17905664)
    { R28.NextRule(what_rule);
      if (what_rule<17905664) return; }
  if (what_rule>=17905664 && what_rule<17905680)
    { R29.NextRule(what_rule);
      if (what_rule<17905680) return; }
  if (what_rule>=17905680 && what_rule<17905696)
    { R30.NextRule(what_rule);
      if (what_rule<17905696) return; }
  if (what_rule>=17905696 && what_rule<17905712)
    { R31.NextRule(what_rule);
      if (what_rule<17905712) return; }
  if (what_rule>=17905712 && what_rule<17905728)
    { R32.NextRule(what_rule);
      if (what_rule<17905728) return; }
  if (what_rule>=17905728 && what_rule<17905744)
    { R33.NextRule(what_rule);
      if (what_rule<17905744) return; }
  if (what_rule>=17905744 && what_rule<17905745)
    { R34.NextRule(what_rule);
      if (what_rule<17905745) return; }
  if (what_rule>=17905745 && what_rule<17905746)
    { R35.NextRule(what_rule);
      if (what_rule<17905746) return; }
  if (what_rule>=17905746 && what_rule<17905747)
    { R36.NextRule(what_rule);
      if (what_rule<17905747) return; }
  if (what_rule>=17905747 && what_rule<17905748)
    { R37.NextRule(what_rule);
      if (what_rule<17905748) return; }
  if (what_rule>=17905748 && what_rule<17905749)
    { R38.NextRule(what_rule);
      if (what_rule<17905749) return; }
  if (what_rule>=17905749 && what_rule<17905750)
    { R39.NextRule(what_rule);
      if (what_rule<17905750) return; }
  if (what_rule>=17905750 && what_rule<17905751)
    { R40.NextRule(what_rule);
      if (what_rule<17905751) return; }
  if (what_rule>=17905751 && what_rule<17905752)
    { R41.NextRule(what_rule);
      if (what_rule<17905752) return; }
  if (what_rule>=17905752 && what_rule<17905753)
    { R42.NextRule(what_rule);
      if (what_rule<17905753) return; }
  if (what_rule>=17905753 && what_rule<17905754)
    { R43.NextRule(what_rule);
      if (what_rule<17905754) return; }
  if (what_rule>=17905754 && what_rule<17905755)
    { R44.NextRule(what_rule);
      if (what_rule<17905755) return; }
  if (what_rule>=17905755 && what_rule<17905756)
    { R45.NextRule(what_rule);
      if (what_rule<17905756) return; }
  if (what_rule>=17905756 && what_rule<17905757)
    { R46.NextRule(what_rule);
      if (what_rule<17905757) return; }
  if (what_rule>=17905757 && what_rule<17905758)
    { R47.NextRule(what_rule);
      if (what_rule<17905758) return; }
  if (what_rule>=17905758 && what_rule<17905759)
    { R48.NextRule(what_rule);
      if (what_rule<17905759) return; }
  if (what_rule>=17905759 && what_rule<17905760)
    { R49.NextRule(what_rule);
      if (what_rule<17905760) return; }
  if (what_rule>=17905760 && what_rule<17905761)
    { R50.NextRule(what_rule);
      if (what_rule<17905761) return; }
  if (what_rule>=17905761 && what_rule<17905762)
    { R51.NextRule(what_rule);
      if (what_rule<17905762) return; }
  if (what_rule>=17905762 && what_rule<17905763)
    { R52.NextRule(what_rule);
      if (what_rule<17905763) return; }
  if (what_rule>=17905763 && what_rule<17905764)
    { R53.NextRule(what_rule);
      if (what_rule<17905764) return; }
  if (what_rule>=17905764 && what_rule<17905765)
    { R54.NextRule(what_rule);
      if (what_rule<17905765) return; }
  if (what_rule>=17905765 && what_rule<17905766)
    { R55.NextRule(what_rule);
      if (what_rule<17905766) return; }
  if (what_rule>=17905766 && what_rule<17905767)
    { R56.NextRule(what_rule);
      if (what_rule<17905767) return; }
  if (what_rule>=17905767 && what_rule<17905768)
    { R57.NextRule(what_rule);
      if (what_rule<17905768) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=16777215) return R0.Condition(r-0);
  if (r>=16777216 && r<=16777231) return R1.Condition(r-16777216);
  if (r>=16777232 && r<=16777487) return R2.Condition(r-16777232);
  if (r>=16777488 && r<=16777503) return R3.Condition(r-16777488);
  if (r>=16777504 && r<=17826079) return R4.Condition(r-16777504);
  if (r>=17826080 && r<=17826095) return R5.Condition(r-17826080);
  if (r>=17826096 && r<=17826351) return R6.Condition(r-17826096);
  if (r>=17826352 && r<=17826367) return R7.Condition(r-17826352);
  if (r>=17826368 && r<=17830463) return R8.Condition(r-17826368);
  if (r>=17830464 && r<=17830479) return R9.Condition(r-17830464);
  if (r>=17830480 && r<=17830735) return R10.Condition(r-17830480);
  if (r>=17830736 && r<=17830751) return R11.Condition(r-17830736);
  if (r>=17830752 && r<=17831007) return R12.Condition(r-17830752);
  if (r>=17831008 && r<=17831023) return R13.Condition(r-17831008);
  if (r>=17831024 && r<=17896559) return R14.Condition(r-17831024);
  if (r>=17896560 && r<=17896575) return R15.Condition(r-17896560);
  if (r>=17896576 && r<=17896831) return R16.Condition(r-17896576);
  if (r>=17896832 && r<=17896847) return R17.Condition(r-17896832);
  if (r>=17896848 && r<=17900943) return R18.Condition(r-17896848);
  if (r>=17900944 && r<=17900959) return R19.Condition(r-17900944);
  if (r>=17900960 && r<=17905055) return R20.Condition(r-17900960);
  if (r>=17905056 && r<=17905071) return R21.Condition(r-17905056);
  if (r>=17905072 && r<=17905327) return R22.Condition(r-17905072);
  if (r>=17905328 && r<=17905343) return R23.Condition(r-17905328);
  if (r>=17905344 && r<=17905599) return R24.Condition(r-17905344);
  if (r>=17905600 && r<=17905615) return R25.Condition(r-17905600);
  if (r>=17905616 && r<=17905631) return R26.Condition(r-17905616);
  if (r>=17905632 && r<=17905647) return R27.Condition(r-17905632);
  if (r>=17905648 && r<=17905663) return R28.Condition(r-17905648);
  if (r>=17905664 && r<=17905679) return R29.Condition(r-17905664);
  if (r>=17905680 && r<=17905695) return R30.Condition(r-17905680);
  if (r>=17905696 && r<=17905711) return R31.Condition(r-17905696);
  if (r>=17905712 && r<=17905727) return R32.Condition(r-17905712);
  if (r>=17905728 && r<=17905743) return R33.Condition(r-17905728);
  if (r>=17905744 && r<=17905744) return R34.Condition(r-17905744);
  if (r>=17905745 && r<=17905745) return R35.Condition(r-17905745);
  if (r>=17905746 && r<=17905746) return R36.Condition(r-17905746);
  if (r>=17905747 && r<=17905747) return R37.Condition(r-17905747);
  if (r>=17905748 && r<=17905748) return R38.Condition(r-17905748);
  if (r>=17905749 && r<=17905749) return R39.Condition(r-17905749);
  if (r>=17905750 && r<=17905750) return R40.Condition(r-17905750);
  if (r>=17905751 && r<=17905751) return R41.Condition(r-17905751);
  if (r>=17905752 && r<=17905752) return R42.Condition(r-17905752);
  if (r>=17905753 && r<=17905753) return R43.Condition(r-17905753);
  if (r>=17905754 && r<=17905754) return R44.Condition(r-17905754);
  if (r>=17905755 && r<=17905755) return R45.Condition(r-17905755);
  if (r>=17905756 && r<=17905756) return R46.Condition(r-17905756);
  if (r>=17905757 && r<=17905757) return R47.Condition(r-17905757);
  if (r>=17905758 && r<=17905758) return R48.Condition(r-17905758);
  if (r>=17905759 && r<=17905759) return R49.Condition(r-17905759);
  if (r>=17905760 && r<=17905760) return R50.Condition(r-17905760);
  if (r>=17905761 && r<=17905761) return R51.Condition(r-17905761);
  if (r>=17905762 && r<=17905762) return R52.Condition(r-17905762);
  if (r>=17905763 && r<=17905763) return R53.Condition(r-17905763);
  if (r>=17905764 && r<=17905764) return R54.Condition(r-17905764);
  if (r>=17905765 && r<=17905765) return R55.Condition(r-17905765);
  if (r>=17905766 && r<=17905766) return R56.Condition(r-17905766);
  if (r>=17905767 && r<=17905767) return R57.Condition(r-17905767);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=16777215) { R0.Code(r-0); return; } 
  if (r>=16777216 && r<=16777231) { R1.Code(r-16777216); return; } 
  if (r>=16777232 && r<=16777487) { R2.Code(r-16777232); return; } 
  if (r>=16777488 && r<=16777503) { R3.Code(r-16777488); return; } 
  if (r>=16777504 && r<=17826079) { R4.Code(r-16777504); return; } 
  if (r>=17826080 && r<=17826095) { R5.Code(r-17826080); return; } 
  if (r>=17826096 && r<=17826351) { R6.Code(r-17826096); return; } 
  if (r>=17826352 && r<=17826367) { R7.Code(r-17826352); return; } 
  if (r>=17826368 && r<=17830463) { R8.Code(r-17826368); return; } 
  if (r>=17830464 && r<=17830479) { R9.Code(r-17830464); return; } 
  if (r>=17830480 && r<=17830735) { R10.Code(r-17830480); return; } 
  if (r>=17830736 && r<=17830751) { R11.Code(r-17830736); return; } 
  if (r>=17830752 && r<=17831007) { R12.Code(r-17830752); return; } 
  if (r>=17831008 && r<=17831023) { R13.Code(r-17831008); return; } 
  if (r>=17831024 && r<=17896559) { R14.Code(r-17831024); return; } 
  if (r>=17896560 && r<=17896575) { R15.Code(r-17896560); return; } 
  if (r>=17896576 && r<=17896831) { R16.Code(r-17896576); return; } 
  if (r>=17896832 && r<=17896847) { R17.Code(r-17896832); return; } 
  if (r>=17896848 && r<=17900943) { R18.Code(r-17896848); return; } 
  if (r>=17900944 && r<=17900959) { R19.Code(r-17900944); return; } 
  if (r>=17900960 && r<=17905055) { R20.Code(r-17900960); return; } 
  if (r>=17905056 && r<=17905071) { R21.Code(r-17905056); return; } 
  if (r>=17905072 && r<=17905327) { R22.Code(r-17905072); return; } 
  if (r>=17905328 && r<=17905343) { R23.Code(r-17905328); return; } 
  if (r>=17905344 && r<=17905599) { R24.Code(r-17905344); return; } 
  if (r>=17905600 && r<=17905615) { R25.Code(r-17905600); return; } 
  if (r>=17905616 && r<=17905631) { R26.Code(r-17905616); return; } 
  if (r>=17905632 && r<=17905647) { R27.Code(r-17905632); return; } 
  if (r>=17905648 && r<=17905663) { R28.Code(r-17905648); return; } 
  if (r>=17905664 && r<=17905679) { R29.Code(r-17905664); return; } 
  if (r>=17905680 && r<=17905695) { R30.Code(r-17905680); return; } 
  if (r>=17905696 && r<=17905711) { R31.Code(r-17905696); return; } 
  if (r>=17905712 && r<=17905727) { R32.Code(r-17905712); return; } 
  if (r>=17905728 && r<=17905743) { R33.Code(r-17905728); return; } 
  if (r>=17905744 && r<=17905744) { R34.Code(r-17905744); return; } 
  if (r>=17905745 && r<=17905745) { R35.Code(r-17905745); return; } 
  if (r>=17905746 && r<=17905746) { R36.Code(r-17905746); return; } 
  if (r>=17905747 && r<=17905747) { R37.Code(r-17905747); return; } 
  if (r>=17905748 && r<=17905748) { R38.Code(r-17905748); return; } 
  if (r>=17905749 && r<=17905749) { R39.Code(r-17905749); return; } 
  if (r>=17905750 && r<=17905750) { R40.Code(r-17905750); return; } 
  if (r>=17905751 && r<=17905751) { R41.Code(r-17905751); return; } 
  if (r>=17905752 && r<=17905752) { R42.Code(r-17905752); return; } 
  if (r>=17905753 && r<=17905753) { R43.Code(r-17905753); return; } 
  if (r>=17905754 && r<=17905754) { R44.Code(r-17905754); return; } 
  if (r>=17905755 && r<=17905755) { R45.Code(r-17905755); return; } 
  if (r>=17905756 && r<=17905756) { R46.Code(r-17905756); return; } 
  if (r>=17905757 && r<=17905757) { R47.Code(r-17905757); return; } 
  if (r>=17905758 && r<=17905758) { R48.Code(r-17905758); return; } 
  if (r>=17905759 && r<=17905759) { R49.Code(r-17905759); return; } 
  if (r>=17905760 && r<=17905760) { R50.Code(r-17905760); return; } 
  if (r>=17905761 && r<=17905761) { R51.Code(r-17905761); return; } 
  if (r>=17905762 && r<=17905762) { R52.Code(r-17905762); return; } 
  if (r>=17905763 && r<=17905763) { R53.Code(r-17905763); return; } 
  if (r>=17905764 && r<=17905764) { R54.Code(r-17905764); return; } 
  if (r>=17905765 && r<=17905765) { R55.Code(r-17905765); return; } 
  if (r>=17905766 && r<=17905766) { R56.Code(r-17905766); return; } 
  if (r>=17905767 && r<=17905767) { R57.Code(r-17905767); return; } 
}
int Priority(unsigned short r)
{
  if (r<=16777215) { return R0.Priority(); } 
  if (r>=16777216 && r<=16777231) { return R1.Priority(); } 
  if (r>=16777232 && r<=16777487) { return R2.Priority(); } 
  if (r>=16777488 && r<=16777503) { return R3.Priority(); } 
  if (r>=16777504 && r<=17826079) { return R4.Priority(); } 
  if (r>=17826080 && r<=17826095) { return R5.Priority(); } 
  if (r>=17826096 && r<=17826351) { return R6.Priority(); } 
  if (r>=17826352 && r<=17826367) { return R7.Priority(); } 
  if (r>=17826368 && r<=17830463) { return R8.Priority(); } 
  if (r>=17830464 && r<=17830479) { return R9.Priority(); } 
  if (r>=17830480 && r<=17830735) { return R10.Priority(); } 
  if (r>=17830736 && r<=17830751) { return R11.Priority(); } 
  if (r>=17830752 && r<=17831007) { return R12.Priority(); } 
  if (r>=17831008 && r<=17831023) { return R13.Priority(); } 
  if (r>=17831024 && r<=17896559) { return R14.Priority(); } 
  if (r>=17896560 && r<=17896575) { return R15.Priority(); } 
  if (r>=17896576 && r<=17896831) { return R16.Priority(); } 
  if (r>=17896832 && r<=17896847) { return R17.Priority(); } 
  if (r>=17896848 && r<=17900943) { return R18.Priority(); } 
  if (r>=17900944 && r<=17900959) { return R19.Priority(); } 
  if (r>=17900960 && r<=17905055) { return R20.Priority(); } 
  if (r>=17905056 && r<=17905071) { return R21.Priority(); } 
  if (r>=17905072 && r<=17905327) { return R22.Priority(); } 
  if (r>=17905328 && r<=17905343) { return R23.Priority(); } 
  if (r>=17905344 && r<=17905599) { return R24.Priority(); } 
  if (r>=17905600 && r<=17905615) { return R25.Priority(); } 
  if (r>=17905616 && r<=17905631) { return R26.Priority(); } 
  if (r>=17905632 && r<=17905647) { return R27.Priority(); } 
  if (r>=17905648 && r<=17905663) { return R28.Priority(); } 
  if (r>=17905664 && r<=17905679) { return R29.Priority(); } 
  if (r>=17905680 && r<=17905695) { return R30.Priority(); } 
  if (r>=17905696 && r<=17905711) { return R31.Priority(); } 
  if (r>=17905712 && r<=17905727) { return R32.Priority(); } 
  if (r>=17905728 && r<=17905743) { return R33.Priority(); } 
  if (r>=17905744 && r<=17905744) { return R34.Priority(); } 
  if (r>=17905745 && r<=17905745) { return R35.Priority(); } 
  if (r>=17905746 && r<=17905746) { return R36.Priority(); } 
  if (r>=17905747 && r<=17905747) { return R37.Priority(); } 
  if (r>=17905748 && r<=17905748) { return R38.Priority(); } 
  if (r>=17905749 && r<=17905749) { return R39.Priority(); } 
  if (r>=17905750 && r<=17905750) { return R40.Priority(); } 
  if (r>=17905751 && r<=17905751) { return R41.Priority(); } 
  if (r>=17905752 && r<=17905752) { return R42.Priority(); } 
  if (r>=17905753 && r<=17905753) { return R43.Priority(); } 
  if (r>=17905754 && r<=17905754) { return R44.Priority(); } 
  if (r>=17905755 && r<=17905755) { return R45.Priority(); } 
  if (r>=17905756 && r<=17905756) { return R46.Priority(); } 
  if (r>=17905757 && r<=17905757) { return R47.Priority(); } 
  if (r>=17905758 && r<=17905758) { return R48.Priority(); } 
  if (r>=17905759 && r<=17905759) { return R49.Priority(); } 
  if (r>=17905760 && r<=17905760) { return R50.Priority(); } 
  if (r>=17905761 && r<=17905761) { return R51.Priority(); } 
  if (r>=17905762 && r<=17905762) { return R52.Priority(); } 
  if (r>=17905763 && r<=17905763) { return R53.Priority(); } 
  if (r>=17905764 && r<=17905764) { return R54.Priority(); } 
  if (r>=17905765 && r<=17905765) { return R55.Priority(); } 
  if (r>=17905766 && r<=17905766) { return R56.Priority(); } 
  if (r>=17905767 && r<=17905767) { return R57.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=16777215) return R0.Name(r-0);
  if (r>=16777216 && r<=16777231) return R1.Name(r-16777216);
  if (r>=16777232 && r<=16777487) return R2.Name(r-16777232);
  if (r>=16777488 && r<=16777503) return R3.Name(r-16777488);
  if (r>=16777504 && r<=17826079) return R4.Name(r-16777504);
  if (r>=17826080 && r<=17826095) return R5.Name(r-17826080);
  if (r>=17826096 && r<=17826351) return R6.Name(r-17826096);
  if (r>=17826352 && r<=17826367) return R7.Name(r-17826352);
  if (r>=17826368 && r<=17830463) return R8.Name(r-17826368);
  if (r>=17830464 && r<=17830479) return R9.Name(r-17830464);
  if (r>=17830480 && r<=17830735) return R10.Name(r-17830480);
  if (r>=17830736 && r<=17830751) return R11.Name(r-17830736);
  if (r>=17830752 && r<=17831007) return R12.Name(r-17830752);
  if (r>=17831008 && r<=17831023) return R13.Name(r-17831008);
  if (r>=17831024 && r<=17896559) return R14.Name(r-17831024);
  if (r>=17896560 && r<=17896575) return R15.Name(r-17896560);
  if (r>=17896576 && r<=17896831) return R16.Name(r-17896576);
  if (r>=17896832 && r<=17896847) return R17.Name(r-17896832);
  if (r>=17896848 && r<=17900943) return R18.Name(r-17896848);
  if (r>=17900944 && r<=17900959) return R19.Name(r-17900944);
  if (r>=17900960 && r<=17905055) return R20.Name(r-17900960);
  if (r>=17905056 && r<=17905071) return R21.Name(r-17905056);
  if (r>=17905072 && r<=17905327) return R22.Name(r-17905072);
  if (r>=17905328 && r<=17905343) return R23.Name(r-17905328);
  if (r>=17905344 && r<=17905599) return R24.Name(r-17905344);
  if (r>=17905600 && r<=17905615) return R25.Name(r-17905600);
  if (r>=17905616 && r<=17905631) return R26.Name(r-17905616);
  if (r>=17905632 && r<=17905647) return R27.Name(r-17905632);
  if (r>=17905648 && r<=17905663) return R28.Name(r-17905648);
  if (r>=17905664 && r<=17905679) return R29.Name(r-17905664);
  if (r>=17905680 && r<=17905695) return R30.Name(r-17905680);
  if (r>=17905696 && r<=17905711) return R31.Name(r-17905696);
  if (r>=17905712 && r<=17905727) return R32.Name(r-17905712);
  if (r>=17905728 && r<=17905743) return R33.Name(r-17905728);
  if (r>=17905744 && r<=17905744) return R34.Name(r-17905744);
  if (r>=17905745 && r<=17905745) return R35.Name(r-17905745);
  if (r>=17905746 && r<=17905746) return R36.Name(r-17905746);
  if (r>=17905747 && r<=17905747) return R37.Name(r-17905747);
  if (r>=17905748 && r<=17905748) return R38.Name(r-17905748);
  if (r>=17905749 && r<=17905749) return R39.Name(r-17905749);
  if (r>=17905750 && r<=17905750) return R40.Name(r-17905750);
  if (r>=17905751 && r<=17905751) return R41.Name(r-17905751);
  if (r>=17905752 && r<=17905752) return R42.Name(r-17905752);
  if (r>=17905753 && r<=17905753) return R43.Name(r-17905753);
  if (r>=17905754 && r<=17905754) return R44.Name(r-17905754);
  if (r>=17905755 && r<=17905755) return R45.Name(r-17905755);
  if (r>=17905756 && r<=17905756) return R46.Name(r-17905756);
  if (r>=17905757 && r<=17905757) return R47.Name(r-17905757);
  if (r>=17905758 && r<=17905758) return R48.Name(r-17905758);
  if (r>=17905759 && r<=17905759) return R49.Name(r-17905759);
  if (r>=17905760 && r<=17905760) return R50.Name(r-17905760);
  if (r>=17905761 && r<=17905761) return R51.Name(r-17905761);
  if (r>=17905762 && r<=17905762) return R52.Name(r-17905762);
  if (r>=17905763 && r<=17905763) return R53.Name(r-17905763);
  if (r>=17905764 && r<=17905764) return R54.Name(r-17905764);
  if (r>=17905765 && r<=17905765) return R55.Name(r-17905765);
  if (r>=17905766 && r<=17905766) return R56.Name(r-17905766);
  if (r>=17905767 && r<=17905767) return R57.Name(r-17905767);
  return NULL;
}
};
const unsigned numrules = 17905768;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 17905768


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
for(int mu_i = 0; mu_i <= 30; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
mu_msgs[mu_i].mu_msgType = mu_null;
mu_msgs[mu_i].mu_length = 0;
};
};
mu_msg_end = 0;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
mu_pat1Set.mu_content[mu_i] = 0;
mu_pat2Set.mu_content[mu_i] = 0;
mu_pat3Set.mu_content[mu_i] = 0;
mu_pat4Set.mu_content[mu_i] = 0;
mu_pat5Set.mu_content[mu_i] = 0;
mu_pat6Set.mu_content[mu_i] = 0;
mu_pat7Set.mu_content[mu_i] = 0;
mu_pat8Set.mu_content[mu_i] = 0;
mu_pat9Set.mu_content[mu_i] = 0;
mu_pat10Set.mu_content[mu_i] = 0;
mu_pat11Set.mu_content[mu_i] = 0;
mu_pat12Set.mu_content[mu_i] = 0;
mu_pat13Set.mu_content[mu_i] = 0;
mu_pat14Set.mu_content[mu_i] = 0;
mu_pat15Set.mu_content[mu_i] = 0;
mu_pat16Set.mu_content[mu_i] = 0;
};
};
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
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
mu_pat8Set.mu_length = 0;
mu_pat9Set.mu_length = 0;
mu_pat10Set.mu_length = 0;
mu_pat11Set.mu_length = 0;
mu_pat12Set.mu_length = 0;
mu_pat13Set.mu_length = 0;
mu_pat14Set.mu_length = 0;
mu_pat15Set.mu_length = 0;
mu_pat16Set.mu_length = 0;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleHost[mu_i].mu_Host;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
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
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
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
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
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
int mu__invariant_520() // Invariant "auth1"
{
bool mu__quant521; 
mu__quant521 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr522;
  if (!((mu_roleServer[mu_i].mu_commit) == (mu_true))) mu__boolexpr522 = TRUE ;
  else {
bool mu__quant523; 
mu__quant523 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleHost[mu_i].mu_r) == (mu_roleServer[mu_j].mu_r)) )
  { mu__quant523 = TRUE; break; }
};
};
  mu__boolexpr522 = (mu__quant523) ; 
}
if ( !(mu__boolexpr522) )
  { mu__quant521 = FALSE; break; }
};
};
return mu__quant521;
};

bool mu__condition_524() // Condition for Rule "auth1"
{
  return mu__invariant_520( );
}

/**** end rule declaration ****/

int mu__invariant_525() // Invariant "sec1"
{
bool mu__quant526; 
mu__quant526 = TRUE;
{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
bool mu__boolexpr527;
bool mu__boolexpr528;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_msgs[mu_i].mu_noncePart) == (mu_secSK)) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = TRUE ;
  else {
  mu__boolexpr527 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr527) )
  { mu__quant526 = FALSE; break; }
};
};
return mu__quant526;
};

bool mu__condition_529() // Condition for Rule "sec1"
{
  return mu__invariant_525( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"sec1", &mu__condition_529, NULL, },
{"auth1", &mu__condition_524, NULL, },
};
const unsigned short numinvariants = 2;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
pat15Set:NoScalarset
pat13Set:NoScalarset
pat11Set:NoScalarset
pat9Set:NoScalarset
pat7Set:NoScalarset
pat5Set:NoScalarset
pat3Set:NoScalarset
pat1Set:NoScalarset
msgs:NoScalarset
roleServer:NoScalarset
roleGateway:NoScalarset
roleHost:NoScalarset
ch:NoScalarset
msg_end:NoScalarset
pat2Set:NoScalarset
pat4Set:NoScalarset
pat6Set:NoScalarset
pat8Set:NoScalarset
pat10Set:NoScalarset
pat12Set:NoScalarset
pat14Set:NoScalarset
pat16Set:NoScalarset
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
        mu_pat15Set.MultisetSort();
        mu_pat13Set.MultisetSort();
        mu_pat11Set.MultisetSort();
        mu_pat9Set.MultisetSort();
        mu_pat7Set.MultisetSort();
        mu_pat5Set.MultisetSort();
        mu_pat3Set.MultisetSort();
        mu_pat1Set.MultisetSort();
        mu_msgs.MultisetSort();
        mu_roleServer.MultisetSort();
        mu_roleGateway.MultisetSort();
        mu_roleHost.MultisetSort();
        mu_ch.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_pat2Set.MultisetSort();
        mu_pat4Set.MultisetSort();
        mu_pat6Set.MultisetSort();
        mu_pat8Set.MultisetSort();
        mu_pat10Set.MultisetSort();
        mu_pat12Set.MultisetSort();
        mu_pat14Set.MultisetSort();
        mu_pat16Set.MultisetSort();
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
  for (j=0; j<31; j++)
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
  for (j=0; j<31; j++)
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
  for (j=0; j<31; j++)
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
  for (j=0; j<31; j++)
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
              
              mu_pat15Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat15Set.MultisetSort();
              mu_pat13Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat13Set.MultisetSort();
              mu_pat11Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat11Set.MultisetSort();
              mu_pat9Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat9Set.MultisetSort();
              mu_pat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_pat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_msgs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_roleServer.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleServer.MultisetSort();
              mu_roleGateway.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleGateway.MultisetSort();
              mu_roleHost.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleHost.MultisetSort();
              mu_ch.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_msg_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_pat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_pat10Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat10Set.MultisetSort();
              mu_pat12Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat12Set.MultisetSort();
              mu_pat14Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat14Set.MultisetSort();
              mu_pat16Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat16Set.MultisetSort();
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

          mu_pat15Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat15Set.MultisetSort();
          mu_pat13Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat13Set.MultisetSort();
          mu_pat11Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat11Set.MultisetSort();
          mu_pat9Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat9Set.MultisetSort();
          mu_pat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat7Set.MultisetSort();
          mu_pat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat5Set.MultisetSort();
          mu_pat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat3Set.MultisetSort();
          mu_pat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat1Set.MultisetSort();
          mu_msgs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msgs.MultisetSort();
          mu_roleServer.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleServer.MultisetSort();
          mu_roleGateway.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleGateway.MultisetSort();
          mu_roleHost.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleHost.MultisetSort();
          mu_ch.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ch.MultisetSort();
          mu_msg_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg_end.MultisetSort();
          mu_pat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat2Set.MultisetSort();
          mu_pat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat4Set.MultisetSort();
          mu_pat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat6Set.MultisetSort();
          mu_pat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat8Set.MultisetSort();
          mu_pat10Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat10Set.MultisetSort();
          mu_pat12Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat12Set.MultisetSort();
          mu_pat14Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat14Set.MultisetSort();
          mu_pat16Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat16Set.MultisetSort();
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
              
              mu_pat15Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat15Set.MultisetSort();
              mu_pat13Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat13Set.MultisetSort();
              mu_pat11Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat11Set.MultisetSort();
              mu_pat9Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat9Set.MultisetSort();
              mu_pat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_pat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_msgs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_roleServer.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleServer.MultisetSort();
              mu_roleGateway.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleGateway.MultisetSort();
              mu_roleHost.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleHost.MultisetSort();
              mu_ch.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_msg_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_pat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_pat10Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat10Set.MultisetSort();
              mu_pat12Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat12Set.MultisetSort();
              mu_pat14Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat14Set.MultisetSort();
              mu_pat16Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat16Set.MultisetSort();
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
      mu_pat15Set.MultisetSort();
      mu_pat13Set.MultisetSort();
      mu_pat11Set.MultisetSort();
      mu_pat9Set.MultisetSort();
      mu_pat7Set.MultisetSort();
      mu_pat5Set.MultisetSort();
      mu_pat3Set.MultisetSort();
      mu_pat1Set.MultisetSort();
      mu_msgs.MultisetSort();
      mu_roleServer.MultisetSort();
      mu_roleGateway.MultisetSort();
      mu_roleHost.MultisetSort();
      mu_ch.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_pat2Set.MultisetSort();
      mu_pat4Set.MultisetSort();
      mu_pat6Set.MultisetSort();
      mu_pat8Set.MultisetSort();
      mu_pat10Set.MultisetSort();
      mu_pat12Set.MultisetSort();
      mu_pat14Set.MultisetSort();
      mu_pat16Set.MultisetSort();
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
        mu_pat15Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat15Set.MultisetSort();
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
        mu_pat16Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat16Set.MultisetSort();
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
