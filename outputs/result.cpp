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
#define BITS_IN_WORLD 8600
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

class mu_1_roleANums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleANums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleANums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleANums (void): mu__byte(1, 1, 1) {};
  mu_1_roleANums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_roleANums mu_1_roleANums_undefined_var;

class mu_1_roleBNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleBNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleBNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleBNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleBNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_roleBNums mu_1_roleBNums_undefined_var;

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

const char *mu_1_AgentType::values[] = {"Intruder","Alice","Bob","anyAgent",NULL };

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

  mu_1_NonceType (const char *name, int os): mu__byte(5, 7, 2, name, os) {};
  mu_1_NonceType (void): mu__byte(5, 7, 2) {};
  mu_1_NonceType (int val): mu__byte(5, 7, 2, "Parameter or function result.", 0)
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

const char *mu_1_NonceType::values[] = {"Na","Nb","anyNonce",NULL };

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
      return ( s << mu_1_EncryptType::values[ int(val) - 8] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(8, 10, 2, name, os) {};
  mu_1_EncryptType (void): mu__byte(8, 10, 2) {};
  mu_1_EncryptType (int val): mu__byte(8, 10, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -8]; };
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
      cout << name << ":" << values[ value() -8] << '\n';
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

class mu_1_AStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_AStatus::values[ int(val) - 11] );
    else return ( s << "Undefined" );
  };

  mu_1_AStatus (const char *name, int os): mu__byte(11, 13, 2, name, os) {};
  mu_1_AStatus (void): mu__byte(11, 13, 2) {};
  mu_1_AStatus (int val): mu__byte(11, 13, 2, "Parameter or function result.", 0)
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

const char *mu_1_AStatus::values[] = {"A1","A2","A3",NULL };

/*** end of enum declaration ***/
mu_1_AStatus mu_1_AStatus_undefined_var;

class mu_1_BStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_BStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_BStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_BStatus::values[ int(val) - 14] );
    else return ( s << "Undefined" );
  };

  mu_1_BStatus (const char *name, int os): mu__byte(14, 16, 2, name, os) {};
  mu_1_BStatus (void): mu__byte(14, 16, 2) {};
  mu_1_BStatus (int val): mu__byte(14, 16, 2, "Parameter or function result.", 0)
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

const char *mu_1_BStatus::values[] = {"B1","B2","B3",NULL };

/*** end of enum declaration ***/
mu_1_BStatus mu_1_BStatus_undefined_var;

class mu_1_MsgType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MsgType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MsgType& val)
  {
    if (val.defined())
      return ( s << mu_1_MsgType::values[ int(val) - 17] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(17, 24, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(17, 24, 4) {};
  mu_1_MsgType (int val): mu__byte(17, 24, 4, "Parameter or function result.", 0)
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

class mu_1_RoleA
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na;
  mu_1_NonceType mu_Nb;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locNb;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locB;
  mu_1_AStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleA ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleA ( void ) {};

  virtual ~mu_1_RoleA(); 
friend int CompareWeight(mu_1_RoleA& a, mu_1_RoleA& b)
  {
    int w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleA& a, mu_1_RoleA& b)
  {
    int w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
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
    mu_Na.MultisetSort();
    mu_Nb.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_Nb.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_locNa.print_statistic();
    mu_locNb.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_Nb.clear();
    mu_A.clear();
    mu_B.clear();
    mu_locNa.clear();
    mu_locNb.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_Nb.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_locNa.undefine();
    mu_locNb.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_Nb.reset();
    mu_A.reset();
    mu_B.reset();
    mu_locNa.reset();
    mu_locNb.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_Nb.print();
    mu_A.print();
    mu_B.print();
    mu_locNa.print();
    mu_locNb.print();
    mu_locA.print();
    mu_locB.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleA& operator= (const mu_1_RoleA& from) {
    mu_Na.value(from.mu_Na.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_locNa.value(from.mu_locNa.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locA.value(from.mu_locA.value());
    mu_locB.value(from.mu_locB.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleA::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleA::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleA::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na.set_self_2(name, ".Na", os + 0 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 8 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 16 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 24 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 32 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 40 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 48 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 56 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 64 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 72 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleA::~mu_1_RoleA()
{
}

/*** end record declaration ***/
mu_1_RoleA mu_1_RoleA_undefined_var;

class mu_1_RoleB
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na;
  mu_1_NonceType mu_Nb;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locNb;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locB;
  mu_1_BStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleB ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleB ( void ) {};

  virtual ~mu_1_RoleB(); 
friend int CompareWeight(mu_1_RoleB& a, mu_1_RoleB& b)
  {
    int w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleB& a, mu_1_RoleB& b)
  {
    int w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
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
    mu_Na.MultisetSort();
    mu_Nb.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_Nb.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_locNa.print_statistic();
    mu_locNb.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_Nb.clear();
    mu_A.clear();
    mu_B.clear();
    mu_locNa.clear();
    mu_locNb.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_Nb.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_locNa.undefine();
    mu_locNb.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_Nb.reset();
    mu_A.reset();
    mu_B.reset();
    mu_locNa.reset();
    mu_locNb.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_Nb.print();
    mu_A.print();
    mu_B.print();
    mu_locNa.print();
    mu_locNb.print();
    mu_locA.print();
    mu_locB.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleB& operator= (const mu_1_RoleB& from) {
    mu_Na.value(from.mu_Na.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_locNa.value(from.mu_locNa.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locA.value(from.mu_locA.value());
    mu_locB.value(from.mu_locB.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleB::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleB::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleB::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na.set_self_2(name, ".Na", os + 0 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 8 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 16 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 24 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 32 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 40 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 48 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 56 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 64 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 72 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleB::~mu_1_RoleB()
{
}

/*** end record declaration ***/
mu_1_RoleB mu_1_RoleB_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_indexType array[ 21 ];
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
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 21; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
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
  for(int i = 0; i < 21; i++) {
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
  if (name) mu_length.set_self_2(name, ".length", os + 168 ); else mu_length.set_self_2(NULL, NULL, 0);
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
  mu_1_RoleA array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_RoleA& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 80 + os);
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
  mu_1_RoleB array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_RoleB& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 80 + os);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 208 + os);
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

const int mu_roleANum = 1;
const int mu_roleBNum = 1;
const int mu_totalFact = 20;
const int mu_msgLength = 15;
const int mu_chanNum = 10;
const int mu_Intruder = 1;
const int mu_Alice = 2;
const int mu_Bob = 3;
const int mu_anyAgent = 4;
const int mu_Na = 5;
const int mu_Nb = 6;
const int mu_anyNonce = 7;
const int mu_PK = 8;
const int mu_SK = 9;
const int mu_Symk = 10;
const int mu_A1 = 11;
const int mu_A2 = 12;
const int mu_A3 = 13;
const int mu_B1 = 14;
const int mu_B2 = 15;
const int mu_B3 = 16;
const int mu_null = 17;
const int mu_agent = 18;
const int mu_nonce = 19;
const int mu_key = 20;
const int mu_aenc = 21;
const int mu_senc = 22;
const int mu_concat = 23;
const int mu_hash = 24;
/*** Variable declaration ***/
mu_1__type_2 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_3 mu_roleA("roleA",2320);

/*** Variable declaration ***/
mu_1__type_4 mu_roleB("roleB",2400);

/*** Variable declaration ***/
mu_1__type_5 mu_msgs("msgs",2480);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",6848);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",6856);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",7032);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",7208);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",7384);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",7560);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",7736);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",7912);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",8088);

/*** Variable declaration ***/
mu_1__type_6 mu_Spy_known("Spy_known",8264);

/*** Variable declaration ***/
mu_1__type_7 mu_emit("emit",8432);

void mu_lookAddPat1(const mu_1_NonceType& mu_Na, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_Na) )
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
if (mu_Na.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_Na;
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

void mu_lookAddPat2(const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_A) )
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
if (mu_A.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_A;
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

void mu_lookAddPat3(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_A, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
bool mu__boolexpr8;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr8 )
{
bool mu__boolexpr9;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr9 )
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
bool mu__boolexpr10;
  if (!(mu_flagPart1)) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = (mu_flagPart2) ; 
}
if ( mu__boolexpr10 )
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

void mu_lookAddPat4(const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr11;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK))) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_BPk)) ; 
}
if ( mu__boolexpr11 )
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
if (mu_BPk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_BPk;
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

void mu_lookAddPat5(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat3 ( mu_Na, mu_A, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_BPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr12;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat3 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr13;
  if (!(mu_flagPart1)) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = (mu_flagPart2) ; 
}
if ( mu__boolexpr13 )
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

void mu_lookAddPat6(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Nb, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_B, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
bool mu__boolexpr14;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr14 )
{
bool mu__boolexpr15;
bool mu__boolexpr16;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
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

void mu_isPat6(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr17;
bool mu__boolexpr18;
  if (!(mu_flagPart1)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = (mu_flagPart3) ; 
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

void mu_lookAddPat7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_B, const mu_1_AgentType& mu_APk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat6 ( mu_Na, mu_Nb, mu_B, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_APk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr19;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr19 )
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

void mu_isPat7(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat4 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr20;
  if (!(mu_flagPart1)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = (mu_flagPart2) ; 
}
if ( mu__boolexpr20 )
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

void mu_lookAddPat8(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_Nb, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_BPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr21;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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
mu_isPat1 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
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

void mu_cons1(const mu_1_NonceType& mu_Na, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_Na, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_A, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_Na, mu_A, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct3(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_A)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",208);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",416);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Na = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_A = mu_msgNum2.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_BPk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_Na, mu_A, mu_BPk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct5(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_A, mu_1_AgentType& mu_BPk)
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
mu_BPk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_Na = mu_msgNum1.mu_noncePart;
mu_A = mu_msgNum2.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_Na, mu_Nb, mu_B, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct6(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_B)
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
mu_Na = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_Nb = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_B = mu_msgNum3.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_B, const mu_1_AgentType& mu_APk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_Na, mu_Nb, mu_B, mu_APk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct7(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_B, mu_1_AgentType& mu_APk)
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
mu_APk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_msgNum3 = mu_msgs[mu_msg1.mu_concatPart[3]];
mu_Na = mu_msgNum1.mu_noncePart;
mu_Nb = mu_msgNum2.mu_noncePart;
mu_B = mu_msgNum3.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons8(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat8 ( mu_Nb, mu_BPk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct8(mu_1_Message& mu_msg, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_BPk)
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
mu_BPk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_Nb = mu_msg1.mu_noncePart;
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
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr27) mu__boolexpr26 = TRUE ;
  else {
bool mu__boolexpr28;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr26 = (mu__boolexpr28) ; 
}
  if (mu__boolexpr26) mu__boolexpr25 = TRUE ;
  else {
bool mu__boolexpr29;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr29 = FALSE ;
  else {
bool mu__boolexpr30;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr29 = (mu__boolexpr30) ; 
}
  mu__boolexpr25 = (mu__boolexpr29) ; 
}
  if (mu__boolexpr25) mu__boolexpr24 = TRUE ;
  else {
bool mu__boolexpr31;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr31 = FALSE ;
  else {
bool mu__boolexpr32;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr31 = (mu__boolexpr32) ; 
}
  mu__boolexpr24 = (mu__boolexpr31) ; 
}
  if (mu__boolexpr24) mu__boolexpr23 = TRUE ;
  else {
bool mu__boolexpr33;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr33 = FALSE ;
  else {
bool mu__boolexpr34;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr33 = (mu__boolexpr34) ; 
}
  mu__boolexpr23 = (mu__boolexpr33) ; 
}
if ( mu__boolexpr23 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr35;
  if (!((mu_msg.mu_msgType) == (mu_concat))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_msg.mu_length) == (mu_msgs[mu_i].mu_length)) ; 
}
if ( mu__boolexpr35 )
{
mu_j = mu_msg.mu_length;
mu_flag = mu_true;
{
  bool mu__while_expr_37;  mu__while_expr_37 = (mu_j) > (0);
int mu__counter_36 = 0;
while (mu__while_expr_37) {
if ( ++mu__counter_36 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msg.mu_concatPart[mu_j]) != (mu_msgs[mu_i].mu_concatPart[mu_j]) )
{
mu_flag = mu_false;
}
mu_j = (mu_j) - (1);
};
mu__while_expr_37 = (mu_j) > (0);
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
  bool mu__while_expr_39;  mu__while_expr_39 = (mu_i) < (mu_msg.mu_length);
int mu__counter_38 = 0;
while (mu__while_expr_39) {
if ( ++mu__counter_38 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ",";
mu_i = (mu_i) + (1);
};
mu__while_expr_39 = (mu_i) < (mu_msg.mu_length);
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
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr40;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_agent))) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
if ( mu__boolexpr40 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr41;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
if ( mu__boolexpr41 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr42;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr42 = FALSE ;
  else {
bool mu__boolexpr43;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr42 = (mu__boolexpr43) ; 
}
if ( mu__boolexpr42 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr44;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_aenc))) mu__boolexpr44 = FALSE ;
  else {
bool mu__boolexpr45;
  if (!((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg)) ; 
}
  mu__boolexpr44 = (mu__boolexpr45) ; 
}
if ( mu__boolexpr44 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr46;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_senc))) mu__boolexpr46 = FALSE ;
  else {
bool mu__boolexpr47;
  if (!((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg)) ; 
}
  mu__boolexpr46 = (mu__boolexpr47) ; 
}
if ( mu__boolexpr46 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr48;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr48 = FALSE ;
  else {
bool mu__boolexpr49;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msg.mu_concatPart[1]))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msg.mu_concatPart[2])) ; 
}
  mu__boolexpr48 = (mu__boolexpr49) ; 
}
if ( mu__boolexpr48 )
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
for(int mu_i = 0; mu_i <= 20; mu_i++) {
bool mu__boolexpr50;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr50 )
{
bool mu__boolexpr51;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr51 )
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

mu_1_indexType mu_construct5By34(const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr52;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo3))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr52 )
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
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo4;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct5By34 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct6By112(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
bool mu__boolexpr53;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr53 )
{
bool mu__boolexpr54;
bool mu__boolexpr55;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
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
	Error.Error("The end of function construct6By112 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By64(const mu_1_indexType& mu_msgNo6,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr56;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo6))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr56 )
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
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo4;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct7By64 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct8By14(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr57;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo1))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr57 )
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
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo1;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo4;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct8By14 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 15; mu_i++) {
bool mu__boolexpr58;
  if (!((mu_msgNo) != (0))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr58 )
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

bool mu__boolexpr59;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr59 )
{
bool mu__boolexpr60;
bool mu__boolexpr61;
  if (!((mu_m1.mu_ag) != (mu_anyAgent))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_m2.mu_ag) != (mu_anyAgent)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_matchAgent( mu_m1.mu_ag, mu_m2.mu_ag )) ; 
}
return mu__boolexpr60;
}
else
{
bool mu__boolexpr62;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr62 )
{
bool mu__boolexpr63;
bool mu__boolexpr64;
  if (!((mu_m1.mu_noncePart) != (mu_anyNonce))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_m2.mu_noncePart) != (mu_anyNonce)) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_matchNonce( mu_m1.mu_noncePart, mu_m2.mu_noncePart )) ; 
}
return mu__boolexpr63;
}
else
{
bool mu__boolexpr65;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr65 )
{
bool mu__boolexpr66;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr66;
}
else
{
bool mu__boolexpr67;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr67 )
{
bool mu__boolexpr68;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr68;
}
else
{
bool mu__boolexpr69;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr69 )
{
bool mu__boolexpr70;
  if (!(mu_match( mu_msgs[mu_m1.mu_sencMsg], mu_msgs[mu_m2.mu_sencMsg] ))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_match( mu_msgs[mu_m1.mu_sencKey], mu_msgs[mu_m2.mu_sencKey] )) ; 
}
return mu__boolexpr70;
}
else
{
bool mu__boolexpr71;
bool mu__boolexpr72;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr71 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr75;
  if (!((mu_i) > (0))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_74;  mu__while_expr_74 = mu__boolexpr75;
int mu__counter_73 = 0;
while (mu__while_expr_74) {
if ( ++mu__counter_73 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr76;
  if (!(mu_concatFlag)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr76;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr77;
  if (!((mu_i) > (0))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_concatFlag) ; 
}
mu__while_expr_74 = mu__boolexpr77;
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
  mu_roleA.clear();
  mu_roleB.clear();
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
  mu_Spy_known.clear();
  mu_emit.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_roleA.undefine();
  mu_roleB.undefine();
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
  mu_Spy_known.undefine();
  mu_emit.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_roleA.reset();
  mu_roleB.reset();
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
  mu_Spy_known.reset();
  mu_emit.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print();
  mu_roleA.print();
  mu_roleB.print();
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
  mu_roleA.print_statistic();
  mu_roleB.print_statistic();
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
    mu_roleA.print_diff(prevstate);
    mu_roleB.print_diff(prevstate);
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
    mu_Spy_known.print_diff(prevstate);
    mu_emit.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_ch.to_state( newstate );
  mu_roleA.to_state( newstate );
  mu_roleB.to_state( newstate );
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
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!((mu_i) <= (mu_pat1Set.mu_length))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (!(mu_Spy_known[mu_construct8By14( mu_pat1Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr78;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 256 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
  if (!((mu_i) <= (mu_pat1Set.mu_length))) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (!(mu_Spy_known[mu_construct8By14( mu_pat1Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr84) {
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

if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct8By14( mu_pat1Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] );
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
    return tsprintf("decrypt 8, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr90;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 256;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 272 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr93) {
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
    r = what_rule - 256;
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
mu_1_indexType mu_msgPat1("msgPat1",208);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",216);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg;
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
    return tsprintf("encrypt 7, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
bool mu__boolexpr101;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (!(mu_Spy_known[mu_construct7By64( mu_pat6Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr96;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 272;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 528 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (!(mu_Spy_known[mu_construct7By64( mu_pat6Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr102) {
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
    r = what_rule - 272;
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

if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct7By64( mu_pat6Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat7Set, mu_encMsgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_encMsgNo;
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
    return tsprintf("decrypt 7, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr108;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 528;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 544 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencMsg])) ; 
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
    r = what_rule - 528;
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

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat6 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencMsg;
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
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("enconcat 6, i2:%s, i1:%s, i0:%s", mu_i2.Name(), mu_i1.Name(), mu_i0.Name());
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
bool mu__boolexpr114;
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (!(mu_Spy_known[mu_construct6By112( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr114;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 544;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4640 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_i1) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (!(mu_Spy_known[mu_construct6By112( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr120) {
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
    r = what_rule - 544;
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

mu_concatMsgNo = mu_construct6By112( mu_pat1Set.mu_content[mu_i0], mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat6Set, mu_concatMsgNo )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_concatMsgNo;
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
    return tsprintf("deconcat 6, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
bool mu__boolexpr129;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr126 = (!(mu__boolexpr129)) ; 
}
    return mu__boolexpr126;
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
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
bool mu__boolexpr133;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr130 = (!(mu__boolexpr133)) ; 
}
	      if (mu__boolexpr130) {
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
mu_1_indexType mu_msgPat11("msgPat11",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat12("msgPat12",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat11 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1];
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
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat12 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2];
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
    return tsprintf("encrypt 5, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (!(mu_Spy_known[mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr134;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4656;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 4912 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (!(mu_Spy_known[mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr140) {
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

if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat5Set, mu_encMsgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_encMsgNo;
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
    return tsprintf("decrypt 5, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr146;
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
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr149) {
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
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",208);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",216);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg;
mu_isPat3 ( mu_msgs[mu_msgPat3], mu_flag_pat3 );
if ( mu_flag_pat3 )
{
if ( !(mu_exist( mu_pat3Set, mu_msgPat3 )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msgPat3;
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
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
bool mu__boolexpr155;
  if (!((mu_i0) <= (mu_pat1Set.mu_length))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i0]]) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_i1) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = (!(mu_Spy_known[mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] )])) ; 
}
    return mu__boolexpr152;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4928;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 16) + 0);
    r = r / 16;
    static mu_1_msgLen mu_i0;
    mu_i0.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5184 )
      {
	if ( ( TRUE  ) ) {
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
  mu__boolexpr158 = ((mu_i1) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = (!(mu_Spy_known[mu_construct3By12( mu_pat1Set.mu_content[mu_i0], mu_pat2Set.mu_content[mu_i1] )])) ; 
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
    r = what_rule - 4928;
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
    return tsprintf("deconcat 3, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
bool mu__boolexpr163;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr160 = (!(mu__boolexpr163)) ; 
}
    return mu__boolexpr160;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5184;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5200 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
bool mu__boolexpr167;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr164 = (!(mu__boolexpr167)) ; 
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
    r = what_rule - 5184;
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
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[3], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr168;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5200;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5216 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
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
    r = what_rule - 5200;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
if ( !(mu_emit[mu_pat8Set.mu_content[mu_i]]) )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat8Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat8Set.mu_content[mu_i]] = mu_true;
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
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[2], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr174;
bool mu__boolexpr175;
bool mu__boolexpr176;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr174;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5216;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5232 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr177) {
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
    r = what_rule - 5216;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
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
mu_ch[2].mu_receiver = mu_roleA[mu_j].mu_A;
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
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    return tsprintf("intruderEmitMsgIntoCh[1], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr180;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5232;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    while (what_rule < 5248 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr183) {
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
    r = what_rule - 5232;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 16) + 0);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
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
mu_ch[1].mu_receiver = mu_roleB[mu_j].mu_B;
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
    unsigned r = what_rule - 5248;
    while (what_rule < 5249 )
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
    r = what_rule - 5248;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat8("flag_pat8",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat8 ( mu_msg, mu_flag_pat8 );
if ( mu_flag_pat8 )
{
if ( !(mu_exist( mu_pat8Set, mu_msgNo )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
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
    unsigned r = what_rule - 5249;
    while (what_rule < 5250 )
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
    r = what_rule - 5249;
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
    unsigned r = what_rule - 5250;
    while (what_rule < 5251 )
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
    r = what_rule - 5250;
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
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr186;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr186;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5251;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5252 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr187;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr187) {
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
    r = what_rule - 5251;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat8("flag_pat8",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat8 ( mu_msg, mu_flag_pat8 );
if ( mu_flag_pat8 )
{
mu_destruct8 ( mu_msg, mu_roleB[mu_i].mu_locNb, mu_roleB[mu_i].mu_locB );
bool mu__boolexpr188;
  if (!(mu_matchNonce( mu_roleB[mu_i].mu_locNb, mu_roleB[mu_i].mu_Nb ))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = (mu_matchAgent( mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_B )) ; 
}
if ( mu__boolexpr188 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B1;
}
}
cout << "recv3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
mu_roleB[mu_i].mu_commit = mu_true;
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
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr189;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr189;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5252;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5253 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr190;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr190) {
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
    r = what_rule - 5252;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons7 ( mu_roleB[mu_i].mu_locNa, mu_roleB[mu_i].mu_Nb, mu_roleB[mu_i].mu_B, mu_roleB[mu_i].mu_locA, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B3;
cout << "send2. ";
mu_ch[2].mu_sender.print();
cout << "   ";
mu_ch[2].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
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
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr191;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr191;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5253;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5254 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr192;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr192) {
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
    r = what_rule - 5253;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
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
mu_destruct5 ( mu_msg, mu_roleB[mu_i].mu_locNa, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_locB );
bool mu__boolexpr193;
bool mu__boolexpr194;
  if (!(mu_matchNonce( mu_roleB[mu_i].mu_locNa, mu_roleB[mu_i].mu_Na ))) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = (mu_matchAgent( mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_B )) ; 
}
if ( mu__boolexpr193 )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B2;
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
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr195;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A3))) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr195;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5254;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5255 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr196;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A3))) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
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
    r = what_rule - 5254;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons8 ( mu_roleA[mu_i].mu_locNb, mu_roleA[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A1;
cout << "send3. ";
mu_ch[3].mu_sender.print();
cout << "   ";
mu_ch[3].mu_receiver.print();
cout << "   msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
mu_roleA[mu_i].mu_commit = mu_true;
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
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr197;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
    return mu__boolexpr197;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5255;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5256 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr198;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
	      if (mu__boolexpr198) {
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
    r = what_rule - 5255;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
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
mu_destruct7 ( mu_msg, mu_roleA[mu_i].mu_locNa, mu_roleA[mu_i].mu_locNb, mu_roleA[mu_i].mu_locB, mu_roleA[mu_i].mu_locA );
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
  if (!(mu_matchNonce( mu_roleA[mu_i].mu_locNa, mu_roleA[mu_i].mu_Na ))) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (mu_matchNonce( mu_roleA[mu_i].mu_locNb, mu_roleA[mu_i].mu_Nb )) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = (mu_matchAgent( mu_roleA[mu_i].mu_locB, mu_roleA[mu_i].mu_B )) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = (mu_matchAgent( mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_A )) ; 
}
if ( mu__boolexpr199 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A3;
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
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr202;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr202;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5256;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 5257 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr203;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr203) {
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
    r = what_rule - 5256;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",208);

mu_msg.clear();
mu_cons5 ( mu_roleA[mu_i].mu_Na, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A2;
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<256)
    { R0.NextRule(what_rule);
      if (what_rule<256) return; }
  if (what_rule>=256 && what_rule<272)
    { R1.NextRule(what_rule);
      if (what_rule<272) return; }
  if (what_rule>=272 && what_rule<528)
    { R2.NextRule(what_rule);
      if (what_rule<528) return; }
  if (what_rule>=528 && what_rule<544)
    { R3.NextRule(what_rule);
      if (what_rule<544) return; }
  if (what_rule>=544 && what_rule<4640)
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
  if (what_rule>=4928 && what_rule<5184)
    { R8.NextRule(what_rule);
      if (what_rule<5184) return; }
  if (what_rule>=5184 && what_rule<5200)
    { R9.NextRule(what_rule);
      if (what_rule<5200) return; }
  if (what_rule>=5200 && what_rule<5216)
    { R10.NextRule(what_rule);
      if (what_rule<5216) return; }
  if (what_rule>=5216 && what_rule<5232)
    { R11.NextRule(what_rule);
      if (what_rule<5232) return; }
  if (what_rule>=5232 && what_rule<5248)
    { R12.NextRule(what_rule);
      if (what_rule<5248) return; }
  if (what_rule>=5248 && what_rule<5249)
    { R13.NextRule(what_rule);
      if (what_rule<5249) return; }
  if (what_rule>=5249 && what_rule<5250)
    { R14.NextRule(what_rule);
      if (what_rule<5250) return; }
  if (what_rule>=5250 && what_rule<5251)
    { R15.NextRule(what_rule);
      if (what_rule<5251) return; }
  if (what_rule>=5251 && what_rule<5252)
    { R16.NextRule(what_rule);
      if (what_rule<5252) return; }
  if (what_rule>=5252 && what_rule<5253)
    { R17.NextRule(what_rule);
      if (what_rule<5253) return; }
  if (what_rule>=5253 && what_rule<5254)
    { R18.NextRule(what_rule);
      if (what_rule<5254) return; }
  if (what_rule>=5254 && what_rule<5255)
    { R19.NextRule(what_rule);
      if (what_rule<5255) return; }
  if (what_rule>=5255 && what_rule<5256)
    { R20.NextRule(what_rule);
      if (what_rule<5256) return; }
  if (what_rule>=5256 && what_rule<5257)
    { R21.NextRule(what_rule);
      if (what_rule<5257) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=255) return R0.Condition(r-0);
  if (r>=256 && r<=271) return R1.Condition(r-256);
  if (r>=272 && r<=527) return R2.Condition(r-272);
  if (r>=528 && r<=543) return R3.Condition(r-528);
  if (r>=544 && r<=4639) return R4.Condition(r-544);
  if (r>=4640 && r<=4655) return R5.Condition(r-4640);
  if (r>=4656 && r<=4911) return R6.Condition(r-4656);
  if (r>=4912 && r<=4927) return R7.Condition(r-4912);
  if (r>=4928 && r<=5183) return R8.Condition(r-4928);
  if (r>=5184 && r<=5199) return R9.Condition(r-5184);
  if (r>=5200 && r<=5215) return R10.Condition(r-5200);
  if (r>=5216 && r<=5231) return R11.Condition(r-5216);
  if (r>=5232 && r<=5247) return R12.Condition(r-5232);
  if (r>=5248 && r<=5248) return R13.Condition(r-5248);
  if (r>=5249 && r<=5249) return R14.Condition(r-5249);
  if (r>=5250 && r<=5250) return R15.Condition(r-5250);
  if (r>=5251 && r<=5251) return R16.Condition(r-5251);
  if (r>=5252 && r<=5252) return R17.Condition(r-5252);
  if (r>=5253 && r<=5253) return R18.Condition(r-5253);
  if (r>=5254 && r<=5254) return R19.Condition(r-5254);
  if (r>=5255 && r<=5255) return R20.Condition(r-5255);
  if (r>=5256 && r<=5256) return R21.Condition(r-5256);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=255) { R0.Code(r-0); return; } 
  if (r>=256 && r<=271) { R1.Code(r-256); return; } 
  if (r>=272 && r<=527) { R2.Code(r-272); return; } 
  if (r>=528 && r<=543) { R3.Code(r-528); return; } 
  if (r>=544 && r<=4639) { R4.Code(r-544); return; } 
  if (r>=4640 && r<=4655) { R5.Code(r-4640); return; } 
  if (r>=4656 && r<=4911) { R6.Code(r-4656); return; } 
  if (r>=4912 && r<=4927) { R7.Code(r-4912); return; } 
  if (r>=4928 && r<=5183) { R8.Code(r-4928); return; } 
  if (r>=5184 && r<=5199) { R9.Code(r-5184); return; } 
  if (r>=5200 && r<=5215) { R10.Code(r-5200); return; } 
  if (r>=5216 && r<=5231) { R11.Code(r-5216); return; } 
  if (r>=5232 && r<=5247) { R12.Code(r-5232); return; } 
  if (r>=5248 && r<=5248) { R13.Code(r-5248); return; } 
  if (r>=5249 && r<=5249) { R14.Code(r-5249); return; } 
  if (r>=5250 && r<=5250) { R15.Code(r-5250); return; } 
  if (r>=5251 && r<=5251) { R16.Code(r-5251); return; } 
  if (r>=5252 && r<=5252) { R17.Code(r-5252); return; } 
  if (r>=5253 && r<=5253) { R18.Code(r-5253); return; } 
  if (r>=5254 && r<=5254) { R19.Code(r-5254); return; } 
  if (r>=5255 && r<=5255) { R20.Code(r-5255); return; } 
  if (r>=5256 && r<=5256) { R21.Code(r-5256); return; } 
}
int Priority(unsigned short r)
{
  if (r<=255) { return R0.Priority(); } 
  if (r>=256 && r<=271) { return R1.Priority(); } 
  if (r>=272 && r<=527) { return R2.Priority(); } 
  if (r>=528 && r<=543) { return R3.Priority(); } 
  if (r>=544 && r<=4639) { return R4.Priority(); } 
  if (r>=4640 && r<=4655) { return R5.Priority(); } 
  if (r>=4656 && r<=4911) { return R6.Priority(); } 
  if (r>=4912 && r<=4927) { return R7.Priority(); } 
  if (r>=4928 && r<=5183) { return R8.Priority(); } 
  if (r>=5184 && r<=5199) { return R9.Priority(); } 
  if (r>=5200 && r<=5215) { return R10.Priority(); } 
  if (r>=5216 && r<=5231) { return R11.Priority(); } 
  if (r>=5232 && r<=5247) { return R12.Priority(); } 
  if (r>=5248 && r<=5248) { return R13.Priority(); } 
  if (r>=5249 && r<=5249) { return R14.Priority(); } 
  if (r>=5250 && r<=5250) { return R15.Priority(); } 
  if (r>=5251 && r<=5251) { return R16.Priority(); } 
  if (r>=5252 && r<=5252) { return R17.Priority(); } 
  if (r>=5253 && r<=5253) { return R18.Priority(); } 
  if (r>=5254 && r<=5254) { return R19.Priority(); } 
  if (r>=5255 && r<=5255) { return R20.Priority(); } 
  if (r>=5256 && r<=5256) { return R21.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=255) return R0.Name(r-0);
  if (r>=256 && r<=271) return R1.Name(r-256);
  if (r>=272 && r<=527) return R2.Name(r-272);
  if (r>=528 && r<=543) return R3.Name(r-528);
  if (r>=544 && r<=4639) return R4.Name(r-544);
  if (r>=4640 && r<=4655) return R5.Name(r-4640);
  if (r>=4656 && r<=4911) return R6.Name(r-4656);
  if (r>=4912 && r<=4927) return R7.Name(r-4912);
  if (r>=4928 && r<=5183) return R8.Name(r-4928);
  if (r>=5184 && r<=5199) return R9.Name(r-5184);
  if (r>=5200 && r<=5215) return R10.Name(r-5200);
  if (r>=5216 && r<=5231) return R11.Name(r-5216);
  if (r>=5232 && r<=5247) return R12.Name(r-5232);
  if (r>=5248 && r<=5248) return R13.Name(r-5248);
  if (r>=5249 && r<=5249) return R14.Name(r-5249);
  if (r>=5250 && r<=5250) return R15.Name(r-5250);
  if (r>=5251 && r<=5251) return R16.Name(r-5251);
  if (r>=5252 && r<=5252) return R17.Name(r-5252);
  if (r>=5253 && r<=5253) return R18.Name(r-5253);
  if (r>=5254 && r<=5254) return R19.Name(r-5254);
  if (r>=5255 && r<=5255) return R20.Name(r-5255);
  if (r>=5256 && r<=5256) return R21.Name(r-5256);
  return NULL;
}
};
const unsigned numrules = 5257;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 5257


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
mu_roleA[1].mu_A = mu_Alice;
mu_roleA[1].mu_B = mu_Bob;
mu_roleA[1].mu_Na = mu_Na;
mu_roleA[1].mu_st = mu_A1;
mu_roleA[1].mu_commit = mu_false;
mu_roleA[1].mu_Nb = mu_anyNonce;
mu_roleB[1].mu_B = mu_Bob;
mu_roleB[1].mu_Nb = mu_Nb;
mu_roleB[1].mu_st = mu_B1;
mu_roleB[1].mu_commit = mu_false;
mu_roleB[1].mu_Na = mu_anyNonce;
mu_roleB[1].mu_A = mu_anyAgent;
{
for(int mu_i = 1; mu_i <= 10; mu_i++) {
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
mu_msgs[mu_i].mu_length = 0;
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
mu_pat8Set.mu_content[mu_i] = 0;
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
mu_pat8Set.mu_length = 0;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleA[mu_i].mu_A;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleB[mu_i].mu_B;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msg_end;
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
int mu__invariant_204() // Invariant "auth1"
{
bool mu__quant205; 
mu__quant205 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr206;
  if (!((mu_roleA[mu_i].mu_commit) == (mu_true))) mu__boolexpr206 = TRUE ;
  else {
bool mu__quant207; 
mu__quant207 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleB[mu_i].mu_Na) == (mu_roleA[mu_j].mu_Na)) )
  { mu__quant207 = TRUE; break; }
};
};
  mu__boolexpr206 = (mu__quant207) ; 
}
if ( !(mu__boolexpr206) )
  { mu__quant205 = FALSE; break; }
};
};
return mu__quant205;
};

bool mu__condition_208() // Condition for Rule "auth1"
{
  return mu__invariant_204( );
}

/**** end rule declaration ****/

int mu__invariant_209() // Invariant "sec1"
{
bool mu__quant210; 
mu__quant210 = TRUE;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
bool mu__boolexpr211;
bool mu__boolexpr212;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_msgs[mu_i].mu_noncePart) == (mu_Nb)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = TRUE ;
  else {
  mu__boolexpr211 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr211) )
  { mu__quant210 = FALSE; break; }
};
};
return mu__quant210;
};

bool mu__condition_213() // Condition for Rule "sec1"
{
  return mu__invariant_209( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"sec1", &mu__condition_213, NULL, },
{"auth1", &mu__condition_208, NULL, },
};
const unsigned short numinvariants = 2;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
pat7Set:NoScalarset
pat5Set:NoScalarset
pat3Set:NoScalarset
pat1Set:NoScalarset
msgs:NoScalarset
roleB:NoScalarset
roleA:NoScalarset
ch:NoScalarset
msg_end:NoScalarset
pat2Set:NoScalarset
pat4Set:NoScalarset
pat6Set:NoScalarset
pat8Set:NoScalarset
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
        mu_pat7Set.MultisetSort();
        mu_pat5Set.MultisetSort();
        mu_pat3Set.MultisetSort();
        mu_pat1Set.MultisetSort();
        mu_msgs.MultisetSort();
        mu_roleB.MultisetSort();
        mu_roleA.MultisetSort();
        mu_ch.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_pat2Set.MultisetSort();
        mu_pat4Set.MultisetSort();
        mu_pat6Set.MultisetSort();
        mu_pat8Set.MultisetSort();
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
void mu_1_roleANums::Permute(PermSet& Perm, int i) {};
void mu_1_roleANums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleANums::Canonicalize(PermSet& Perm) {};
void mu_1_roleANums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleANums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleANums::Limit(PermSet& Perm) {};
void mu_1_roleANums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleBNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleBNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleBNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleBNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleBNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleBNums::Limit(PermSet& Perm) {};
void mu_1_roleBNums::MultisetLimit(PermSet& Perm)
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
void mu_1_AStatus::Permute(PermSet& Perm, int i) {};
void mu_1_AStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AStatus::Canonicalize(PermSet& Perm) {};
void mu_1_AStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_AStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_AStatus::Limit(PermSet& Perm) {};
void mu_1_AStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_BStatus::Permute(PermSet& Perm, int i) {};
void mu_1_BStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_BStatus::Canonicalize(PermSet& Perm) {};
void mu_1_BStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_BStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_BStatus::Limit(PermSet& Perm) {};
void mu_1_BStatus::MultisetLimit(PermSet& Perm)
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
void mu_1_RoleA::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleA::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleA::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleA::SimpleLimit(PermSet& Perm){}
void mu_1_RoleA::ArrayLimit(PermSet& Perm){}
void mu_1_RoleA::Limit(PermSet& Perm)
{
};
void mu_1_RoleA::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleB::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleB::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleB::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleB::SimpleLimit(PermSet& Perm){}
void mu_1_RoleB::ArrayLimit(PermSet& Perm){}
void mu_1_RoleB::Limit(PermSet& Perm)
{
};
void mu_1_RoleB::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<21; j++)
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
              mu_roleB.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
              mu_roleA.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
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
          mu_roleB.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleB.MultisetSort();
          mu_roleA.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleA.MultisetSort();
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
              mu_roleB.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
              mu_roleA.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
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
      mu_pat7Set.MultisetSort();
      mu_pat5Set.MultisetSort();
      mu_pat3Set.MultisetSort();
      mu_pat1Set.MultisetSort();
      mu_msgs.MultisetSort();
      mu_roleB.MultisetSort();
      mu_roleA.MultisetSort();
      mu_ch.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_pat2Set.MultisetSort();
      mu_pat4Set.MultisetSort();
      mu_pat6Set.MultisetSort();
      mu_pat8Set.MultisetSort();
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
        mu_roleB.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleB.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleA.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleA.MultisetSort();
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
