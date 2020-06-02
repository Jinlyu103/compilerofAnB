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
#define BITS_IN_WORLD 1408344
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
  mu_1_msgLen (const char *name, int os): mu__byte(0, 10, 4, name, os) {};
  mu_1_msgLen (void): mu__byte(0, 10, 4) {};
  mu_1_msgLen (int val): mu__byte(0, 10, 4, "Parameter or function result.", 0)
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

  mu_1_NonceType (const char *name, int os): mu__byte(5, 11, 3, name, os) {};
  mu_1_NonceType (void): mu__byte(5, 11, 3) {};
  mu_1_NonceType (int val): mu__byte(5, 11, 3, "Parameter or function result.", 0)
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

const char *mu_1_NonceType::values[] = {"Na","Xa1","Ya1","Nb","Xb1","Yb1","anyNonce",NULL };

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
      return ( s << mu_1_EncryptType::values[ int(val) - 12] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(12, 14, 2, name, os) {};
  mu_1_EncryptType (void): mu__byte(12, 14, 2) {};
  mu_1_EncryptType (int val): mu__byte(12, 14, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_AStatus::values[ int(val) - 15] );
    else return ( s << "Undefined" );
  };

  mu_1_AStatus (const char *name, int os): mu__byte(15, 17, 2, name, os) {};
  mu_1_AStatus (void): mu__byte(15, 17, 2) {};
  mu_1_AStatus (int val): mu__byte(15, 17, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -15]; };
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
      cout << name << ":" << values[ value() -15] << '\n';
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
      return ( s << mu_1_BStatus::values[ int(val) - 18] );
    else return ( s << "Undefined" );
  };

  mu_1_BStatus (const char *name, int os): mu__byte(18, 20, 2, name, os) {};
  mu_1_BStatus (void): mu__byte(18, 20, 2) {};
  mu_1_BStatus (int val): mu__byte(18, 20, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -18]; };
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
      cout << name << ":" << values[ value() -18] << '\n';
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
      return ( s << mu_1_MsgType::values[ int(val) - 21] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(21, 28, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(21, 28, 4) {};
  mu_1_MsgType (int val): mu__byte(21, 28, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -21]; };
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
      cout << name << ":" << values[ value() -21] << '\n';
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
  mu_1_indexType array[ 11 ];
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
    if ( ( index >= 0 ) && ( index <= 10 ) )
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
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 11; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 11; i++)
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
  for(int i = 0; i < 11; i++) {
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
  if (name) mu_length.set_self_2(name, ".length", os + 520 ); else mu_length.set_self_2(NULL, NULL, 0);
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
  if (name) mu_sender.set_self_2(name, ".sender", os + 552 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 560 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 568 ); else mu_empty.set_self_2(NULL, NULL, 0);
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
  mu_1_NonceType mu_Xa;
  mu_1_NonceType mu_Ya;
  mu_1_NonceType mu_Nb;
  mu_1_NonceType mu_Xb;
  mu_1_NonceType mu_Yb;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locXa;
  mu_1_NonceType mu_locYa;
  mu_1_NonceType mu_locNb;
  mu_1_NonceType mu_locXb;
  mu_1_NonceType mu_locYb;
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
    w = CompareWeight(a.mu_Xa, b.mu_Xa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Ya, b.mu_Ya);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Xb, b.mu_Xb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Yb, b.mu_Yb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locXa, b.mu_locXa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locYa, b.mu_locYa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locXb, b.mu_locXb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locYb, b.mu_locYb);
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
    w = Compare(a.mu_Xa, b.mu_Xa);
    if (w!=0) return w;
    w = Compare(a.mu_Ya, b.mu_Ya);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_Xb, b.mu_Xb);
    if (w!=0) return w;
    w = Compare(a.mu_Yb, b.mu_Yb);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locXa, b.mu_locXa);
    if (w!=0) return w;
    w = Compare(a.mu_locYa, b.mu_locYa);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locXb, b.mu_locXb);
    if (w!=0) return w;
    w = Compare(a.mu_locYb, b.mu_locYb);
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
    mu_Xa.MultisetSort();
    mu_Ya.MultisetSort();
    mu_Nb.MultisetSort();
    mu_Xb.MultisetSort();
    mu_Yb.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locXa.MultisetSort();
    mu_locYa.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locXb.MultisetSort();
    mu_locYb.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_Xa.print_statistic();
    mu_Ya.print_statistic();
    mu_Nb.print_statistic();
    mu_Xb.print_statistic();
    mu_Yb.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_locNa.print_statistic();
    mu_locXa.print_statistic();
    mu_locYa.print_statistic();
    mu_locNb.print_statistic();
    mu_locXb.print_statistic();
    mu_locYb.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_Xa.clear();
    mu_Ya.clear();
    mu_Nb.clear();
    mu_Xb.clear();
    mu_Yb.clear();
    mu_A.clear();
    mu_B.clear();
    mu_locNa.clear();
    mu_locXa.clear();
    mu_locYa.clear();
    mu_locNb.clear();
    mu_locXb.clear();
    mu_locYb.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_Xa.undefine();
    mu_Ya.undefine();
    mu_Nb.undefine();
    mu_Xb.undefine();
    mu_Yb.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_locNa.undefine();
    mu_locXa.undefine();
    mu_locYa.undefine();
    mu_locNb.undefine();
    mu_locXb.undefine();
    mu_locYb.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_Xa.reset();
    mu_Ya.reset();
    mu_Nb.reset();
    mu_Xb.reset();
    mu_Yb.reset();
    mu_A.reset();
    mu_B.reset();
    mu_locNa.reset();
    mu_locXa.reset();
    mu_locYa.reset();
    mu_locNb.reset();
    mu_locXb.reset();
    mu_locYb.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_Xa.print();
    mu_Ya.print();
    mu_Nb.print();
    mu_Xb.print();
    mu_Yb.print();
    mu_A.print();
    mu_B.print();
    mu_locNa.print();
    mu_locXa.print();
    mu_locYa.print();
    mu_locNb.print();
    mu_locXb.print();
    mu_locYb.print();
    mu_locA.print();
    mu_locB.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_Xa.print_diff(prevstate);
    mu_Ya.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_Xb.print_diff(prevstate);
    mu_Yb.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locXa.print_diff(prevstate);
    mu_locYa.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locXb.print_diff(prevstate);
    mu_locYb.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_Xa.to_state(thestate);
    mu_Ya.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_Xb.to_state(thestate);
    mu_Yb.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locXa.to_state(thestate);
    mu_locYa.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locXb.to_state(thestate);
    mu_locYb.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleA& operator= (const mu_1_RoleA& from) {
    mu_Na.value(from.mu_Na.value());
    mu_Xa.value(from.mu_Xa.value());
    mu_Ya.value(from.mu_Ya.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_Xb.value(from.mu_Xb.value());
    mu_Yb.value(from.mu_Yb.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_locNa.value(from.mu_locNa.value());
    mu_locXa.value(from.mu_locXa.value());
    mu_locYa.value(from.mu_locYa.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locXb.value(from.mu_locXb.value());
    mu_locYb.value(from.mu_locYb.value());
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
  if (name) mu_Xa.set_self_2(name, ".Xa", os + 8 ); else mu_Xa.set_self_2(NULL, NULL, 0);
  if (name) mu_Ya.set_self_2(name, ".Ya", os + 16 ); else mu_Ya.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 24 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_Xb.set_self_2(name, ".Xb", os + 32 ); else mu_Xb.set_self_2(NULL, NULL, 0);
  if (name) mu_Yb.set_self_2(name, ".Yb", os + 40 ); else mu_Yb.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 48 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 56 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 64 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locXa.set_self_2(name, ".locXa", os + 72 ); else mu_locXa.set_self_2(NULL, NULL, 0);
  if (name) mu_locYa.set_self_2(name, ".locYa", os + 80 ); else mu_locYa.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 88 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locXb.set_self_2(name, ".locXb", os + 96 ); else mu_locXb.set_self_2(NULL, NULL, 0);
  if (name) mu_locYb.set_self_2(name, ".locYb", os + 104 ); else mu_locYb.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 112 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 120 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 128 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 136 ); else mu_commit.set_self_2(NULL, NULL, 0);
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
  mu_1_NonceType mu_Xa;
  mu_1_NonceType mu_Ya;
  mu_1_NonceType mu_Nb;
  mu_1_NonceType mu_Xb;
  mu_1_NonceType mu_Yb;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locXa;
  mu_1_NonceType mu_locYa;
  mu_1_NonceType mu_locNb;
  mu_1_NonceType mu_locXb;
  mu_1_NonceType mu_locYb;
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
    w = CompareWeight(a.mu_Xa, b.mu_Xa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Ya, b.mu_Ya);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Xb, b.mu_Xb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Yb, b.mu_Yb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locXa, b.mu_locXa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locYa, b.mu_locYa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locXb, b.mu_locXb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locYb, b.mu_locYb);
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
    w = Compare(a.mu_Xa, b.mu_Xa);
    if (w!=0) return w;
    w = Compare(a.mu_Ya, b.mu_Ya);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_Xb, b.mu_Xb);
    if (w!=0) return w;
    w = Compare(a.mu_Yb, b.mu_Yb);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locXa, b.mu_locXa);
    if (w!=0) return w;
    w = Compare(a.mu_locYa, b.mu_locYa);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locXb, b.mu_locXb);
    if (w!=0) return w;
    w = Compare(a.mu_locYb, b.mu_locYb);
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
    mu_Xa.MultisetSort();
    mu_Ya.MultisetSort();
    mu_Nb.MultisetSort();
    mu_Xb.MultisetSort();
    mu_Yb.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locXa.MultisetSort();
    mu_locYa.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locXb.MultisetSort();
    mu_locYb.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_Xa.print_statistic();
    mu_Ya.print_statistic();
    mu_Nb.print_statistic();
    mu_Xb.print_statistic();
    mu_Yb.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_locNa.print_statistic();
    mu_locXa.print_statistic();
    mu_locYa.print_statistic();
    mu_locNb.print_statistic();
    mu_locXb.print_statistic();
    mu_locYb.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_Xa.clear();
    mu_Ya.clear();
    mu_Nb.clear();
    mu_Xb.clear();
    mu_Yb.clear();
    mu_A.clear();
    mu_B.clear();
    mu_locNa.clear();
    mu_locXa.clear();
    mu_locYa.clear();
    mu_locNb.clear();
    mu_locXb.clear();
    mu_locYb.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_Xa.undefine();
    mu_Ya.undefine();
    mu_Nb.undefine();
    mu_Xb.undefine();
    mu_Yb.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_locNa.undefine();
    mu_locXa.undefine();
    mu_locYa.undefine();
    mu_locNb.undefine();
    mu_locXb.undefine();
    mu_locYb.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_Xa.reset();
    mu_Ya.reset();
    mu_Nb.reset();
    mu_Xb.reset();
    mu_Yb.reset();
    mu_A.reset();
    mu_B.reset();
    mu_locNa.reset();
    mu_locXa.reset();
    mu_locYa.reset();
    mu_locNb.reset();
    mu_locXb.reset();
    mu_locYb.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_Xa.print();
    mu_Ya.print();
    mu_Nb.print();
    mu_Xb.print();
    mu_Yb.print();
    mu_A.print();
    mu_B.print();
    mu_locNa.print();
    mu_locXa.print();
    mu_locYa.print();
    mu_locNb.print();
    mu_locXb.print();
    mu_locYb.print();
    mu_locA.print();
    mu_locB.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_Xa.print_diff(prevstate);
    mu_Ya.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_Xb.print_diff(prevstate);
    mu_Yb.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locXa.print_diff(prevstate);
    mu_locYa.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locXb.print_diff(prevstate);
    mu_locYb.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_Xa.to_state(thestate);
    mu_Ya.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_Xb.to_state(thestate);
    mu_Yb.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locXa.to_state(thestate);
    mu_locYa.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locXb.to_state(thestate);
    mu_locYb.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleB& operator= (const mu_1_RoleB& from) {
    mu_Na.value(from.mu_Na.value());
    mu_Xa.value(from.mu_Xa.value());
    mu_Ya.value(from.mu_Ya.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_Xb.value(from.mu_Xb.value());
    mu_Yb.value(from.mu_Yb.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_locNa.value(from.mu_locNa.value());
    mu_locXa.value(from.mu_locXa.value());
    mu_locYa.value(from.mu_locYa.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locXb.value(from.mu_locXb.value());
    mu_locYb.value(from.mu_locYb.value());
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
  if (name) mu_Xa.set_self_2(name, ".Xa", os + 8 ); else mu_Xa.set_self_2(NULL, NULL, 0);
  if (name) mu_Ya.set_self_2(name, ".Ya", os + 16 ); else mu_Ya.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 24 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_Xb.set_self_2(name, ".Xb", os + 32 ); else mu_Xb.set_self_2(NULL, NULL, 0);
  if (name) mu_Yb.set_self_2(name, ".Yb", os + 40 ); else mu_Yb.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 48 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 56 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 64 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locXa.set_self_2(name, ".locXa", os + 72 ); else mu_locXa.set_self_2(NULL, NULL, 0);
  if (name) mu_locYa.set_self_2(name, ".locYa", os + 80 ); else mu_locYa.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 88 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locXb.set_self_2(name, ".locXb", os + 96 ); else mu_locXb.set_self_2(NULL, NULL, 0);
  if (name) mu_locYb.set_self_2(name, ".locYb", os + 104 ); else mu_locYb.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 112 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 120 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 128 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 136 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleB::~mu_1_RoleB()
{
}

/*** end record declaration ***/
mu_1_RoleB mu_1_RoleB_undefined_var;

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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 576 + os);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 144 + os);
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 144 + os);
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
  mu_1_Message array[ 1001 ];
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
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 1001; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1001; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
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
  for(int i = 0; i < 1001; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 552 + os);
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
  mu_0_boolean array[ 1001 ];
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
      array[i].value(from.array[i].value());
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

const int mu_roleANum = 1;
const int mu_roleBNum = 1;
const int mu_totalFact = 1000;
const int mu_msgLength = 10;
const int mu_chanNum = 10;
const int mu_Intruder = 1;
const int mu_Alice = 2;
const int mu_Bob = 3;
const int mu_anyAgent = 4;
const int mu_Na = 5;
const int mu_Xa1 = 6;
const int mu_Ya1 = 7;
const int mu_Nb = 8;
const int mu_Xb1 = 9;
const int mu_Yb1 = 10;
const int mu_anyNonce = 11;
const int mu_PK = 12;
const int mu_SK = 13;
const int mu_Symk = 14;
const int mu_A1 = 15;
const int mu_A2 = 16;
const int mu_A3 = 17;
const int mu_B1 = 18;
const int mu_B2 = 19;
const int mu_B3 = 20;
const int mu_null = 21;
const int mu_agent = 22;
const int mu_nonce = 23;
const int mu_key = 24;
const int mu_aenc = 25;
const int mu_senc = 26;
const int mu_concat = 27;
const int mu_hash = 28;
/*** Variable declaration ***/
mu_1__type_2 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_3 mu_roleA("roleA",5760);

/*** Variable declaration ***/
mu_1__type_4 mu_roleB("roleB",5904);

/*** Variable declaration ***/
mu_1__type_5 mu_msgs("msgs",6048);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",558600);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",558632);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat1Set("sPat1Set",590696);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",622760);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat2Set("sPat2Set",654824);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",686888);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat3Set("sPat3Set",718952);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",751016);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat4Set("sPat4Set",783080);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",815144);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat5Set("sPat5Set",847208);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",879272);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat6Set("sPat6Set",911336);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",943400);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat7Set("sPat7Set",975464);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",1007528);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat8Set("sPat8Set",1039592);

/*** Variable declaration ***/
mu_1_msgSet mu_pat9Set("pat9Set",1071656);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat9Set("sPat9Set",1103720);

/*** Variable declaration ***/
mu_1_msgSet mu_pat10Set("pat10Set",1135784);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat10Set("sPat10Set",1167848);

/*** Variable declaration ***/
mu_1_msgSet mu_pat11Set("pat11Set",1199912);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat11Set("sPat11Set",1231976);

/*** Variable declaration ***/
mu_1_msgSet mu_pat12Set("pat12Set",1264040);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat12Set("sPat12Set",1296104);

/*** Variable declaration ***/
mu_1_msgSet mu_pat13Set("pat13Set",1328168);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat13Set("sPat13Set",1360232);

/*** Variable declaration ***/
mu_1__type_6 mu_Spy_known("Spy_known",1392296);

/*** Variable declaration ***/
mu_1__type_7 mu_emit("emit",1400304);

/*** Variable declaration ***/
mu_1_indexType mu_gnum("gnum",1408312);

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
bool mu__boolexpr8;
bool mu__boolexpr9;
bool mu__boolexpr10;
bool mu__boolexpr11;
bool mu__boolexpr12;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr12) mu__boolexpr11 = TRUE ;
  else {
bool mu__boolexpr13;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr11 = (mu__boolexpr13) ; 
}
  if (mu__boolexpr11) mu__boolexpr10 = TRUE ;
  else {
bool mu__boolexpr14;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr14 = FALSE ;
  else {
bool mu__boolexpr15;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr14 = (mu__boolexpr15) ; 
}
  mu__boolexpr10 = (mu__boolexpr14) ; 
}
  if (mu__boolexpr10) mu__boolexpr9 = TRUE ;
  else {
bool mu__boolexpr16;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr16 = FALSE ;
  else {
bool mu__boolexpr17;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr16 = (mu__boolexpr17) ; 
}
  mu__boolexpr9 = (mu__boolexpr16) ; 
}
  if (mu__boolexpr9) mu__boolexpr8 = TRUE ;
  else {
bool mu__boolexpr18;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr18 = FALSE ;
  else {
bool mu__boolexpr19;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr18 = (mu__boolexpr19) ; 
}
  mu__boolexpr8 = (mu__boolexpr18) ; 
}
if ( mu__boolexpr8 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr20;
  if (!((mu_msg.mu_msgType) == (mu_concat))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_msg.mu_length) == (mu_msgs[mu_i].mu_length)) ; 
}
if ( mu__boolexpr20 )
{
mu_j = mu_msg.mu_length;
mu_flag = mu_true;
{
  bool mu__while_expr_22;  mu__while_expr_22 = (mu_j) > (0);
int mu__counter_21 = 0;
while (mu__while_expr_22) {
if ( ++mu__counter_21 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msg.mu_concatPart[mu_j]) != (mu_msgs[mu_i].mu_concatPart[mu_j]) )
{
mu_flag = mu_false;
}
mu_j = (mu_j) - (1);
};
mu__while_expr_22 = (mu_j) > (0);
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
  bool mu__while_expr_24;  mu__while_expr_24 = (mu_i) < (mu_msg.mu_length);
int mu__counter_23 = 0;
while (mu__while_expr_24) {
if ( ++mu__counter_23 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ",";
mu_i = (mu_i) + (1);
};
mu__while_expr_24 = (mu_i) < (mu_msg.mu_length);
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

void mu_lookAddPat1(const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
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

void mu_constructSpat1(const mu_1_AgentType& mu_A, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_26;  mu__while_expr_26 = (mu_i) <= (mu_msg_end);
int mu__counter_25 = 0;
while (mu__while_expr_26) {
if ( ++mu__counter_25 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_A) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_26 = (mu_i) <= (mu_msg_end);
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
if (mu_A.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_A;
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

void mu_lookAddPat2(const mu_1_NonceType& mu_Na, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
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

void mu_isPat2(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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

void mu_constructSpat2(const mu_1_NonceType& mu_Na, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_28;  mu__while_expr_28 = (mu_i) <= (mu_msg_end);
int mu__counter_27 = 0;
while (mu__while_expr_28) {
if ( ++mu__counter_27 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_Na) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_28 = (mu_i) <= (mu_msg_end);
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
if (mu_Na.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_Na;
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

void mu_lookAddPat3(const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr29;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_BPk)) ; 
}
if ( mu__boolexpr29 )
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

void mu_isPat3(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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

void mu_constructSpat3(const mu_1_AgentType& mu_BPk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_31;  mu__while_expr_31 = (mu_i) <= (mu_msg_end);
int mu__counter_30 = 0;
while (mu__while_expr_31) {
if ( ++mu__counter_30 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr32;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr32 )
{
if ( (mu_msgs[mu_i].mu_k.mu_ag) == (mu_BPk) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_31 = (mu_i) <= (mu_msg_end);
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
if (mu_BPk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_BPk;
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

void mu_lookAddPat4(const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1104);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1136);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1168);

mu_index = 0;
mu_lookAddPat2 ( mu_Ya, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_BPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr33;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr33 )
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
bool mu__boolexpr34;
  if (!(mu_flagPart1)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = (mu_flagPart2) ; 
}
if ( mu__boolexpr34 )
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

void mu_constructSpat4(const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, mu_1_indexType& mu_num)
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
mu_constructSpat2 ( mu_Ya, mu_i1 );
mu_constructSpat3 ( mu_BPk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_36;  mu__while_expr_36 = (mu_i) <= (mu_msg_end);
int mu__counter_35 = 0;
while (mu__while_expr_36) {
if ( ++mu__counter_35 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr37;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr37 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_36 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat5(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",1104);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",1656);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",2208);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",2240);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",2272);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",2304);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",2336);

mu_index = 0;
mu_lookAddPat2 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_B, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_Xa, mu_msg3, mu_i3 );
mu_lookAddPat4 ( mu_Ya, mu_BPk, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr38;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr38 )
{
bool mu__boolexpr39;
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
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr39 )
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

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat4 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
  if (!(mu_flagPart1)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_flagPart4) ; 
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

void mu_constructSpat5(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, mu_1_indexType& mu_num)
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

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",160);

mu_index = 0;
mu_constructSpat2 ( mu_Na, mu_i1 );
mu_constructSpat1 ( mu_B, mu_i2 );
mu_constructSpat2 ( mu_Xa, mu_i3 );
mu_constructSpat4 ( mu_Ya, mu_BPk, mu_i4 );
mu_i = 1;
{
  bool mu__while_expr_46;  mu__while_expr_46 = (mu_i) <= (mu_msg_end);
int mu__counter_45 = 0;
while (mu__while_expr_46) {
if ( ++mu__counter_45 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr47;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr47 )
{
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
if ( mu__boolexpr48 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_46 = (mu_i) <= (mu_msg_end);
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
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
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

void mu_lookAddPat6(const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr51;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_ASk)) ; 
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
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_SK;
if (mu_ASk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_ASk;
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

void mu_constructSpat6(const mu_1_AgentType& mu_ASk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_53;  mu__while_expr_53 = (mu_i) <= (mu_msg_end);
int mu__counter_52 = 0;
while (mu__while_expr_53) {
if ( ++mu__counter_52 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr54;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK)) ; 
}
if ( mu__boolexpr54 )
{
if ( (mu_msgs[mu_i].mu_k.mu_ag) == (mu_ASk) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_53 = (mu_i) <= (mu_msg_end);
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
if (mu_ASk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_ASk;
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

void mu_lookAddPat7(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1104);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1136);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1168);

mu_index = 0;
mu_lookAddPat5 ( mu_Na, mu_B, mu_Xa, mu_Ya, mu_BPk, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_ASk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
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
mu_isPat5 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat6 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
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

void mu_constructSpat7(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, const mu_1_AgentType& mu_ASk, mu_1_indexType& mu_num)
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
mu_constructSpat5 ( mu_Na, mu_B, mu_Xa, mu_Ya, mu_BPk, mu_i1 );
mu_constructSpat6 ( mu_ASk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_58;  mu__while_expr_58 = (mu_i) <= (mu_msg_end);
int mu__counter_57 = 0;
while (mu__while_expr_58) {
if ( ++mu__counter_57 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr59;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr59 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_58 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat8(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1104);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1136);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1168);

mu_index = 0;
mu_lookAddPat1 ( mu_A, mu_msg1, mu_i1 );
mu_lookAddPat7 ( mu_Na, mu_B, mu_Xa, mu_Ya, mu_BPk, mu_ASk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr60;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr60 )
{
bool mu__boolexpr61;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr61 )
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
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat7 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr62;
  if (!(mu_flagPart1)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_flagPart2) ; 
}
if ( mu__boolexpr62 )
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

void mu_constructSpat8(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, const mu_1_AgentType& mu_ASk, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_A, mu_i1 );
mu_constructSpat7 ( mu_Na, mu_B, mu_Xa, mu_Ya, mu_BPk, mu_ASk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_64;  mu__while_expr_64 = (mu_i) <= (mu_msg_end);
int mu__counter_63 = 0;
while (mu__while_expr_64) {
if ( ++mu__counter_63 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr65;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr65 )
{
bool mu__boolexpr66;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr66 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_64 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat9(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",1104);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",1656);

/*** Variable declaration ***/
mu_1_Message mu_msg5("msg5",2208);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",2760);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",2792);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",2824);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",2856);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",2888);

/*** Variable declaration ***/
mu_1_indexType mu_i5("i5",2920);

mu_index = 0;
mu_lookAddPat2 ( mu_Nb, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_A, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_Na, mu_msg3, mu_i3 );
mu_lookAddPat2 ( mu_Xb, mu_msg4, mu_i4 );
mu_lookAddPat4 ( mu_Yb, mu_APk, mu_msg5, mu_i5 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr67;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_msgs[mu_i].mu_length) == (5)) ; 
}
if ( mu__boolexpr67 )
{
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_i5)) ; 
}
if ( mu__boolexpr68 )
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
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
mu_isPat4 ( mu_msgs[mu_msg.mu_concatPart[5]], mu_flagPart5 );
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
  if (!(mu_flagPart1)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = (mu_flagPart4) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_flagPart5) ; 
}
if ( mu__boolexpr72 )
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

void mu_constructSpat9(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, mu_1_indexType& mu_num)
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

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",160);

/*** Variable declaration ***/
mu_1_indexType mu_i5("i5",192);

mu_index = 0;
mu_constructSpat2 ( mu_Nb, mu_i1 );
mu_constructSpat1 ( mu_A, mu_i2 );
mu_constructSpat2 ( mu_Na, mu_i3 );
mu_constructSpat2 ( mu_Xb, mu_i4 );
mu_constructSpat4 ( mu_Yb, mu_APk, mu_i5 );
mu_i = 1;
{
  bool mu__while_expr_77;  mu__while_expr_77 = (mu_i) <= (mu_msg_end);
int mu__counter_76 = 0;
while (mu__while_expr_77) {
if ( ++mu__counter_76 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr78;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_msgs[mu_i].mu_length) == (5)) ; 
}
if ( mu__boolexpr78 )
{
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_i5)) ; 
}
if ( mu__boolexpr79 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_77 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat10(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, const mu_1_AgentType& mu_BSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1104);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1136);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1168);

mu_index = 0;
mu_lookAddPat9 ( mu_Nb, mu_A, mu_Na, mu_Xb, mu_Yb, mu_APk, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_BSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr83;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr83 )
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
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat9 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat6 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr84;
  if (!(mu_flagPart1)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_flagPart2) ; 
}
if ( mu__boolexpr84 )
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

void mu_constructSpat10(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, const mu_1_AgentType& mu_BSk, mu_1_indexType& mu_num)
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
mu_constructSpat9 ( mu_Nb, mu_A, mu_Na, mu_Xb, mu_Yb, mu_APk, mu_i1 );
mu_constructSpat6 ( mu_BSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_86;  mu__while_expr_86 = (mu_i) <= (mu_msg_end);
int mu__counter_85 = 0;
while (mu__while_expr_86) {
if ( ++mu__counter_85 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr87;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr87 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_86 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat11(const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, const mu_1_AgentType& mu_BSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1104);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1136);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1168);

mu_index = 0;
mu_lookAddPat1 ( mu_B, mu_msg1, mu_i1 );
mu_lookAddPat10 ( mu_Nb, mu_A, mu_Na, mu_Xb, mu_Yb, mu_APk, mu_BSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr88;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr88 )
{
bool mu__boolexpr89;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr89 )
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
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat10 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr90;
  if (!(mu_flagPart1)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_flagPart2) ; 
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

void mu_constructSpat11(const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, const mu_1_AgentType& mu_BSk, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_B, mu_i1 );
mu_constructSpat10 ( mu_Nb, mu_A, mu_Na, mu_Xb, mu_Yb, mu_APk, mu_BSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_92;  mu__while_expr_92 = (mu_i) <= (mu_msg_end);
int mu__counter_91 = 0;
while (mu__while_expr_92) {
if ( ++mu__counter_91 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr93;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr93 )
{
bool mu__boolexpr94;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr94 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_92 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat12(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1104);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1136);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1168);

mu_index = 0;
mu_lookAddPat2 ( mu_Nb, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_ASk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr95;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr95 )
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
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat6 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr96;
  if (!(mu_flagPart1)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_flagPart2) ; 
}
if ( mu__boolexpr96 )
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

void mu_constructSpat12(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_ASk, mu_1_indexType& mu_num)
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
mu_constructSpat2 ( mu_Nb, mu_i1 );
mu_constructSpat6 ( mu_ASk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_98;  mu__while_expr_98 = (mu_i) <= (mu_msg_end);
int mu__counter_97 = 0;
while (mu__while_expr_98) {
if ( ++mu__counter_97 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr99;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr99 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_98 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat13(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1104);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1136);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1168);

mu_index = 0;
mu_lookAddPat1 ( mu_A, mu_msg1, mu_i1 );
mu_lookAddPat12 ( mu_Nb, mu_ASk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr100;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr100 )
{
bool mu__boolexpr101;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr101 )
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
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat12 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr102;
  if (!(mu_flagPart1)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_flagPart2) ; 
}
if ( mu__boolexpr102 )
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

void mu_constructSpat13(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_ASk, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_A, mu_i1 );
mu_constructSpat12 ( mu_Nb, mu_ASk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_104;  mu__while_expr_104 = (mu_i) <= (mu_msg_end);
int mu__counter_103 = 0;
while (mu__while_expr_104) {
if ( ++mu__counter_103 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr105;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr105 )
{
bool mu__boolexpr106;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr106 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_104 = (mu_i) <= (mu_msg_end);
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

void mu_cons1(const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_A, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat1\n";
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_NonceType& mu_Na, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_Na, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat2\n";
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_BPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat3\n";
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_Ya, mu_BPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat4\n";
};
/*** end procedure declaration ***/

void mu_destruct4(mu_1_Message& mu_msg, mu_1_NonceType& mu_Ya, mu_1_AgentType& mu_BPk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",568);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",1120);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_BPk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_Ya = mu_msg1.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_Na, mu_B, mu_Xa, mu_Ya, mu_BPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat5\n";
};
/*** end procedure declaration ***/

void mu_destruct5(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_B, mu_1_NonceType& mu_Xa, mu_1_NonceType& mu_Ya, mu_1_AgentType& mu_BPk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",1104);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",1656);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",2208);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Na = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_B = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_Xa = mu_msgNum3.mu_noncePart;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_k = mu_msgs[mu_msgNum4.mu_aencKey].mu_k;
mu_BPk = mu_k.mu_ag;
mu_Ya = mu_msgs[mu_msgNum4.mu_aencMsg].mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_ASk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat6\n";
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_Na, mu_B, mu_Xa, mu_Ya, mu_BPk, mu_ASk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat7\n";
};
/*** end procedure declaration ***/

void mu_destruct7(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_B, mu_1_NonceType& mu_Xa, mu_1_NonceType& mu_Ya, mu_1_AgentType& mu_BPk, mu_1_AgentType& mu_ASk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",568);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",1120);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",1672);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",2224);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_ASk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_msgNum3 = mu_msgs[mu_msg1.mu_concatPart[3]];
mu_msgNum4 = mu_msgs[mu_msg1.mu_concatPart[4]];
mu_Na = mu_msgNum1.mu_noncePart;
mu_B = mu_msgNum2.mu_ag;
mu_Xa = mu_msgNum3.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons8(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Xa, const mu_1_NonceType& mu_Ya, const mu_1_AgentType& mu_BPk, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat8 ( mu_A, mu_Na, mu_B, mu_Xa, mu_Ya, mu_BPk, mu_ASk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat8\n";
};
/*** end procedure declaration ***/

void mu_destruct8(mu_1_Message& mu_msg, mu_1_AgentType& mu_A, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_B, mu_1_NonceType& mu_Xa, mu_1_NonceType& mu_Ya, mu_1_AgentType& mu_BPk, mu_1_AgentType& mu_ASk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1104);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_A = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_k = mu_msgs[mu_msgNum2.mu_aencKey].mu_k;
mu_ASk = mu_k.mu_ag;
mu_destruct5 ( mu_msgs[mu_msgNum2.mu_aencMsg], mu_Na, mu_B, mu_Xa, mu_Ya, mu_BPk );
};
/*** end procedure declaration ***/

void mu_cons9(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat9 ( mu_Nb, mu_A, mu_Na, mu_Xb, mu_Yb, mu_APk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat9\n";
};
/*** end procedure declaration ***/

void mu_destruct9(mu_1_Message& mu_msg, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_A, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Xb, mu_1_NonceType& mu_Yb, mu_1_AgentType& mu_APk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",1104);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",1656);

/*** Variable declaration ***/
mu_1_Message mu_msgNum5("msgNum5",2208);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",2760);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Nb = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_A = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_Na = mu_msgNum3.mu_noncePart;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_Xb = mu_msgNum4.mu_noncePart;
mu_msgNum5 = mu_msgs[mu_msg.mu_concatPart[5]];
mu_k = mu_msgs[mu_msgNum5.mu_aencKey].mu_k;
mu_APk = mu_k.mu_ag;
mu_Yb = mu_msgs[mu_msgNum5.mu_aencMsg].mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons10(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, const mu_1_AgentType& mu_BSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat10 ( mu_Nb, mu_A, mu_Na, mu_Xb, mu_Yb, mu_APk, mu_BSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat10\n";
};
/*** end procedure declaration ***/

void mu_destruct10(mu_1_Message& mu_msg, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_A, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Xb, mu_1_NonceType& mu_Yb, mu_1_AgentType& mu_APk, mu_1_AgentType& mu_BSk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",568);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",1120);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",1672);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",2224);

/*** Variable declaration ***/
mu_1_Message mu_msgNum5("msgNum5",2776);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_BSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_msgNum3 = mu_msgs[mu_msg1.mu_concatPart[3]];
mu_msgNum4 = mu_msgs[mu_msg1.mu_concatPart[4]];
mu_msgNum5 = mu_msgs[mu_msg1.mu_concatPart[5]];
mu_Nb = mu_msgNum1.mu_noncePart;
mu_A = mu_msgNum2.mu_ag;
mu_Na = mu_msgNum3.mu_noncePart;
mu_Xb = mu_msgNum4.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons11(const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Xb, const mu_1_NonceType& mu_Yb, const mu_1_AgentType& mu_APk, const mu_1_AgentType& mu_BSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat11 ( mu_B, mu_Nb, mu_A, mu_Na, mu_Xb, mu_Yb, mu_APk, mu_BSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat11\n";
};
/*** end procedure declaration ***/

void mu_destruct11(mu_1_Message& mu_msg, mu_1_AgentType& mu_B, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_A, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Xb, mu_1_NonceType& mu_Yb, mu_1_AgentType& mu_APk, mu_1_AgentType& mu_BSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1104);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_B = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_k = mu_msgs[mu_msgNum2.mu_aencKey].mu_k;
mu_BSk = mu_k.mu_ag;
mu_destruct9 ( mu_msgs[mu_msgNum2.mu_aencMsg], mu_Nb, mu_A, mu_Na, mu_Xb, mu_Yb, mu_APk );
};
/*** end procedure declaration ***/

void mu_cons12(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat12 ( mu_Nb, mu_ASk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat12\n";
};
/*** end procedure declaration ***/

void mu_destruct12(mu_1_Message& mu_msg, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_ASk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",568);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",1120);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_ASk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_Nb = mu_msg1.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons13(const mu_1_AgentType& mu_A, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat13 ( mu_A, mu_Nb, mu_ASk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat13\n";
};
/*** end procedure declaration ***/

void mu_destruct13(mu_1_Message& mu_msg, mu_1_AgentType& mu_A, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_ASk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1104);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_A = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_k = mu_msgs[mu_msgNum2.mu_aencKey].mu_k;
mu_ASk = mu_k.mu_ag;
mu_Nb = mu_msgs[mu_msgNum2.mu_aencMsg].mu_noncePart;
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
bool mu__boolexpr107;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_agent))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
if ( mu__boolexpr107 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr108;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
if ( mu__boolexpr108 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr109;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr109 = FALSE ;
  else {
bool mu__boolexpr110;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr109 = (mu__boolexpr110) ; 
}
if ( mu__boolexpr109 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr111;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_aenc))) mu__boolexpr111 = FALSE ;
  else {
bool mu__boolexpr112;
  if (!((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg)) ; 
}
  mu__boolexpr111 = (mu__boolexpr112) ; 
}
if ( mu__boolexpr111 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr113;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_senc))) mu__boolexpr113 = FALSE ;
  else {
bool mu__boolexpr114;
  if (!((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg)) ; 
}
  mu__boolexpr113 = (mu__boolexpr114) ; 
}
if ( mu__boolexpr113 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr115;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr115 = FALSE ;
  else {
bool mu__boolexpr116;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msg.mu_concatPart[1]))) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msg.mu_concatPart[2])) ; 
}
  mu__boolexpr115 = (mu__boolexpr116) ; 
}
if ( mu__boolexpr115 )
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

mu_1_indexType mu_construct4By23(const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr117;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo2))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo3)) ; 
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

mu_1_indexType mu_construct5By2124(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr118;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr118 )
{
bool mu__boolexpr119;
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
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr119 )
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
	Error.Error("The end of function construct5By2124 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By56(const mu_1_indexType& mu_msgNo5,const mu_1_indexType& mu_msgNo6)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr122;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo5))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo6)) ; 
}
if ( mu__boolexpr122 )
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
if (mu_msgNo5.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo5;
if (mu_msgNo6.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo6;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct7By56 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct8By17(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr123;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr123 )
{
bool mu__boolexpr124;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr124 )
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
	Error.Error("The end of function construct8By17 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct9By21224(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4,const mu_1_indexType& mu_msgNo5)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr125;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_msgs[mu_i].mu_length) == (5)) ; 
}
if ( mu__boolexpr125 )
{
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
bool mu__boolexpr129;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_msgNo5)) ; 
}
if ( mu__boolexpr126 )
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
	Error.Error("The end of function construct9By21224 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct10By96(const mu_1_indexType& mu_msgNo9,const mu_1_indexType& mu_msgNo6)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr130;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo9))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo6)) ; 
}
if ( mu__boolexpr130 )
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
if (mu_msgNo9.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo9;
if (mu_msgNo6.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo6;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct10By96 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct11By110(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr131;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr131 )
{
bool mu__boolexpr132;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr132 )
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
	Error.Error("The end of function construct11By110 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct12By26(const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo6)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr133;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo2))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo6)) ; 
}
if ( mu__boolexpr133 )
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
if (mu_msgNo6.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo6;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct12By26 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct13By112(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr134;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr134 )
{
bool mu__boolexpr135;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr135 )
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
	Error.Error("The end of function construct13By112 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 10; mu_i++) {
bool mu__boolexpr136;
  if (!((mu_msgNo) != (0))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr136 )
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

bool mu__boolexpr137;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr137 )
{
return mu_matchAgent( mu_m1.mu_ag, mu_m2.mu_ag );
}
else
{
bool mu__boolexpr138;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr138 )
{
return mu_matchNonce( mu_m1.mu_noncePart, mu_m2.mu_noncePart );
}
else
{
bool mu__boolexpr139;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr139 )
{
bool mu__boolexpr140;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr140;
}
else
{
bool mu__boolexpr141;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr141 )
{
bool mu__boolexpr142;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr142;
}
else
{
bool mu__boolexpr143;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr143 )
{
bool mu__boolexpr144;
  if (!(mu_match( mu_msgs[mu_m1.mu_sencMsg], mu_msgs[mu_m2.mu_sencMsg] ))) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_match( mu_msgs[mu_m1.mu_sencKey], mu_msgs[mu_m2.mu_sencKey] )) ; 
}
return mu__boolexpr144;
}
else
{
bool mu__boolexpr145;
bool mu__boolexpr146;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr145 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr149;
  if (!((mu_i) > (0))) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_148;  mu__while_expr_148 = mu__boolexpr149;
int mu__counter_147 = 0;
while (mu__while_expr_148) {
if ( ++mu__counter_147 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr150;
  if (!(mu_concatFlag)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr150;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr151;
  if (!((mu_i) > (0))) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (mu_concatFlag) ; 
}
mu__while_expr_148 = mu__boolexpr151;
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
  bool mu__while_expr_153;  mu__while_expr_153 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
int mu__counter_152 = 0;
while (mu__while_expr_153) {
if ( ++mu__counter_152 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( mu_match( mu_m1, mu_msgs[mu_sPatnSet.mu_content[mu_i]] ) )
{
mu_flag = mu_true;
}
mu_i = (mu_i) + (1);
};
mu__while_expr_153 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
}
};
return mu_flag;
	Error.Error("The end of function matchPat reached without returning values.");
};
/*** end function declaration ***/

void mu_aDeryptionPat4(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",552);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",584);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr154;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr154 = TRUE ;
  else {
  mu__boolexpr154 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr154 )
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
  bool mu__while_expr_156;  mu__while_expr_156 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_155 = 0;
while (mu__while_expr_156) {
if ( ++mu__counter_155 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_158;  mu__while_expr_158 = (mu_j) <= (mu_pat3Set.mu_length);
int mu__counter_157 = 0;
while (mu__while_expr_158) {
if ( ++mu__counter_157 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr159;
  if (!(mu_matchPat( mu_msgs[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )], mu_sPat4Set ))) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (!(mu_Spy_known[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr159 )
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
mu__while_expr_158 = (mu_j) <= (mu_pat3Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_156 = (mu_i) <= (mu_pat2Set.mu_length);
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
mu_1_indexType mu_msgPat3("msgPat3",64);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",96);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",128);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",136);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",144);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",152);

if ( !(mu_Spy_known[mu_msg.mu_concatPart[1]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msg.mu_concatPart[1];
mu_isPat2 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat1 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[2]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msg.mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[3]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msg.mu_concatPart[3];
mu_isPat2 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat3 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[4]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msg.mu_concatPart[4];
mu_isPat4 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
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
/*** end procedure declaration ***/

void mu_enconcatPat5()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",32);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",64);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",96);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",128);

mu_i1 = 1;
{
  bool mu__while_expr_161;  mu__while_expr_161 = (mu_i1) <= (mu_pat2Set.mu_length);
int mu__counter_160 = 0;
while (mu__while_expr_161) {
if ( ++mu__counter_160 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_163;  mu__while_expr_163 = (mu_i2) <= (mu_pat1Set.mu_length);
int mu__counter_162 = 0;
while (mu__while_expr_163) {
if ( ++mu__counter_162 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i3 = 1;
{
  bool mu__while_expr_165;  mu__while_expr_165 = (mu_i3) <= (mu_pat2Set.mu_length);
int mu__counter_164 = 0;
while (mu__while_expr_165) {
if ( ++mu__counter_164 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i4 = 1;
{
  bool mu__while_expr_167;  mu__while_expr_167 = (mu_i4) <= (mu_pat4Set.mu_length);
int mu__counter_166 = 0;
while (mu__while_expr_167) {
if ( ++mu__counter_166 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr168;
  if (!(mu_matchPat( mu_msgs[mu_construct5By2124( mu_pat2Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat4Set.mu_content[mu_i4] )], mu_sPat5Set ))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = (!(mu_Spy_known[mu_construct5By2124( mu_pat2Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat4Set.mu_content[mu_i4] )])) ; 
}
if ( mu__boolexpr168 )
{
mu_concatMsgNo = mu_construct5By2124( mu_pat2Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat4Set.mu_content[mu_i4] );
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
mu_i4 = (mu_i4) + (1);
};
mu__while_expr_167 = (mu_i4) <= (mu_pat4Set.mu_length);
}
};
mu_i3 = (mu_i3) + (1);
};
mu__while_expr_165 = (mu_i3) <= (mu_pat2Set.mu_length);
}
};
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_163 = (mu_i2) <= (mu_pat1Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_161 = (mu_i1) <= (mu_pat2Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDeryptionPat7(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat5("msgPat5",552);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat5("flag_pat5",584);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr169;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr169 = TRUE ;
  else {
  mu__boolexpr169 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr169 )
{
mu_Spy_known[mu_msg.mu_aencMsg] = mu_true;
mu_msgPat5 = mu_msg.mu_aencMsg;
mu_isPat5 ( mu_msgs[mu_msgPat5], mu_flag_pat5 );
if ( mu_flag_pat5 )
{
if ( !(mu_exist( mu_pat5Set, mu_msgPat5 )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msgPat5.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msgPat5;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_aEncryptionPat7()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_171;  mu__while_expr_171 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_170 = 0;
while (mu__while_expr_171) {
if ( ++mu__counter_170 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_173;  mu__while_expr_173 = (mu_j) <= (mu_pat6Set.mu_length);
int mu__counter_172 = 0;
while (mu__while_expr_173) {
if ( ++mu__counter_172 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr174;
  if (!(mu_matchPat( mu_msgs[mu_construct7By56( mu_pat5Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )], mu_sPat7Set ))) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (!(mu_Spy_known[mu_construct7By56( mu_pat5Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr174 )
{
if ( (mu_msgs[mu_pat6Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct7By56( mu_pat5Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] );
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
}
mu_j = (mu_j) + (1);
};
mu__while_expr_173 = (mu_j) <= (mu_pat6Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_171 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat8(mu_1_Message& mu_msg)
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
mu_isPat7 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgPat2 )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgPat2;
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat8()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",32);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",64);

mu_i1 = 1;
{
  bool mu__while_expr_176;  mu__while_expr_176 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_175 = 0;
while (mu__while_expr_176) {
if ( ++mu__counter_175 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_178;  mu__while_expr_178 = (mu_i2) <= (mu_pat7Set.mu_length);
int mu__counter_177 = 0;
while (mu__while_expr_178) {
if ( ++mu__counter_177 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr179;
  if (!(mu_matchPat( mu_msgs[mu_construct8By17( mu_pat1Set.mu_content[mu_i1], mu_pat7Set.mu_content[mu_i2] )], mu_sPat8Set ))) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (!(mu_Spy_known[mu_construct8By17( mu_pat1Set.mu_content[mu_i1], mu_pat7Set.mu_content[mu_i2] )])) ; 
}
if ( mu__boolexpr179 )
{
mu_concatMsgNo = mu_construct8By17( mu_pat1Set.mu_content[mu_i1], mu_pat7Set.mu_content[mu_i2] );
if ( !(mu_exist( mu_pat8Set, mu_concatMsgNo )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_178 = (mu_i2) <= (mu_pat7Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_176 = (mu_i1) <= (mu_pat1Set.mu_length);
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
mu_1_indexType mu_msgPat3("msgPat3",64);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",96);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat5("msgPat5",128);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",160);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",168);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",176);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",184);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat5("flagPat5",192);

if ( !(mu_Spy_known[mu_msg.mu_concatPart[1]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msg.mu_concatPart[1];
mu_isPat2 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat1 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[2]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msg.mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[3]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msg.mu_concatPart[3];
mu_isPat2 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat3 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[4]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msg.mu_concatPart[4];
mu_isPat2 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat4 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat4;
}
}
}
if ( !(mu_Spy_known[mu_msg.mu_concatPart[5]]) )
{
mu_Spy_known[mu_msg.mu_concatPart[5]] = mu_true;
mu_msgPat5 = mu_msg.mu_concatPart[5];
mu_isPat4 ( mu_msgs[mu_msgPat5], mu_flagPat5 );
if ( mu_flagPat5 )
{
if ( !(mu_exist( mu_pat4Set, mu_msgPat5 )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msgPat5.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msgPat5;
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
mu_1_indexType mu_i3("i3",64);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",96);

/*** Variable declaration ***/
mu_1_indexType mu_i5("i5",128);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",160);

mu_i1 = 1;
{
  bool mu__while_expr_181;  mu__while_expr_181 = (mu_i1) <= (mu_pat2Set.mu_length);
int mu__counter_180 = 0;
while (mu__while_expr_181) {
if ( ++mu__counter_180 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_183;  mu__while_expr_183 = (mu_i2) <= (mu_pat1Set.mu_length);
int mu__counter_182 = 0;
while (mu__while_expr_183) {
if ( ++mu__counter_182 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i3 = 1;
{
  bool mu__while_expr_185;  mu__while_expr_185 = (mu_i3) <= (mu_pat2Set.mu_length);
int mu__counter_184 = 0;
while (mu__while_expr_185) {
if ( ++mu__counter_184 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i4 = 1;
{
  bool mu__while_expr_187;  mu__while_expr_187 = (mu_i4) <= (mu_pat2Set.mu_length);
int mu__counter_186 = 0;
while (mu__while_expr_187) {
if ( ++mu__counter_186 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i5 = 1;
{
  bool mu__while_expr_189;  mu__while_expr_189 = (mu_i5) <= (mu_pat4Set.mu_length);
int mu__counter_188 = 0;
while (mu__while_expr_189) {
if ( ++mu__counter_188 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr190;
  if (!(mu_matchPat( mu_msgs[mu_construct9By21224( mu_pat2Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat2Set.mu_content[mu_i4], mu_pat4Set.mu_content[mu_i5] )], mu_sPat9Set ))) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = (!(mu_Spy_known[mu_construct9By21224( mu_pat2Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat2Set.mu_content[mu_i4], mu_pat4Set.mu_content[mu_i5] )])) ; 
}
if ( mu__boolexpr190 )
{
mu_concatMsgNo = mu_construct9By21224( mu_pat2Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat2Set.mu_content[mu_i4], mu_pat4Set.mu_content[mu_i5] );
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
mu_i5 = (mu_i5) + (1);
};
mu__while_expr_189 = (mu_i5) <= (mu_pat4Set.mu_length);
}
};
mu_i4 = (mu_i4) + (1);
};
mu__while_expr_187 = (mu_i4) <= (mu_pat2Set.mu_length);
}
};
mu_i3 = (mu_i3) + (1);
};
mu__while_expr_185 = (mu_i3) <= (mu_pat2Set.mu_length);
}
};
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_183 = (mu_i2) <= (mu_pat1Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_181 = (mu_i1) <= (mu_pat2Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDeryptionPat10(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat9("msgPat9",552);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",584);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr191;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr191 = TRUE ;
  else {
  mu__boolexpr191 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr191 )
{
mu_Spy_known[mu_msg.mu_aencMsg] = mu_true;
mu_msgPat9 = mu_msg.mu_aencMsg;
mu_isPat9 ( mu_msgs[mu_msgPat9], mu_flag_pat9 );
if ( mu_flag_pat9 )
{
if ( !(mu_exist( mu_pat9Set, mu_msgPat9 )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_msgPat9.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_msgPat9;
}
}
}
}
};
/*** end procedure declaration ***/

void mu_aEncryptionPat10()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_193;  mu__while_expr_193 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_192 = 0;
while (mu__while_expr_193) {
if ( ++mu__counter_192 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_195;  mu__while_expr_195 = (mu_j) <= (mu_pat6Set.mu_length);
int mu__counter_194 = 0;
while (mu__while_expr_195) {
if ( ++mu__counter_194 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr196;
  if (!(mu_matchPat( mu_msgs[mu_construct10By96( mu_pat9Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )], mu_sPat10Set ))) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (!(mu_Spy_known[mu_construct10By96( mu_pat9Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr196 )
{
if ( (mu_msgs[mu_pat6Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct10By96( mu_pat9Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat10Set, mu_encMsgNo )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
}
mu_j = (mu_j) + (1);
};
mu__while_expr_195 = (mu_j) <= (mu_pat6Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_193 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat11(mu_1_Message& mu_msg)
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
mu_isPat10 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat10Set, mu_msgPat2 )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_msgPat2;
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat11()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",32);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",64);

mu_i1 = 1;
{
  bool mu__while_expr_198;  mu__while_expr_198 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_197 = 0;
while (mu__while_expr_198) {
if ( ++mu__counter_197 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_200;  mu__while_expr_200 = (mu_i2) <= (mu_pat10Set.mu_length);
int mu__counter_199 = 0;
while (mu__while_expr_200) {
if ( ++mu__counter_199 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr201;
  if (!(mu_matchPat( mu_msgs[mu_construct11By110( mu_pat1Set.mu_content[mu_i1], mu_pat10Set.mu_content[mu_i2] )], mu_sPat11Set ))) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = (!(mu_Spy_known[mu_construct11By110( mu_pat1Set.mu_content[mu_i1], mu_pat10Set.mu_content[mu_i2] )])) ; 
}
if ( mu__boolexpr201 )
{
mu_concatMsgNo = mu_construct11By110( mu_pat1Set.mu_content[mu_i1], mu_pat10Set.mu_content[mu_i2] );
if ( !(mu_exist( mu_pat11Set, mu_concatMsgNo )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_200 = (mu_i2) <= (mu_pat10Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_198 = (mu_i1) <= (mu_pat1Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDeryptionPat12(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",552);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",584);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr202;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr202 = TRUE ;
  else {
  mu__boolexpr202 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr202 )
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

void mu_aEncryptionPat12()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_204;  mu__while_expr_204 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_203 = 0;
while (mu__while_expr_204) {
if ( ++mu__counter_203 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_206;  mu__while_expr_206 = (mu_j) <= (mu_pat6Set.mu_length);
int mu__counter_205 = 0;
while (mu__while_expr_206) {
if ( ++mu__counter_205 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr207;
  if (!(mu_matchPat( mu_msgs[mu_construct12By26( mu_pat2Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )], mu_sPat12Set ))) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (!(mu_Spy_known[mu_construct12By26( mu_pat2Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr207 )
{
if ( (mu_msgs[mu_pat6Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct12By26( mu_pat2Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat12Set, mu_encMsgNo )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
}
mu_j = (mu_j) + (1);
};
mu__while_expr_206 = (mu_j) <= (mu_pat6Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_204 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat13(mu_1_Message& mu_msg)
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
mu_isPat12 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat12Set, mu_msgPat2 )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_msgPat2;
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat13()
{
/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",0);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",32);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",64);

mu_i1 = 1;
{
  bool mu__while_expr_209;  mu__while_expr_209 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_208 = 0;
while (mu__while_expr_209) {
if ( ++mu__counter_208 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_211;  mu__while_expr_211 = (mu_i2) <= (mu_pat12Set.mu_length);
int mu__counter_210 = 0;
while (mu__while_expr_211) {
if ( ++mu__counter_210 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr212;
  if (!(mu_matchPat( mu_msgs[mu_construct13By112( mu_pat1Set.mu_content[mu_i1], mu_pat12Set.mu_content[mu_i2] )], mu_sPat13Set ))) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = (!(mu_Spy_known[mu_construct13By112( mu_pat1Set.mu_content[mu_i1], mu_pat12Set.mu_content[mu_i2] )])) ; 
}
if ( mu__boolexpr212 )
{
mu_concatMsgNo = mu_construct13By112( mu_pat1Set.mu_content[mu_i1], mu_pat12Set.mu_content[mu_i2] );
if ( !(mu_exist( mu_pat13Set, mu_concatMsgNo )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_211 = (mu_i2) <= (mu_pat12Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_209 = (mu_i1) <= (mu_pat1Set.mu_length);
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
  mu_roleA.clear();
  mu_roleB.clear();
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
  mu_Spy_known.clear();
  mu_emit.clear();
  mu_gnum.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_roleA.undefine();
  mu_roleB.undefine();
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
  mu_Spy_known.undefine();
  mu_emit.undefine();
  mu_gnum.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_roleA.reset();
  mu_roleB.reset();
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
  mu_roleA.print();
  mu_roleB.print();
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
  mu_roleA.print_statistic();
  mu_roleB.print_statistic();
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
    mu_roleA.print_diff(prevstate);
    mu_roleB.print_diff(prevstate);
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
  mu_roleA.to_state( newstate );
  mu_roleB.to_state( newstate );
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
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[3], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr213;
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_i) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (mu_matchPat( mu_msgs[mu_pat13Set.mu_content[mu_i]], mu_sPat13Set )) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (!(mu_emit[mu_pat13Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr213;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 11 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
bool mu__boolexpr221;
bool mu__boolexpr222;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_i) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_matchPat( mu_msgs[mu_pat13Set.mu_content[mu_i]], mu_sPat13Set )) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (!(mu_emit[mu_pat13Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr218) {
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
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat13Set.mu_content[mu_i]]) )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat13Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat13Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch3. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[3].mu_msg );
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
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[2], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_i) <= (mu_pat11Set.mu_length)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (mu_matchPat( mu_msgs[mu_pat11Set.mu_content[mu_i]], mu_sPat11Set )) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (!(mu_emit[mu_pat11Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr223;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 22 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
bool mu__boolexpr232;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_i) <= (mu_pat11Set.mu_length)) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (mu_matchPat( mu_msgs[mu_pat11Set.mu_content[mu_i]], mu_sPat11Set )) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (!(mu_emit[mu_pat11Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr228) {
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
    r = what_rule - 11;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat11Set.mu_content[mu_i]]) )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat11Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleA[mu_j].mu_A;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat11Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch2. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[2].mu_msg );
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
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[1], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (mu_matchPat( mu_msgs[mu_pat8Set.mu_content[mu_i]], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (!(mu_emit[mu_pat8Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr233;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 22;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 33 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr238;
bool mu__boolexpr239;
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_matchPat( mu_msgs[mu_pat8Set.mu_content[mu_i]], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = (!(mu_emit[mu_pat8Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr238) {
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
    r = what_rule - 22;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat8Set.mu_content[mu_i]]) )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat8Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat8Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch1. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[1].mu_msg );
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
    return tsprintf("intruderGetMsgFromCh[3]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[3].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 33;
    while (what_rule < 34 )
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
    r = what_rule - 33;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat13("flag_pat13",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat13 ( mu_msg, mu_flag_pat13 );
if ( mu_flag_pat13 )
{
if ( !(mu_exist( mu_pat13Set, mu_msgNo )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_244;  mu__while_expr_244 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_243 = 0;
while (mu__while_expr_244) {
if ( ++mu__counter_243 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_244 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_246;  mu__while_expr_246 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_245 = 0;
while (mu__while_expr_246) {
if ( ++mu__counter_245 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_246 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_248;  mu__while_expr_248 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_247 = 0;
while (mu__while_expr_248) {
if ( ++mu__counter_247 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_248 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_aEncryptionPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_250;  mu__while_expr_250 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_249 = 0;
while (mu__while_expr_250) {
if ( ++mu__counter_249 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_250 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_enconcatPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_252;  mu__while_expr_252 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_251 = 0;
while (mu__while_expr_252) {
if ( ++mu__counter_251 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_252 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_254;  mu__while_expr_254 = (mu_i) <= (mu_pat10Set.mu_length);
int mu__counter_253 = 0;
while (mu__while_expr_254) {
if ( ++mu__counter_253 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat10 ( mu_msgs[mu_pat10Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_254 = (mu_i) <= (mu_pat10Set.mu_length);
}
};
mu_aEncryptionPat10 (  );
mu_i = 1;
{
  bool mu__while_expr_256;  mu__while_expr_256 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_255 = 0;
while (mu__while_expr_256) {
if ( ++mu__counter_255 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_256 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_enconcatPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_258;  mu__while_expr_258 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_257 = 0;
while (mu__while_expr_258) {
if ( ++mu__counter_257 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_258 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_aEncryptionPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_260;  mu__while_expr_260 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_259 = 0;
while (mu__while_expr_260) {
if ( ++mu__counter_259 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_260 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_enconcatPat13 (  );
}
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[2]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 34;
    while (what_rule < 35 )
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
    r = what_rule - 34;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat11 ( mu_msg, mu_flag_pat11 );
if ( mu_flag_pat11 )
{
if ( !(mu_exist( mu_pat11Set, mu_msgNo )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_i = 1;
{
  bool mu__while_expr_262;  mu__while_expr_262 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_261 = 0;
while (mu__while_expr_262) {
if ( ++mu__counter_261 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_262 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_264;  mu__while_expr_264 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_263 = 0;
while (mu__while_expr_264) {
if ( ++mu__counter_263 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_264 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_266;  mu__while_expr_266 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_265 = 0;
while (mu__while_expr_266) {
if ( ++mu__counter_265 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_266 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_aEncryptionPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_268;  mu__while_expr_268 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_267 = 0;
while (mu__while_expr_268) {
if ( ++mu__counter_267 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_268 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_enconcatPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_270;  mu__while_expr_270 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_269 = 0;
while (mu__while_expr_270) {
if ( ++mu__counter_269 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_270 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_272;  mu__while_expr_272 = (mu_i) <= (mu_pat10Set.mu_length);
int mu__counter_271 = 0;
while (mu__while_expr_272) {
if ( ++mu__counter_271 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat10 ( mu_msgs[mu_pat10Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_272 = (mu_i) <= (mu_pat10Set.mu_length);
}
};
mu_aEncryptionPat10 (  );
mu_i = 1;
{
  bool mu__while_expr_274;  mu__while_expr_274 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_273 = 0;
while (mu__while_expr_274) {
if ( ++mu__counter_273 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_274 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_enconcatPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_276;  mu__while_expr_276 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_275 = 0;
while (mu__while_expr_276) {
if ( ++mu__counter_275 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_276 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_aEncryptionPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_278;  mu__while_expr_278 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_277 = 0;
while (mu__while_expr_278) {
if ( ++mu__counter_277 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_278 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_enconcatPat13 (  );
}
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[1]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[1].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 35;
    while (what_rule < 36 )
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
    r = what_rule - 35;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat8("flag_pat8",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[1].mu_msg;
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
mu_i = 1;
{
  bool mu__while_expr_280;  mu__while_expr_280 = (mu_i) <= (mu_pat4Set.mu_length);
int mu__counter_279 = 0;
while (mu__while_expr_280) {
if ( ++mu__counter_279 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat4 ( mu_msgs[mu_pat4Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_280 = (mu_i) <= (mu_pat4Set.mu_length);
}
};
mu_aEncryptionPat4 (  );
mu_i = 1;
{
  bool mu__while_expr_282;  mu__while_expr_282 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_281 = 0;
while (mu__while_expr_282) {
if ( ++mu__counter_281 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat5 ( mu_msgs[mu_pat5Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_282 = (mu_i) <= (mu_pat5Set.mu_length);
}
};
mu_enconcatPat5 (  );
mu_i = 1;
{
  bool mu__while_expr_284;  mu__while_expr_284 = (mu_i) <= (mu_pat7Set.mu_length);
int mu__counter_283 = 0;
while (mu__while_expr_284) {
if ( ++mu__counter_283 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat7 ( mu_msgs[mu_pat7Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_284 = (mu_i) <= (mu_pat7Set.mu_length);
}
};
mu_aEncryptionPat7 (  );
mu_i = 1;
{
  bool mu__while_expr_286;  mu__while_expr_286 = (mu_i) <= (mu_pat8Set.mu_length);
int mu__counter_285 = 0;
while (mu__while_expr_286) {
if ( ++mu__counter_285 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat8 ( mu_msgs[mu_pat8Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_286 = (mu_i) <= (mu_pat8Set.mu_length);
}
};
mu_enconcatPat8 (  );
mu_i = 1;
{
  bool mu__while_expr_288;  mu__while_expr_288 = (mu_i) <= (mu_pat9Set.mu_length);
int mu__counter_287 = 0;
while (mu__while_expr_288) {
if ( ++mu__counter_287 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat9 ( mu_msgs[mu_pat9Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_288 = (mu_i) <= (mu_pat9Set.mu_length);
}
};
mu_enconcatPat9 (  );
mu_i = 1;
{
  bool mu__while_expr_290;  mu__while_expr_290 = (mu_i) <= (mu_pat10Set.mu_length);
int mu__counter_289 = 0;
while (mu__while_expr_290) {
if ( ++mu__counter_289 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat10 ( mu_msgs[mu_pat10Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_290 = (mu_i) <= (mu_pat10Set.mu_length);
}
};
mu_aEncryptionPat10 (  );
mu_i = 1;
{
  bool mu__while_expr_292;  mu__while_expr_292 = (mu_i) <= (mu_pat11Set.mu_length);
int mu__counter_291 = 0;
while (mu__while_expr_292) {
if ( ++mu__counter_291 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat11 ( mu_msgs[mu_pat11Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_292 = (mu_i) <= (mu_pat11Set.mu_length);
}
};
mu_enconcatPat11 (  );
mu_i = 1;
{
  bool mu__while_expr_294;  mu__while_expr_294 = (mu_i) <= (mu_pat12Set.mu_length);
int mu__counter_293 = 0;
while (mu__while_expr_294) {
if ( ++mu__counter_293 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_aDeryptionPat12 ( mu_msgs[mu_pat12Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_294 = (mu_i) <= (mu_pat12Set.mu_length);
}
};
mu_aEncryptionPat12 (  );
mu_i = 1;
{
  bool mu__while_expr_296;  mu__while_expr_296 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_295 = 0;
while (mu__while_expr_296) {
if ( ++mu__counter_295 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_deconcatPat13 ( mu_msgs[mu_pat13Set.mu_content[mu_i]] );
mu_i = (mu_i) + (1);
};
mu__while_expr_296 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
mu_enconcatPat13 (  );
}
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
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
bool mu__boolexpr297;
bool mu__boolexpr298;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr297;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 36;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 37 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr299;
bool mu__boolexpr300;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr299) {
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
    r = what_rule - 36;
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
mu_0_boolean mu_flag_pat13("flag_pat13",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat13 ( mu_msg, mu_flag_pat13 );
if ( mu_flag_pat13 )
{
mu_destruct13 ( mu_msg, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_locNb, mu_roleB[mu_i].mu_locA );
bool mu__boolexpr301;
bool mu__boolexpr302;
  if (!(mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A ))) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (mu_matchNonce( mu_roleB[mu_i].mu_locNb, mu_roleB[mu_i].mu_Nb )) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A )) ; 
}
if ( mu__boolexpr301 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B1;
}
}
cout << "roleB recieve from ch[3]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
mu_roleB[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr303;
bool mu__boolexpr304;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr303;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 37;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 38 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr305;
bool mu__boolexpr306;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr305) {
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
    r = what_rule - 37;
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
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons11 ( mu_roleB[mu_i].mu_B, mu_roleB[mu_i].mu_Nb, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_locNa, mu_roleB[mu_i].mu_Xb, mu_roleB[mu_i].mu_Yb, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B3;
cout << "roleB send into ch[2]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
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
bool mu__boolexpr307;
bool mu__boolexpr308;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr307;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 38;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 39 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr309;
bool mu__boolexpr310;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr309) {
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
    r = what_rule - 38;
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
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_isPat8 ( mu_msg, mu_flag_pat8 );
if ( mu_flag_pat8 )
{
mu_destruct8 ( mu_msg, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_locNa, mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_locXa, mu_roleB[mu_i].mu_locYa, mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_locA );
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
  if (!(mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A ))) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (mu_matchNonce( mu_roleB[mu_i].mu_locNa, mu_roleB[mu_i].mu_Na )) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (mu_matchAgent( mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_B )) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (mu_matchNonce( mu_roleB[mu_i].mu_locXa, mu_roleB[mu_i].mu_Xa )) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (mu_matchNonce( mu_roleB[mu_i].mu_locYa, mu_roleB[mu_i].mu_Ya )) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (mu_matchAgent( mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_B )) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A )) ; 
}
if ( mu__boolexpr311 )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B2;
}
}
cout << "roleB recieve from ch[1]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr317;
bool mu__boolexpr318;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A3))) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr317;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 39;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 40 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr319;
bool mu__boolexpr320;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A3))) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr319) {
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
    r = what_rule - 39;
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
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons13 ( mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_locNb, mu_roleA[mu_i].mu_A, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A1;
cout << "roleA send into ch[3]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
cout << "\n";
mu_roleA[mu_i].mu_commit = mu_true;
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
bool mu__boolexpr321;
bool mu__boolexpr322;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr321;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 40;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 41 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr323;
bool mu__boolexpr324;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr323) {
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
    r = what_rule - 40;
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
mu_0_boolean mu_flag_pat11("flag_pat11",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_isPat11 ( mu_msg, mu_flag_pat11 );
if ( mu_flag_pat11 )
{
mu_destruct11 ( mu_msg, mu_roleA[mu_i].mu_locB, mu_roleA[mu_i].mu_locNb, mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_locNa, mu_roleA[mu_i].mu_locXb, mu_roleA[mu_i].mu_locYb, mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_locB );
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
bool mu__boolexpr328;
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
  if (!(mu_matchAgent( mu_roleA[mu_i].mu_locB, mu_roleA[mu_i].mu_B ))) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = (mu_matchNonce( mu_roleA[mu_i].mu_locNb, mu_roleA[mu_i].mu_Nb )) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = (mu_matchAgent( mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (mu_matchNonce( mu_roleA[mu_i].mu_locNa, mu_roleA[mu_i].mu_Na )) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (mu_matchNonce( mu_roleA[mu_i].mu_locXb, mu_roleA[mu_i].mu_Xb )) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (mu_matchNonce( mu_roleA[mu_i].mu_locYb, mu_roleA[mu_i].mu_Yb )) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (mu_matchAgent( mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = (mu_matchAgent( mu_roleA[mu_i].mu_locB, mu_roleA[mu_i].mu_B )) ; 
}
if ( mu__boolexpr325 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A3;
}
}
cout << "roleA recieve from ch[2]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
bool mu__boolexpr332;
bool mu__boolexpr333;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr332;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 41;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 42 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr334;
bool mu__boolexpr335;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr334) {
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
    r = what_rule - 41;
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
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons8 ( mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_Na, mu_roleA[mu_i].mu_B, mu_roleA[mu_i].mu_Xa, mu_roleA[mu_i].mu_Ya, mu_roleA[mu_i].mu_B, mu_roleA[mu_i].mu_A, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A2;
cout << "roleA send into ch[1]. ";
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<11)
    { R0.NextRule(what_rule);
      if (what_rule<11) return; }
  if (what_rule>=11 && what_rule<22)
    { R1.NextRule(what_rule);
      if (what_rule<22) return; }
  if (what_rule>=22 && what_rule<33)
    { R2.NextRule(what_rule);
      if (what_rule<33) return; }
  if (what_rule>=33 && what_rule<34)
    { R3.NextRule(what_rule);
      if (what_rule<34) return; }
  if (what_rule>=34 && what_rule<35)
    { R4.NextRule(what_rule);
      if (what_rule<35) return; }
  if (what_rule>=35 && what_rule<36)
    { R5.NextRule(what_rule);
      if (what_rule<36) return; }
  if (what_rule>=36 && what_rule<37)
    { R6.NextRule(what_rule);
      if (what_rule<37) return; }
  if (what_rule>=37 && what_rule<38)
    { R7.NextRule(what_rule);
      if (what_rule<38) return; }
  if (what_rule>=38 && what_rule<39)
    { R8.NextRule(what_rule);
      if (what_rule<39) return; }
  if (what_rule>=39 && what_rule<40)
    { R9.NextRule(what_rule);
      if (what_rule<40) return; }
  if (what_rule>=40 && what_rule<41)
    { R10.NextRule(what_rule);
      if (what_rule<41) return; }
  if (what_rule>=41 && what_rule<42)
    { R11.NextRule(what_rule);
      if (what_rule<42) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=10) return R0.Condition(r-0);
  if (r>=11 && r<=21) return R1.Condition(r-11);
  if (r>=22 && r<=32) return R2.Condition(r-22);
  if (r>=33 && r<=33) return R3.Condition(r-33);
  if (r>=34 && r<=34) return R4.Condition(r-34);
  if (r>=35 && r<=35) return R5.Condition(r-35);
  if (r>=36 && r<=36) return R6.Condition(r-36);
  if (r>=37 && r<=37) return R7.Condition(r-37);
  if (r>=38 && r<=38) return R8.Condition(r-38);
  if (r>=39 && r<=39) return R9.Condition(r-39);
  if (r>=40 && r<=40) return R10.Condition(r-40);
  if (r>=41 && r<=41) return R11.Condition(r-41);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=10) { R0.Code(r-0); return; } 
  if (r>=11 && r<=21) { R1.Code(r-11); return; } 
  if (r>=22 && r<=32) { R2.Code(r-22); return; } 
  if (r>=33 && r<=33) { R3.Code(r-33); return; } 
  if (r>=34 && r<=34) { R4.Code(r-34); return; } 
  if (r>=35 && r<=35) { R5.Code(r-35); return; } 
  if (r>=36 && r<=36) { R6.Code(r-36); return; } 
  if (r>=37 && r<=37) { R7.Code(r-37); return; } 
  if (r>=38 && r<=38) { R8.Code(r-38); return; } 
  if (r>=39 && r<=39) { R9.Code(r-39); return; } 
  if (r>=40 && r<=40) { R10.Code(r-40); return; } 
  if (r>=41 && r<=41) { R11.Code(r-41); return; } 
}
int Priority(unsigned short r)
{
  if (r<=10) { return R0.Priority(); } 
  if (r>=11 && r<=21) { return R1.Priority(); } 
  if (r>=22 && r<=32) { return R2.Priority(); } 
  if (r>=33 && r<=33) { return R3.Priority(); } 
  if (r>=34 && r<=34) { return R4.Priority(); } 
  if (r>=35 && r<=35) { return R5.Priority(); } 
  if (r>=36 && r<=36) { return R6.Priority(); } 
  if (r>=37 && r<=37) { return R7.Priority(); } 
  if (r>=38 && r<=38) { return R8.Priority(); } 
  if (r>=39 && r<=39) { return R9.Priority(); } 
  if (r>=40 && r<=40) { return R10.Priority(); } 
  if (r>=41 && r<=41) { return R11.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=10) return R0.Name(r-0);
  if (r>=11 && r<=21) return R1.Name(r-11);
  if (r>=22 && r<=32) return R2.Name(r-22);
  if (r>=33 && r<=33) return R3.Name(r-33);
  if (r>=34 && r<=34) return R4.Name(r-34);
  if (r>=35 && r<=35) return R5.Name(r-35);
  if (r>=36 && r<=36) return R6.Name(r-36);
  if (r>=37 && r<=37) return R7.Name(r-37);
  if (r>=38 && r<=38) return R8.Name(r-38);
  if (r>=39 && r<=39) return R9.Name(r-39);
  if (r>=40 && r<=40) return R10.Name(r-40);
  if (r>=41 && r<=41) return R11.Name(r-41);
  return NULL;
}
};
const unsigned numrules = 42;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 42


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
mu_roleA[1].mu_Xa = mu_Xa1;
mu_roleA[1].mu_Ya = mu_Ya1;
mu_roleA[1].mu_st = mu_A1;
mu_roleA[1].mu_commit = mu_false;
mu_roleA[1].mu_Nb = mu_anyNonce;
mu_roleA[1].mu_Xb = mu_anyNonce;
mu_roleA[1].mu_Yb = mu_anyNonce;
mu_roleB[1].mu_B = mu_Bob;
mu_roleB[1].mu_Nb = mu_Nb;
mu_roleB[1].mu_Xb = mu_Xb1;
mu_roleB[1].mu_Yb = mu_Yb1;
mu_roleB[1].mu_st = mu_B1;
mu_roleB[1].mu_commit = mu_false;
mu_roleB[1].mu_Na = mu_anyNonce;
mu_roleB[1].mu_Xa = mu_anyNonce;
mu_roleB[1].mu_Ya = mu_anyNonce;
mu_roleB[1].mu_A = mu_anyAgent;
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
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleA[mu_i].mu_A;
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
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleB[mu_i].mu_B;
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
mu_constructSpat8 ( mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_Na, mu_roleB[mu_i].mu_B, mu_roleB[mu_i].mu_Xa, mu_roleB[mu_i].mu_Ya, mu_roleB[mu_i].mu_B, mu_roleB[mu_i].mu_A, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat11 ( mu_roleA[mu_i].mu_B, mu_roleA[mu_i].mu_Nb, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_Na, mu_roleA[mu_i].mu_Xb, mu_roleA[mu_i].mu_Yb, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_B, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat13 ( mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_Nb, mu_roleB[mu_i].mu_A, mu_gnum );
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
int mu__invariant_336() // Invariant "auth2"
{
bool mu__quant337; 
mu__quant337 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr338;
  if (!((mu_roleB[mu_i].mu_commit) == (mu_true))) mu__boolexpr338 = TRUE ;
  else {
bool mu__quant339; 
mu__quant339 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleA[mu_i].mu_Yb) == (mu_roleB[mu_j].mu_Yb)) )
  { mu__quant339 = TRUE; break; }
};
};
  mu__boolexpr338 = (mu__quant339) ; 
}
if ( !(mu__boolexpr338) )
  { mu__quant337 = FALSE; break; }
};
};
return mu__quant337;
};

bool mu__condition_340() // Condition for Rule "auth2"
{
  return mu__invariant_336( );
}

/**** end rule declaration ****/

int mu__invariant_341() // Invariant "auth1"
{
bool mu__quant342; 
mu__quant342 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr343;
  if (!((mu_roleA[mu_i].mu_commit) == (mu_true))) mu__boolexpr343 = TRUE ;
  else {
bool mu__quant344; 
mu__quant344 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleB[mu_i].mu_Ya) == (mu_roleA[mu_j].mu_Ya)) )
  { mu__quant344 = TRUE; break; }
};
};
  mu__boolexpr343 = (mu__quant344) ; 
}
if ( !(mu__boolexpr343) )
  { mu__quant342 = FALSE; break; }
};
};
return mu__quant342;
};

bool mu__condition_345() // Condition for Rule "auth1"
{
  return mu__invariant_341( );
}

/**** end rule declaration ****/

int mu__invariant_346() // Invariant "sec1"
{
bool mu__quant347; 
mu__quant347 = TRUE;
{
for(int mu_i = 0; mu_i <= 1000; mu_i++) {
bool mu__boolexpr348;
bool mu__boolexpr349;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_msgs[mu_i].mu_noncePart) == (mu_Ya1)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = TRUE ;
  else {
  mu__boolexpr348 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr348) )
  { mu__quant347 = FALSE; break; }
};
};
return mu__quant347;
};

bool mu__condition_350() // Condition for Rule "sec1"
{
  return mu__invariant_346( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"sec1", &mu__condition_350, NULL, },
{"auth1", &mu__condition_345, NULL, },
{"auth2", &mu__condition_340, NULL, },
};
const unsigned short numinvariants = 3;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
emit:NoScalarset
Spy_known:NoScalarset
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
roleA:NoScalarset
roleB:NoScalarset
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
        mu_roleA.MultisetSort();
        mu_roleB.MultisetSort();
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
  for (j=0; j<11; j++)
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
  for (j=0; j<1001; j++)
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
              mu_roleA.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
              mu_roleB.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
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
          mu_roleA.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleA.MultisetSort();
          mu_roleB.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleB.MultisetSort();
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
              mu_roleA.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
              mu_roleB.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
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
      mu_roleA.MultisetSort();
      mu_roleB.MultisetSort();
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
