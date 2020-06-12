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
#define BITS_IN_WORLD 619944
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
  mu_1_indexType (const char *name, int os): mu__long(0, 400, 9, name, os) {};
  mu_1_indexType (void): mu__long(0, 400, 9) {};
  mu_1_indexType (int val): mu__long(0, 400, 9, "Parameter or function result.", 0)
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

class mu_1_roleSNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleSNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleSNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleSNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleSNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_roleSNums mu_1_roleSNums_undefined_var;

class mu_1_roleCNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleCNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleCNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleCNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleCNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_roleCNums mu_1_roleCNums_undefined_var;

class mu_1_roleASNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleASNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleASNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleASNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleASNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_roleASNums mu_1_roleASNums_undefined_var;

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

const char *mu_1_AgentType::values[] = {"Intruder","s","as","c","anyAgent",NULL };

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

  mu_1_NonceType (const char *name, int os): mu__byte(6, 11, 3, name, os) {};
  mu_1_NonceType (void): mu__byte(6, 11, 3) {};
  mu_1_NonceType (int val): mu__byte(6, 11, 3, "Parameter or function result.", 0)
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

const char *mu_1_NonceType::values[] = {"n3","n1","n2","t","l","anyNonce",NULL };

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

class mu_1_SStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_SStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_SStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_SStatus::values[ int(val) - 15] );
    else return ( s << "Undefined" );
  };

  mu_1_SStatus (const char *name, int os): mu__byte(15, 18, 3, name, os) {};
  mu_1_SStatus (void): mu__byte(15, 18, 3) {};
  mu_1_SStatus (int val): mu__byte(15, 18, 3, "Parameter or function result.", 0)
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

const char *mu_1_SStatus::values[] = {"S1","S2","S3","S4",NULL };

/*** end of enum declaration ***/
mu_1_SStatus mu_1_SStatus_undefined_var;

class mu_1_CStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_CStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_CStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_CStatus::values[ int(val) - 19] );
    else return ( s << "Undefined" );
  };

  mu_1_CStatus (const char *name, int os): mu__byte(19, 22, 3, name, os) {};
  mu_1_CStatus (void): mu__byte(19, 22, 3) {};
  mu_1_CStatus (int val): mu__byte(19, 22, 3, "Parameter or function result.", 0)
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

const char *mu_1_CStatus::values[] = {"C1","C2","C3","C4",NULL };

/*** end of enum declaration ***/
mu_1_CStatus mu_1_CStatus_undefined_var;

class mu_1_ASStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ASStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ASStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_ASStatus::values[ int(val) - 23] );
    else return ( s << "Undefined" );
  };

  mu_1_ASStatus (const char *name, int os): mu__byte(23, 26, 3, name, os) {};
  mu_1_ASStatus (void): mu__byte(23, 26, 3) {};
  mu_1_ASStatus (int val): mu__byte(23, 26, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -23]; };
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
      cout << name << ":" << values[ value() -23] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_ASStatus::values[] = {"AS1","AS2","AS3","AS4",NULL };

/*** end of enum declaration ***/
mu_1_ASStatus mu_1_ASStatus_undefined_var;

class mu_1_MsgType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MsgType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MsgType& val)
  {
    if (val.defined())
      return ( s << mu_1_MsgType::values[ int(val) - 27] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(27, 34, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(27, 34, 4) {};
  mu_1_MsgType (int val): mu__byte(27, 34, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -27]; };
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
      cout << name << ":" << values[ value() -27] << '\n';
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

class mu_1_RoleS
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_N3;
  mu_1_NonceType mu_N1;
  mu_1_NonceType mu_N2;
  mu_1_NonceType mu_T;
  mu_1_NonceType mu_L;
  mu_1_AgentType mu_S;
  mu_1_AgentType mu_C;
  mu_1_AgentType mu_AS;
  mu_1_NonceType mu_locN3;
  mu_1_NonceType mu_locN1;
  mu_1_NonceType mu_locN2;
  mu_1_NonceType mu_locT;
  mu_1_NonceType mu_locL;
  mu_1_AgentType mu_locS;
  mu_1_AgentType mu_locC;
  mu_1_AgentType mu_locAS;
  mu_1_SStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleS ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleS ( void ) {};

  virtual ~mu_1_RoleS(); 
friend int CompareWeight(mu_1_RoleS& a, mu_1_RoleS& b)
  {
    int w;
    w = CompareWeight(a.mu_N3, b.mu_N3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N1, b.mu_N1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N2, b.mu_N2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_T, b.mu_T);
    if (w!=0) return w;
    w = CompareWeight(a.mu_L, b.mu_L);
    if (w!=0) return w;
    w = CompareWeight(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = CompareWeight(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = CompareWeight(a.mu_AS, b.mu_AS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN3, b.mu_locN3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN1, b.mu_locN1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN2, b.mu_locN2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locT, b.mu_locT);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locL, b.mu_locL);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locAS, b.mu_locAS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleS& a, mu_1_RoleS& b)
  {
    int w;
    w = Compare(a.mu_N3, b.mu_N3);
    if (w!=0) return w;
    w = Compare(a.mu_N1, b.mu_N1);
    if (w!=0) return w;
    w = Compare(a.mu_N2, b.mu_N2);
    if (w!=0) return w;
    w = Compare(a.mu_T, b.mu_T);
    if (w!=0) return w;
    w = Compare(a.mu_L, b.mu_L);
    if (w!=0) return w;
    w = Compare(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = Compare(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = Compare(a.mu_AS, b.mu_AS);
    if (w!=0) return w;
    w = Compare(a.mu_locN3, b.mu_locN3);
    if (w!=0) return w;
    w = Compare(a.mu_locN1, b.mu_locN1);
    if (w!=0) return w;
    w = Compare(a.mu_locN2, b.mu_locN2);
    if (w!=0) return w;
    w = Compare(a.mu_locT, b.mu_locT);
    if (w!=0) return w;
    w = Compare(a.mu_locL, b.mu_locL);
    if (w!=0) return w;
    w = Compare(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = Compare(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = Compare(a.mu_locAS, b.mu_locAS);
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
    mu_N3.MultisetSort();
    mu_N1.MultisetSort();
    mu_N2.MultisetSort();
    mu_T.MultisetSort();
    mu_L.MultisetSort();
    mu_S.MultisetSort();
    mu_C.MultisetSort();
    mu_AS.MultisetSort();
    mu_locN3.MultisetSort();
    mu_locN1.MultisetSort();
    mu_locN2.MultisetSort();
    mu_locT.MultisetSort();
    mu_locL.MultisetSort();
    mu_locS.MultisetSort();
    mu_locC.MultisetSort();
    mu_locAS.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_N3.print_statistic();
    mu_N1.print_statistic();
    mu_N2.print_statistic();
    mu_T.print_statistic();
    mu_L.print_statistic();
    mu_S.print_statistic();
    mu_C.print_statistic();
    mu_AS.print_statistic();
    mu_locN3.print_statistic();
    mu_locN1.print_statistic();
    mu_locN2.print_statistic();
    mu_locT.print_statistic();
    mu_locL.print_statistic();
    mu_locS.print_statistic();
    mu_locC.print_statistic();
    mu_locAS.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_N3.clear();
    mu_N1.clear();
    mu_N2.clear();
    mu_T.clear();
    mu_L.clear();
    mu_S.clear();
    mu_C.clear();
    mu_AS.clear();
    mu_locN3.clear();
    mu_locN1.clear();
    mu_locN2.clear();
    mu_locT.clear();
    mu_locL.clear();
    mu_locS.clear();
    mu_locC.clear();
    mu_locAS.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_N3.undefine();
    mu_N1.undefine();
    mu_N2.undefine();
    mu_T.undefine();
    mu_L.undefine();
    mu_S.undefine();
    mu_C.undefine();
    mu_AS.undefine();
    mu_locN3.undefine();
    mu_locN1.undefine();
    mu_locN2.undefine();
    mu_locT.undefine();
    mu_locL.undefine();
    mu_locS.undefine();
    mu_locC.undefine();
    mu_locAS.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_N3.reset();
    mu_N1.reset();
    mu_N2.reset();
    mu_T.reset();
    mu_L.reset();
    mu_S.reset();
    mu_C.reset();
    mu_AS.reset();
    mu_locN3.reset();
    mu_locN1.reset();
    mu_locN2.reset();
    mu_locT.reset();
    mu_locL.reset();
    mu_locS.reset();
    mu_locC.reset();
    mu_locAS.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_N3.print();
    mu_N1.print();
    mu_N2.print();
    mu_T.print();
    mu_L.print();
    mu_S.print();
    mu_C.print();
    mu_AS.print();
    mu_locN3.print();
    mu_locN1.print();
    mu_locN2.print();
    mu_locT.print();
    mu_locL.print();
    mu_locS.print();
    mu_locC.print();
    mu_locAS.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_N3.print_diff(prevstate);
    mu_N1.print_diff(prevstate);
    mu_N2.print_diff(prevstate);
    mu_T.print_diff(prevstate);
    mu_L.print_diff(prevstate);
    mu_S.print_diff(prevstate);
    mu_C.print_diff(prevstate);
    mu_AS.print_diff(prevstate);
    mu_locN3.print_diff(prevstate);
    mu_locN1.print_diff(prevstate);
    mu_locN2.print_diff(prevstate);
    mu_locT.print_diff(prevstate);
    mu_locL.print_diff(prevstate);
    mu_locS.print_diff(prevstate);
    mu_locC.print_diff(prevstate);
    mu_locAS.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_N3.to_state(thestate);
    mu_N1.to_state(thestate);
    mu_N2.to_state(thestate);
    mu_T.to_state(thestate);
    mu_L.to_state(thestate);
    mu_S.to_state(thestate);
    mu_C.to_state(thestate);
    mu_AS.to_state(thestate);
    mu_locN3.to_state(thestate);
    mu_locN1.to_state(thestate);
    mu_locN2.to_state(thestate);
    mu_locT.to_state(thestate);
    mu_locL.to_state(thestate);
    mu_locS.to_state(thestate);
    mu_locC.to_state(thestate);
    mu_locAS.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleS& operator= (const mu_1_RoleS& from) {
    mu_N3.value(from.mu_N3.value());
    mu_N1.value(from.mu_N1.value());
    mu_N2.value(from.mu_N2.value());
    mu_T.value(from.mu_T.value());
    mu_L.value(from.mu_L.value());
    mu_S.value(from.mu_S.value());
    mu_C.value(from.mu_C.value());
    mu_AS.value(from.mu_AS.value());
    mu_locN3.value(from.mu_locN3.value());
    mu_locN1.value(from.mu_locN1.value());
    mu_locN2.value(from.mu_locN2.value());
    mu_locT.value(from.mu_locT.value());
    mu_locL.value(from.mu_locL.value());
    mu_locS.value(from.mu_locS.value());
    mu_locC.value(from.mu_locC.value());
    mu_locAS.value(from.mu_locAS.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleS::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleS::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleS::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_N3.set_self_2(name, ".N3", os + 0 ); else mu_N3.set_self_2(NULL, NULL, 0);
  if (name) mu_N1.set_self_2(name, ".N1", os + 8 ); else mu_N1.set_self_2(NULL, NULL, 0);
  if (name) mu_N2.set_self_2(name, ".N2", os + 16 ); else mu_N2.set_self_2(NULL, NULL, 0);
  if (name) mu_T.set_self_2(name, ".T", os + 24 ); else mu_T.set_self_2(NULL, NULL, 0);
  if (name) mu_L.set_self_2(name, ".L", os + 32 ); else mu_L.set_self_2(NULL, NULL, 0);
  if (name) mu_S.set_self_2(name, ".S", os + 40 ); else mu_S.set_self_2(NULL, NULL, 0);
  if (name) mu_C.set_self_2(name, ".C", os + 48 ); else mu_C.set_self_2(NULL, NULL, 0);
  if (name) mu_AS.set_self_2(name, ".AS", os + 56 ); else mu_AS.set_self_2(NULL, NULL, 0);
  if (name) mu_locN3.set_self_2(name, ".locN3", os + 64 ); else mu_locN3.set_self_2(NULL, NULL, 0);
  if (name) mu_locN1.set_self_2(name, ".locN1", os + 72 ); else mu_locN1.set_self_2(NULL, NULL, 0);
  if (name) mu_locN2.set_self_2(name, ".locN2", os + 80 ); else mu_locN2.set_self_2(NULL, NULL, 0);
  if (name) mu_locT.set_self_2(name, ".locT", os + 88 ); else mu_locT.set_self_2(NULL, NULL, 0);
  if (name) mu_locL.set_self_2(name, ".locL", os + 96 ); else mu_locL.set_self_2(NULL, NULL, 0);
  if (name) mu_locS.set_self_2(name, ".locS", os + 104 ); else mu_locS.set_self_2(NULL, NULL, 0);
  if (name) mu_locC.set_self_2(name, ".locC", os + 112 ); else mu_locC.set_self_2(NULL, NULL, 0);
  if (name) mu_locAS.set_self_2(name, ".locAS", os + 120 ); else mu_locAS.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 128 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 136 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleS::~mu_1_RoleS()
{
}

/*** end record declaration ***/
mu_1_RoleS mu_1_RoleS_undefined_var;

class mu_1_RoleC
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_N3;
  mu_1_NonceType mu_N1;
  mu_1_NonceType mu_N2;
  mu_1_NonceType mu_T;
  mu_1_NonceType mu_L;
  mu_1_AgentType mu_S;
  mu_1_AgentType mu_C;
  mu_1_AgentType mu_AS;
  mu_1_NonceType mu_locN3;
  mu_1_NonceType mu_locN1;
  mu_1_NonceType mu_locN2;
  mu_1_NonceType mu_locT;
  mu_1_NonceType mu_locL;
  mu_1_AgentType mu_locS;
  mu_1_AgentType mu_locC;
  mu_1_AgentType mu_locAS;
  mu_1_CStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleC ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleC ( void ) {};

  virtual ~mu_1_RoleC(); 
friend int CompareWeight(mu_1_RoleC& a, mu_1_RoleC& b)
  {
    int w;
    w = CompareWeight(a.mu_N3, b.mu_N3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N1, b.mu_N1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N2, b.mu_N2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_T, b.mu_T);
    if (w!=0) return w;
    w = CompareWeight(a.mu_L, b.mu_L);
    if (w!=0) return w;
    w = CompareWeight(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = CompareWeight(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = CompareWeight(a.mu_AS, b.mu_AS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN3, b.mu_locN3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN1, b.mu_locN1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN2, b.mu_locN2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locT, b.mu_locT);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locL, b.mu_locL);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locAS, b.mu_locAS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleC& a, mu_1_RoleC& b)
  {
    int w;
    w = Compare(a.mu_N3, b.mu_N3);
    if (w!=0) return w;
    w = Compare(a.mu_N1, b.mu_N1);
    if (w!=0) return w;
    w = Compare(a.mu_N2, b.mu_N2);
    if (w!=0) return w;
    w = Compare(a.mu_T, b.mu_T);
    if (w!=0) return w;
    w = Compare(a.mu_L, b.mu_L);
    if (w!=0) return w;
    w = Compare(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = Compare(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = Compare(a.mu_AS, b.mu_AS);
    if (w!=0) return w;
    w = Compare(a.mu_locN3, b.mu_locN3);
    if (w!=0) return w;
    w = Compare(a.mu_locN1, b.mu_locN1);
    if (w!=0) return w;
    w = Compare(a.mu_locN2, b.mu_locN2);
    if (w!=0) return w;
    w = Compare(a.mu_locT, b.mu_locT);
    if (w!=0) return w;
    w = Compare(a.mu_locL, b.mu_locL);
    if (w!=0) return w;
    w = Compare(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = Compare(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = Compare(a.mu_locAS, b.mu_locAS);
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
    mu_N3.MultisetSort();
    mu_N1.MultisetSort();
    mu_N2.MultisetSort();
    mu_T.MultisetSort();
    mu_L.MultisetSort();
    mu_S.MultisetSort();
    mu_C.MultisetSort();
    mu_AS.MultisetSort();
    mu_locN3.MultisetSort();
    mu_locN1.MultisetSort();
    mu_locN2.MultisetSort();
    mu_locT.MultisetSort();
    mu_locL.MultisetSort();
    mu_locS.MultisetSort();
    mu_locC.MultisetSort();
    mu_locAS.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_N3.print_statistic();
    mu_N1.print_statistic();
    mu_N2.print_statistic();
    mu_T.print_statistic();
    mu_L.print_statistic();
    mu_S.print_statistic();
    mu_C.print_statistic();
    mu_AS.print_statistic();
    mu_locN3.print_statistic();
    mu_locN1.print_statistic();
    mu_locN2.print_statistic();
    mu_locT.print_statistic();
    mu_locL.print_statistic();
    mu_locS.print_statistic();
    mu_locC.print_statistic();
    mu_locAS.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_N3.clear();
    mu_N1.clear();
    mu_N2.clear();
    mu_T.clear();
    mu_L.clear();
    mu_S.clear();
    mu_C.clear();
    mu_AS.clear();
    mu_locN3.clear();
    mu_locN1.clear();
    mu_locN2.clear();
    mu_locT.clear();
    mu_locL.clear();
    mu_locS.clear();
    mu_locC.clear();
    mu_locAS.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_N3.undefine();
    mu_N1.undefine();
    mu_N2.undefine();
    mu_T.undefine();
    mu_L.undefine();
    mu_S.undefine();
    mu_C.undefine();
    mu_AS.undefine();
    mu_locN3.undefine();
    mu_locN1.undefine();
    mu_locN2.undefine();
    mu_locT.undefine();
    mu_locL.undefine();
    mu_locS.undefine();
    mu_locC.undefine();
    mu_locAS.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_N3.reset();
    mu_N1.reset();
    mu_N2.reset();
    mu_T.reset();
    mu_L.reset();
    mu_S.reset();
    mu_C.reset();
    mu_AS.reset();
    mu_locN3.reset();
    mu_locN1.reset();
    mu_locN2.reset();
    mu_locT.reset();
    mu_locL.reset();
    mu_locS.reset();
    mu_locC.reset();
    mu_locAS.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_N3.print();
    mu_N1.print();
    mu_N2.print();
    mu_T.print();
    mu_L.print();
    mu_S.print();
    mu_C.print();
    mu_AS.print();
    mu_locN3.print();
    mu_locN1.print();
    mu_locN2.print();
    mu_locT.print();
    mu_locL.print();
    mu_locS.print();
    mu_locC.print();
    mu_locAS.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_N3.print_diff(prevstate);
    mu_N1.print_diff(prevstate);
    mu_N2.print_diff(prevstate);
    mu_T.print_diff(prevstate);
    mu_L.print_diff(prevstate);
    mu_S.print_diff(prevstate);
    mu_C.print_diff(prevstate);
    mu_AS.print_diff(prevstate);
    mu_locN3.print_diff(prevstate);
    mu_locN1.print_diff(prevstate);
    mu_locN2.print_diff(prevstate);
    mu_locT.print_diff(prevstate);
    mu_locL.print_diff(prevstate);
    mu_locS.print_diff(prevstate);
    mu_locC.print_diff(prevstate);
    mu_locAS.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_N3.to_state(thestate);
    mu_N1.to_state(thestate);
    mu_N2.to_state(thestate);
    mu_T.to_state(thestate);
    mu_L.to_state(thestate);
    mu_S.to_state(thestate);
    mu_C.to_state(thestate);
    mu_AS.to_state(thestate);
    mu_locN3.to_state(thestate);
    mu_locN1.to_state(thestate);
    mu_locN2.to_state(thestate);
    mu_locT.to_state(thestate);
    mu_locL.to_state(thestate);
    mu_locS.to_state(thestate);
    mu_locC.to_state(thestate);
    mu_locAS.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleC& operator= (const mu_1_RoleC& from) {
    mu_N3.value(from.mu_N3.value());
    mu_N1.value(from.mu_N1.value());
    mu_N2.value(from.mu_N2.value());
    mu_T.value(from.mu_T.value());
    mu_L.value(from.mu_L.value());
    mu_S.value(from.mu_S.value());
    mu_C.value(from.mu_C.value());
    mu_AS.value(from.mu_AS.value());
    mu_locN3.value(from.mu_locN3.value());
    mu_locN1.value(from.mu_locN1.value());
    mu_locN2.value(from.mu_locN2.value());
    mu_locT.value(from.mu_locT.value());
    mu_locL.value(from.mu_locL.value());
    mu_locS.value(from.mu_locS.value());
    mu_locC.value(from.mu_locC.value());
    mu_locAS.value(from.mu_locAS.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleC::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleC::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleC::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_N3.set_self_2(name, ".N3", os + 0 ); else mu_N3.set_self_2(NULL, NULL, 0);
  if (name) mu_N1.set_self_2(name, ".N1", os + 8 ); else mu_N1.set_self_2(NULL, NULL, 0);
  if (name) mu_N2.set_self_2(name, ".N2", os + 16 ); else mu_N2.set_self_2(NULL, NULL, 0);
  if (name) mu_T.set_self_2(name, ".T", os + 24 ); else mu_T.set_self_2(NULL, NULL, 0);
  if (name) mu_L.set_self_2(name, ".L", os + 32 ); else mu_L.set_self_2(NULL, NULL, 0);
  if (name) mu_S.set_self_2(name, ".S", os + 40 ); else mu_S.set_self_2(NULL, NULL, 0);
  if (name) mu_C.set_self_2(name, ".C", os + 48 ); else mu_C.set_self_2(NULL, NULL, 0);
  if (name) mu_AS.set_self_2(name, ".AS", os + 56 ); else mu_AS.set_self_2(NULL, NULL, 0);
  if (name) mu_locN3.set_self_2(name, ".locN3", os + 64 ); else mu_locN3.set_self_2(NULL, NULL, 0);
  if (name) mu_locN1.set_self_2(name, ".locN1", os + 72 ); else mu_locN1.set_self_2(NULL, NULL, 0);
  if (name) mu_locN2.set_self_2(name, ".locN2", os + 80 ); else mu_locN2.set_self_2(NULL, NULL, 0);
  if (name) mu_locT.set_self_2(name, ".locT", os + 88 ); else mu_locT.set_self_2(NULL, NULL, 0);
  if (name) mu_locL.set_self_2(name, ".locL", os + 96 ); else mu_locL.set_self_2(NULL, NULL, 0);
  if (name) mu_locS.set_self_2(name, ".locS", os + 104 ); else mu_locS.set_self_2(NULL, NULL, 0);
  if (name) mu_locC.set_self_2(name, ".locC", os + 112 ); else mu_locC.set_self_2(NULL, NULL, 0);
  if (name) mu_locAS.set_self_2(name, ".locAS", os + 120 ); else mu_locAS.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 128 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 136 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleC::~mu_1_RoleC()
{
}

/*** end record declaration ***/
mu_1_RoleC mu_1_RoleC_undefined_var;

class mu_1_RoleAS
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_N3;
  mu_1_NonceType mu_N1;
  mu_1_NonceType mu_N2;
  mu_1_NonceType mu_T;
  mu_1_NonceType mu_L;
  mu_1_AgentType mu_S;
  mu_1_AgentType mu_C;
  mu_1_AgentType mu_AS;
  mu_1_NonceType mu_locN3;
  mu_1_NonceType mu_locN1;
  mu_1_NonceType mu_locN2;
  mu_1_NonceType mu_locT;
  mu_1_NonceType mu_locL;
  mu_1_AgentType mu_locS;
  mu_1_AgentType mu_locC;
  mu_1_AgentType mu_locAS;
  mu_1_ASStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleAS ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleAS ( void ) {};

  virtual ~mu_1_RoleAS(); 
friend int CompareWeight(mu_1_RoleAS& a, mu_1_RoleAS& b)
  {
    int w;
    w = CompareWeight(a.mu_N3, b.mu_N3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N1, b.mu_N1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N2, b.mu_N2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_T, b.mu_T);
    if (w!=0) return w;
    w = CompareWeight(a.mu_L, b.mu_L);
    if (w!=0) return w;
    w = CompareWeight(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = CompareWeight(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = CompareWeight(a.mu_AS, b.mu_AS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN3, b.mu_locN3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN1, b.mu_locN1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN2, b.mu_locN2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locT, b.mu_locT);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locL, b.mu_locL);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locAS, b.mu_locAS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleAS& a, mu_1_RoleAS& b)
  {
    int w;
    w = Compare(a.mu_N3, b.mu_N3);
    if (w!=0) return w;
    w = Compare(a.mu_N1, b.mu_N1);
    if (w!=0) return w;
    w = Compare(a.mu_N2, b.mu_N2);
    if (w!=0) return w;
    w = Compare(a.mu_T, b.mu_T);
    if (w!=0) return w;
    w = Compare(a.mu_L, b.mu_L);
    if (w!=0) return w;
    w = Compare(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = Compare(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = Compare(a.mu_AS, b.mu_AS);
    if (w!=0) return w;
    w = Compare(a.mu_locN3, b.mu_locN3);
    if (w!=0) return w;
    w = Compare(a.mu_locN1, b.mu_locN1);
    if (w!=0) return w;
    w = Compare(a.mu_locN2, b.mu_locN2);
    if (w!=0) return w;
    w = Compare(a.mu_locT, b.mu_locT);
    if (w!=0) return w;
    w = Compare(a.mu_locL, b.mu_locL);
    if (w!=0) return w;
    w = Compare(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = Compare(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = Compare(a.mu_locAS, b.mu_locAS);
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
    mu_N3.MultisetSort();
    mu_N1.MultisetSort();
    mu_N2.MultisetSort();
    mu_T.MultisetSort();
    mu_L.MultisetSort();
    mu_S.MultisetSort();
    mu_C.MultisetSort();
    mu_AS.MultisetSort();
    mu_locN3.MultisetSort();
    mu_locN1.MultisetSort();
    mu_locN2.MultisetSort();
    mu_locT.MultisetSort();
    mu_locL.MultisetSort();
    mu_locS.MultisetSort();
    mu_locC.MultisetSort();
    mu_locAS.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_N3.print_statistic();
    mu_N1.print_statistic();
    mu_N2.print_statistic();
    mu_T.print_statistic();
    mu_L.print_statistic();
    mu_S.print_statistic();
    mu_C.print_statistic();
    mu_AS.print_statistic();
    mu_locN3.print_statistic();
    mu_locN1.print_statistic();
    mu_locN2.print_statistic();
    mu_locT.print_statistic();
    mu_locL.print_statistic();
    mu_locS.print_statistic();
    mu_locC.print_statistic();
    mu_locAS.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_N3.clear();
    mu_N1.clear();
    mu_N2.clear();
    mu_T.clear();
    mu_L.clear();
    mu_S.clear();
    mu_C.clear();
    mu_AS.clear();
    mu_locN3.clear();
    mu_locN1.clear();
    mu_locN2.clear();
    mu_locT.clear();
    mu_locL.clear();
    mu_locS.clear();
    mu_locC.clear();
    mu_locAS.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_N3.undefine();
    mu_N1.undefine();
    mu_N2.undefine();
    mu_T.undefine();
    mu_L.undefine();
    mu_S.undefine();
    mu_C.undefine();
    mu_AS.undefine();
    mu_locN3.undefine();
    mu_locN1.undefine();
    mu_locN2.undefine();
    mu_locT.undefine();
    mu_locL.undefine();
    mu_locS.undefine();
    mu_locC.undefine();
    mu_locAS.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_N3.reset();
    mu_N1.reset();
    mu_N2.reset();
    mu_T.reset();
    mu_L.reset();
    mu_S.reset();
    mu_C.reset();
    mu_AS.reset();
    mu_locN3.reset();
    mu_locN1.reset();
    mu_locN2.reset();
    mu_locT.reset();
    mu_locL.reset();
    mu_locS.reset();
    mu_locC.reset();
    mu_locAS.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_N3.print();
    mu_N1.print();
    mu_N2.print();
    mu_T.print();
    mu_L.print();
    mu_S.print();
    mu_C.print();
    mu_AS.print();
    mu_locN3.print();
    mu_locN1.print();
    mu_locN2.print();
    mu_locT.print();
    mu_locL.print();
    mu_locS.print();
    mu_locC.print();
    mu_locAS.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_N3.print_diff(prevstate);
    mu_N1.print_diff(prevstate);
    mu_N2.print_diff(prevstate);
    mu_T.print_diff(prevstate);
    mu_L.print_diff(prevstate);
    mu_S.print_diff(prevstate);
    mu_C.print_diff(prevstate);
    mu_AS.print_diff(prevstate);
    mu_locN3.print_diff(prevstate);
    mu_locN1.print_diff(prevstate);
    mu_locN2.print_diff(prevstate);
    mu_locT.print_diff(prevstate);
    mu_locL.print_diff(prevstate);
    mu_locS.print_diff(prevstate);
    mu_locC.print_diff(prevstate);
    mu_locAS.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_N3.to_state(thestate);
    mu_N1.to_state(thestate);
    mu_N2.to_state(thestate);
    mu_T.to_state(thestate);
    mu_L.to_state(thestate);
    mu_S.to_state(thestate);
    mu_C.to_state(thestate);
    mu_AS.to_state(thestate);
    mu_locN3.to_state(thestate);
    mu_locN1.to_state(thestate);
    mu_locN2.to_state(thestate);
    mu_locT.to_state(thestate);
    mu_locL.to_state(thestate);
    mu_locS.to_state(thestate);
    mu_locC.to_state(thestate);
    mu_locAS.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleAS& operator= (const mu_1_RoleAS& from) {
    mu_N3.value(from.mu_N3.value());
    mu_N1.value(from.mu_N1.value());
    mu_N2.value(from.mu_N2.value());
    mu_T.value(from.mu_T.value());
    mu_L.value(from.mu_L.value());
    mu_S.value(from.mu_S.value());
    mu_C.value(from.mu_C.value());
    mu_AS.value(from.mu_AS.value());
    mu_locN3.value(from.mu_locN3.value());
    mu_locN1.value(from.mu_locN1.value());
    mu_locN2.value(from.mu_locN2.value());
    mu_locT.value(from.mu_locT.value());
    mu_locL.value(from.mu_locL.value());
    mu_locS.value(from.mu_locS.value());
    mu_locC.value(from.mu_locC.value());
    mu_locAS.value(from.mu_locAS.value());
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleAS::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleAS::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleAS::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_N3.set_self_2(name, ".N3", os + 0 ); else mu_N3.set_self_2(NULL, NULL, 0);
  if (name) mu_N1.set_self_2(name, ".N1", os + 8 ); else mu_N1.set_self_2(NULL, NULL, 0);
  if (name) mu_N2.set_self_2(name, ".N2", os + 16 ); else mu_N2.set_self_2(NULL, NULL, 0);
  if (name) mu_T.set_self_2(name, ".T", os + 24 ); else mu_T.set_self_2(NULL, NULL, 0);
  if (name) mu_L.set_self_2(name, ".L", os + 32 ); else mu_L.set_self_2(NULL, NULL, 0);
  if (name) mu_S.set_self_2(name, ".S", os + 40 ); else mu_S.set_self_2(NULL, NULL, 0);
  if (name) mu_C.set_self_2(name, ".C", os + 48 ); else mu_C.set_self_2(NULL, NULL, 0);
  if (name) mu_AS.set_self_2(name, ".AS", os + 56 ); else mu_AS.set_self_2(NULL, NULL, 0);
  if (name) mu_locN3.set_self_2(name, ".locN3", os + 64 ); else mu_locN3.set_self_2(NULL, NULL, 0);
  if (name) mu_locN1.set_self_2(name, ".locN1", os + 72 ); else mu_locN1.set_self_2(NULL, NULL, 0);
  if (name) mu_locN2.set_self_2(name, ".locN2", os + 80 ); else mu_locN2.set_self_2(NULL, NULL, 0);
  if (name) mu_locT.set_self_2(name, ".locT", os + 88 ); else mu_locT.set_self_2(NULL, NULL, 0);
  if (name) mu_locL.set_self_2(name, ".locL", os + 96 ); else mu_locL.set_self_2(NULL, NULL, 0);
  if (name) mu_locS.set_self_2(name, ".locS", os + 104 ); else mu_locS.set_self_2(NULL, NULL, 0);
  if (name) mu_locC.set_self_2(name, ".locC", os + 112 ); else mu_locC.set_self_2(NULL, NULL, 0);
  if (name) mu_locAS.set_self_2(name, ".locAS", os + 120 ); else mu_locAS.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 128 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 136 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleAS::~mu_1_RoleAS()
{
}

/*** end record declaration ***/
mu_1_RoleAS mu_1_RoleAS_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_indexType array[ 401 ];
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
    if ( ( index >= 0 ) && ( index <= 400 ) )
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
    for (int i = 0; i < 401; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<401; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<401; i++) {
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
    for (int i=0; i<401; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<401; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 401; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 401; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 401; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 401; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 401; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 401; i++)
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
  for(int i = 0; i < 401; i++) {
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
  if (name) mu_length.set_self_2(name, ".length", os + 12832 ); else mu_length.set_self_2(NULL, NULL, 0);
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
  mu_1_RoleS array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_RoleS& operator[] (int index) /* const */
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
  mu_1_RoleC array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_RoleC& operator[] (int index) /* const */
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
  mu_1_RoleAS array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_RoleAS& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 144 + os);
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
  mu_1_Message array[ 401 ];
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
    if ( ( index >= 0 ) && ( index <= 400 ) )
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
    for (int i = 0; i < 401; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<401; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<401; i++) {
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
    for (int i=0; i<401; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<401; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 401; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 401; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 401; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 401; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 401; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 401; i++)
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
  for(int i = 0; i < 401; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 552 + os);
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
  mu_0_boolean array[ 401 ];
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
    if ( ( index >= 0 ) && ( index <= 400 ) )
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
    for (int i = 0; i < 401; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<401; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<401; i++) {
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
    for (int i=0; i<401; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<401; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 401; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 401; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 401; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 401; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 401; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 401; i++)
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
  for(int i = 0; i < 401; i++) {
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
  mu_0_boolean array[ 401 ];
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
    if ( ( index >= 0 ) && ( index <= 400 ) )
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
    for (int i = 0; i < 401; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<401; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<401; i++) {
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
    for (int i=0; i<401; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<401; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 401; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 401; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 401; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 401; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 401; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 401; i++)
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
  for(int i = 0; i < 401; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

const int mu_roleSNum = 1;
const int mu_roleCNum = 1;
const int mu_roleASNum = 1;
const int mu_totalFact = 400;
const int mu_msgLength = 10;
const int mu_chanNum = 10;
const int mu_Intruder = 1;
const int mu_s = 2;
const int mu_as = 3;
const int mu_c = 4;
const int mu_anyAgent = 5;
const int mu_n3 = 6;
const int mu_n1 = 7;
const int mu_n2 = 8;
const int mu_t = 9;
const int mu_l = 10;
const int mu_anyNonce = 11;
const int mu_PK = 12;
const int mu_SK = 13;
const int mu_Symk = 14;
const int mu_S1 = 15;
const int mu_S2 = 16;
const int mu_S3 = 17;
const int mu_S4 = 18;
const int mu_C1 = 19;
const int mu_C2 = 20;
const int mu_C3 = 21;
const int mu_C4 = 22;
const int mu_AS1 = 23;
const int mu_AS2 = 24;
const int mu_AS3 = 25;
const int mu_AS4 = 26;
const int mu_null = 27;
const int mu_agent = 28;
const int mu_nonce = 29;
const int mu_key = 30;
const int mu_aenc = 31;
const int mu_senc = 32;
const int mu_concat = 33;
const int mu_hash = 34;
/*** Variable declaration ***/
mu_1__type_2 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_3 mu_roleS("roleS",5760);

/*** Variable declaration ***/
mu_1__type_4 mu_roleC("roleC",5904);

/*** Variable declaration ***/
mu_1__type_5 mu_roleAS("roleAS",6048);

/*** Variable declaration ***/
mu_1__type_6 mu_msgs("msgs",6192);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",227544);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",227576);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat1Set("sPat1Set",240440);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",253304);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat2Set("sPat2Set",266168);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",279032);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat3Set("sPat3Set",291896);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",304760);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat4Set("sPat4Set",317624);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",330488);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat5Set("sPat5Set",343352);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",356216);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat6Set("sPat6Set",369080);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",381944);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat7Set("sPat7Set",394808);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",407672);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat8Set("sPat8Set",420536);

/*** Variable declaration ***/
mu_1_msgSet mu_pat9Set("pat9Set",433400);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat9Set("sPat9Set",446264);

/*** Variable declaration ***/
mu_1_msgSet mu_pat10Set("pat10Set",459128);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat10Set("sPat10Set",471992);

/*** Variable declaration ***/
mu_1_msgSet mu_pat11Set("pat11Set",484856);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat11Set("sPat11Set",497720);

/*** Variable declaration ***/
mu_1_msgSet mu_pat12Set("pat12Set",510584);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat12Set("sPat12Set",523448);

/*** Variable declaration ***/
mu_1_msgSet mu_pat13Set("pat13Set",536312);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat13Set("sPat13Set",549176);

/*** Variable declaration ***/
mu_1_msgSet mu_pat14Set("pat14Set",562040);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat14Set("sPat14Set",574904);

/*** Variable declaration ***/
mu_1_msgSet mu_pat15Set("pat15Set",587768);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat15Set("sPat15Set",600632);

/*** Variable declaration ***/
mu_1__type_7 mu_Spy_known("Spy_known",613496);

/*** Variable declaration ***/
mu_1__type_8 mu_emit("emit",616704);

/*** Variable declaration ***/
mu_1_indexType mu_gnum("gnum",619912);

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
for(int mu_i = 0; mu_i <= 400; mu_i++) {
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

void mu_lookAddPat1(const mu_1_AgentType& mu_C, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_C) )
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
if (mu_C.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_C;
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

void mu_constructSpat1(const mu_1_AgentType& mu_C, mu_1_indexType& mu_num)
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
if ( (mu_msgs[mu_i].mu_ag) == (mu_C) )
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
if (mu_C.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_C;
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

void mu_lookAddPat2(const mu_1_NonceType& mu_N1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_N1) )
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
if (mu_N1.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_N1;
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

void mu_constructSpat2(const mu_1_NonceType& mu_N1, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_29;  mu__while_expr_29 = (mu_i) <= (mu_msg_end);
int mu__counter_28 = 0;
while (mu__while_expr_29) {
if ( ++mu__counter_28 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_N1) )
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
mu_msgs[mu_index].mu_msgType = mu_nonce;
if (mu_N1.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_N1;
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

void mu_lookAddPat3(const mu_1_AgentType& mu_C, const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",1104);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1656);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1688);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1720);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",1752);

mu_index = 0;
mu_lookAddPat1 ( mu_C, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_S, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_N1, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr30;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr30 )
{
bool mu__boolexpr31;
bool mu__boolexpr32;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
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

void mu_isPat3(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
bool mu__boolexpr33;
bool mu__boolexpr34;
  if (!(mu_flagPart1)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = (mu_flagPart3) ; 
}
if ( mu__boolexpr33 )
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

void mu_constructSpat3(const mu_1_AgentType& mu_C, const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N1, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_C, mu_i1 );
mu_constructSpat1 ( mu_S, mu_i2 );
mu_constructSpat2 ( mu_N1, mu_i3 );
mu_i = 1;
{
  bool mu__while_expr_36;  mu__while_expr_36 = (mu_i) <= (mu_msg_end);
int mu__counter_35 = 0;
while (mu__while_expr_36) {
if ( ++mu__counter_35 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr37;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr37 )
{
bool mu__boolexpr38;
bool mu__boolexpr39;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr38 )
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

void mu_lookAddPat4(const mu_1_AgentType& mu_SPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr40;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK))) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_SPk)) ; 
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
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_PK;
if (mu_SPk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_SPk;
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

void mu_constructSpat4(const mu_1_AgentType& mu_SPk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_42;  mu__while_expr_42 = (mu_i) <= (mu_msg_end);
int mu__counter_41 = 0;
while (mu__while_expr_42) {
if ( ++mu__counter_41 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr43;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr43 )
{
if ( (mu_msgs[mu_i].mu_k.mu_ag) == (mu_SPk) )
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
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_PK;
if (mu_SPk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_SPk;
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

void mu_lookAddPat5(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_AS, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_C, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_N1, mu_msg3, mu_i3 );
mu_lookAddPat4 ( mu_SPk, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr44;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr44 )
{
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr45 )
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
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat4 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
  if (!(mu_flagPart1)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = (mu_flagPart4) ; 
}
if ( mu__boolexpr48 )
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

void mu_constructSpat5(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_AS, mu_i1 );
mu_constructSpat1 ( mu_C, mu_i2 );
mu_constructSpat2 ( mu_N1, mu_i3 );
mu_constructSpat4 ( mu_SPk, mu_i4 );
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
  mu__boolexpr53 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr53 )
{
bool mu__boolexpr54;
bool mu__boolexpr55;
bool mu__boolexpr56;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr54 )
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

void mu_lookAddPat6(const mu_1_AgentType& mu_ASSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr57;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_ASSk)) ; 
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
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_SK;
if (mu_ASSk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_ASSk;
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

void mu_constructSpat6(const mu_1_AgentType& mu_ASSk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",32);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_59;  mu__while_expr_59 = (mu_i) <= (mu_msg_end);
int mu__counter_58 = 0;
while (mu__while_expr_59) {
if ( ++mu__counter_58 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr60;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_SK)) ; 
}
if ( mu__boolexpr60 )
{
if ( (mu_msgs[mu_i].mu_k.mu_ag) == (mu_ASSk) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_59 = (mu_i) <= (mu_msg_end);
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
if (mu_ASSk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_ASSk;
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

void mu_lookAddPat7(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_ASSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat5 ( mu_AS, mu_C, mu_N1, mu_SPk, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_ASSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr61;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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

void mu_constructSpat7(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_ASSk, mu_1_indexType& mu_num)
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
mu_constructSpat5 ( mu_AS, mu_C, mu_N1, mu_SPk, mu_i1 );
mu_constructSpat6 ( mu_ASSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_64;  mu__while_expr_64 = (mu_i) <= (mu_msg_end);
int mu__counter_63 = 0;
while (mu__while_expr_64) {
if ( ++mu__counter_63 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr65;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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

void mu_lookAddPat8(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_ASSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_AS, mu_msg1, mu_i1 );
mu_lookAddPat7 ( mu_AS, mu_C, mu_N1, mu_SPk, mu_ASSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr66;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr66 )
{
bool mu__boolexpr67;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr67 )
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
bool mu__boolexpr68;
  if (!(mu_flagPart1)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_flagPart2) ; 
}
if ( mu__boolexpr68 )
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

void mu_constructSpat8(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_ASSk, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_AS, mu_i1 );
mu_constructSpat7 ( mu_AS, mu_C, mu_N1, mu_SPk, mu_ASSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_70;  mu__while_expr_70 = (mu_i) <= (mu_msg_end);
int mu__counter_69 = 0;
while (mu__while_expr_70) {
if ( ++mu__counter_69 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr71;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr71 )
{
bool mu__boolexpr72;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr72 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_70 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat9(const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat2 ( mu_N2, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_SPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr73;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr73 )
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
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr74;
  if (!(mu_flagPart1)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_flagPart2) ; 
}
if ( mu__boolexpr74 )
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

void mu_constructSpat9(const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, mu_1_indexType& mu_num)
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
mu_constructSpat2 ( mu_N2, mu_i1 );
mu_constructSpat4 ( mu_SPk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_76;  mu__while_expr_76 = (mu_i) <= (mu_msg_end);
int mu__counter_75 = 0;
while (mu__while_expr_76) {
if ( ++mu__counter_75 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr77;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr77 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_76 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat10(const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_C, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_T, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_L, mu_msg3, mu_i3 );
mu_lookAddPat9 ( mu_N2, mu_SPk, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr78;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr78 )
{
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
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

void mu_isPat10(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat9 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
  if (!(mu_flagPart1)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_flagPart4) ; 
}
if ( mu__boolexpr82 )
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

void mu_constructSpat10(const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_C, mu_i1 );
mu_constructSpat2 ( mu_T, mu_i2 );
mu_constructSpat2 ( mu_L, mu_i3 );
mu_constructSpat9 ( mu_N2, mu_SPk, mu_i4 );
mu_i = 1;
{
  bool mu__while_expr_86;  mu__while_expr_86 = (mu_i) <= (mu_msg_end);
int mu__counter_85 = 0;
while (mu__while_expr_86) {
if ( ++mu__counter_85 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr87;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr87 )
{
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr88 )
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

void mu_lookAddPat11(const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_CSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat10 ( mu_C, mu_T, mu_L, mu_N2, mu_SPk, mu_msg1, mu_i1 );
mu_lookAddPat6 ( mu_CSk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr91;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr91 )
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
mu_isPat6 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr92;
  if (!(mu_flagPart1)) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_flagPart2) ; 
}
if ( mu__boolexpr92 )
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

void mu_constructSpat11(const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_CSk, mu_1_indexType& mu_num)
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
mu_constructSpat10 ( mu_C, mu_T, mu_L, mu_N2, mu_SPk, mu_i1 );
mu_constructSpat6 ( mu_CSk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_94;  mu__while_expr_94 = (mu_i) <= (mu_msg_end);
int mu__counter_93 = 0;
while (mu__while_expr_94) {
if ( ++mu__counter_93 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr95;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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
mu__while_expr_94 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat12(const mu_1_AgentType& mu_C, const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_CSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",1104);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1656);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1688);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1720);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",1752);

mu_index = 0;
mu_lookAddPat1 ( mu_C, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_S, mu_msg2, mu_i2 );
mu_lookAddPat11 ( mu_C, mu_T, mu_L, mu_N2, mu_SPk, mu_CSk, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr96;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr96 )
{
bool mu__boolexpr97;
bool mu__boolexpr98;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
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
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat11 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!(mu_flagPart1)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (mu_flagPart3) ; 
}
if ( mu__boolexpr99 )
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

void mu_constructSpat12(const mu_1_AgentType& mu_C, const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_CSk, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_C, mu_i1 );
mu_constructSpat1 ( mu_S, mu_i2 );
mu_constructSpat11 ( mu_C, mu_T, mu_L, mu_N2, mu_SPk, mu_CSk, mu_i3 );
mu_i = 1;
{
  bool mu__while_expr_102;  mu__while_expr_102 = (mu_i) <= (mu_msg_end);
int mu__counter_101 = 0;
while (mu__while_expr_102) {
if ( ++mu__counter_101 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr103;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr103 )
{
bool mu__boolexpr104;
bool mu__boolexpr105;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr104 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_102 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat13(const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat1 ( mu_S, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_N2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr106;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr106 )
{
bool mu__boolexpr107;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr107 )
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
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr108;
  if (!(mu_flagPart1)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_flagPart2) ; 
}
if ( mu__boolexpr108 )
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

void mu_constructSpat13(const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N2, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_S, mu_i1 );
mu_constructSpat2 ( mu_N2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_110;  mu__while_expr_110 = (mu_i) <= (mu_msg_end);
int mu__counter_109 = 0;
while (mu__while_expr_110) {
if ( ++mu__counter_109 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr111;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr111 )
{
bool mu__boolexpr112;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr112 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_110 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat14(const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_CPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
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
mu_lookAddPat13 ( mu_S, mu_N2, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_CPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr113;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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

void mu_isPat14(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat13 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr114;
  if (!(mu_flagPart1)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_flagPart2) ; 
}
if ( mu__boolexpr114 )
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

void mu_constructSpat14(const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_CPk, mu_1_indexType& mu_num)
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
mu_constructSpat13 ( mu_S, mu_N2, mu_i1 );
mu_constructSpat4 ( mu_CPk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_116;  mu__while_expr_116 = (mu_i) <= (mu_msg_end);
int mu__counter_115 = 0;
while (mu__while_expr_116) {
if ( ++mu__counter_115 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr117;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr117 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_116 = (mu_i) <= (mu_msg_end);
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

void mu_lookAddPat15(const mu_1_AgentType& mu_S, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_CPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",552);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",1104);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1656);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1688);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1720);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",1752);

mu_index = 0;
mu_lookAddPat1 ( mu_S, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_C, mu_msg2, mu_i2 );
mu_lookAddPat14 ( mu_S, mu_N2, mu_CPk, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr118;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr118 )
{
bool mu__boolexpr119;
bool mu__boolexpr120;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
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

void mu_isPat15(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
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
mu_isPat14 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr121;
bool mu__boolexpr122;
  if (!(mu_flagPart1)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = (mu_flagPart3) ; 
}
if ( mu__boolexpr121 )
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

void mu_constructSpat15(const mu_1_AgentType& mu_S, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_CPk, mu_1_indexType& mu_num)
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
mu_constructSpat1 ( mu_S, mu_i1 );
mu_constructSpat1 ( mu_C, mu_i2 );
mu_constructSpat14 ( mu_S, mu_N2, mu_CPk, mu_i3 );
mu_i = 1;
{
  bool mu__while_expr_124;  mu__while_expr_124 = (mu_i) <= (mu_msg_end);
int mu__counter_123 = 0;
while (mu__while_expr_124) {
if ( ++mu__counter_123 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr125;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr125 )
{
bool mu__boolexpr126;
bool mu__boolexpr127;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr126 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_124 = (mu_i) <= (mu_msg_end);
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
cout << "  cons Spat15\n";
mu_sPat15Set.mu_length = (mu_sPat15Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat15Set.mu_content[mu_sPat15Set.mu_length].undefine();
else
  mu_sPat15Set.mu_content[mu_sPat15Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_cons1(const mu_1_AgentType& mu_C, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_C, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat1\n";
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_NonceType& mu_N1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_N1, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat2\n";
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_AgentType& mu_C, const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_C, mu_S, mu_N1, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat3\n";
};
/*** end procedure declaration ***/

void mu_destruct3(mu_1_Message& mu_msg, mu_1_AgentType& mu_C, mu_1_AgentType& mu_S, mu_1_NonceType& mu_N1)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",1104);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1656);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_C = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_S = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_N1 = mu_msgNum3.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_AgentType& mu_SPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_SPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat4\n";
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_AS, mu_C, mu_N1, mu_SPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat5\n";
};
/*** end procedure declaration ***/

void mu_destruct5(mu_1_Message& mu_msg, mu_1_AgentType& mu_AS, mu_1_AgentType& mu_C, mu_1_NonceType& mu_N1, mu_1_AgentType& mu_SPk)
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
mu_AS = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_C = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_N1 = mu_msgNum3.mu_noncePart;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_SPk = mu_msgNum4.mu_k.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_AgentType& mu_ASSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_ASSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat6\n";
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_ASSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_AS, mu_C, mu_N1, mu_SPk, mu_ASSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat7\n";
};
/*** end procedure declaration ***/

void mu_destruct7(mu_1_Message& mu_msg, mu_1_AgentType& mu_AS, mu_1_AgentType& mu_C, mu_1_NonceType& mu_N1, mu_1_AgentType& mu_SPk, mu_1_AgentType& mu_ASSk)
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
mu_ASSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_msgNum3 = mu_msgs[mu_msg1.mu_concatPart[3]];
mu_msgNum4 = mu_msgs[mu_msg1.mu_concatPart[4]];
mu_AS = mu_msgNum1.mu_ag;
mu_C = mu_msgNum2.mu_ag;
mu_N1 = mu_msgNum3.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons8(const mu_1_AgentType& mu_AS, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N1, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_ASSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat8 ( mu_AS, mu_C, mu_N1, mu_SPk, mu_ASSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat8\n";
};
/*** end procedure declaration ***/

void mu_destruct8(mu_1_Message& mu_msg, mu_1_AgentType& mu_AS, mu_1_AgentType& mu_C, mu_1_NonceType& mu_N1, mu_1_AgentType& mu_SPk, mu_1_AgentType& mu_ASSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1104);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_AS = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_k = mu_msgs[mu_msgNum2.mu_aencKey].mu_k;
mu_ASSk = mu_k.mu_ag;
mu_destruct5 ( mu_msgs[mu_msgNum2.mu_aencMsg], mu_AS, mu_C, mu_N1, mu_SPk );
};
/*** end procedure declaration ***/

void mu_cons9(const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat9 ( mu_N2, mu_SPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat9\n";
};
/*** end procedure declaration ***/

void mu_destruct9(mu_1_Message& mu_msg, mu_1_NonceType& mu_N2, mu_1_AgentType& mu_SPk)
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
mu_SPk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_N2 = mu_msg1.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons10(const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat10 ( mu_C, mu_T, mu_L, mu_N2, mu_SPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat10\n";
};
/*** end procedure declaration ***/

void mu_destruct10(mu_1_Message& mu_msg, mu_1_AgentType& mu_C, mu_1_NonceType& mu_T, mu_1_NonceType& mu_L, mu_1_NonceType& mu_N2, mu_1_AgentType& mu_SPk)
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
mu_C = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_T = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_L = mu_msgNum3.mu_noncePart;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_k = mu_msgs[mu_msgNum4.mu_aencKey].mu_k;
mu_SPk = mu_k.mu_ag;
mu_N2 = mu_msgs[mu_msgNum4.mu_aencMsg].mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons11(const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_CSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat11 ( mu_C, mu_T, mu_L, mu_N2, mu_SPk, mu_CSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat11\n";
};
/*** end procedure declaration ***/

void mu_destruct11(mu_1_Message& mu_msg, mu_1_AgentType& mu_C, mu_1_NonceType& mu_T, mu_1_NonceType& mu_L, mu_1_NonceType& mu_N2, mu_1_AgentType& mu_SPk, mu_1_AgentType& mu_CSk)
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
mu_CSk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_msgNum3 = mu_msgs[mu_msg1.mu_concatPart[3]];
mu_msgNum4 = mu_msgs[mu_msg1.mu_concatPart[4]];
mu_C = mu_msgNum1.mu_ag;
mu_T = mu_msgNum2.mu_noncePart;
mu_L = mu_msgNum3.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons12(const mu_1_AgentType& mu_C, const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_T, const mu_1_NonceType& mu_L, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_SPk, const mu_1_AgentType& mu_CSk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat12 ( mu_C, mu_S, mu_T, mu_L, mu_N2, mu_SPk, mu_CSk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat12\n";
};
/*** end procedure declaration ***/

void mu_destruct12(mu_1_Message& mu_msg, mu_1_AgentType& mu_C, mu_1_AgentType& mu_S, mu_1_NonceType& mu_T, mu_1_NonceType& mu_L, mu_1_NonceType& mu_N2, mu_1_AgentType& mu_SPk, mu_1_AgentType& mu_CSk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",1104);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1656);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_C = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_S = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_k = mu_msgs[mu_msgNum3.mu_aencKey].mu_k;
mu_CSk = mu_k.mu_ag;
mu_destruct10 ( mu_msgs[mu_msgNum3.mu_aencMsg], mu_C, mu_T, mu_L, mu_N2, mu_SPk );
};
/*** end procedure declaration ***/

void mu_cons13(const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat13 ( mu_S, mu_N2, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat13\n";
};
/*** end procedure declaration ***/

void mu_destruct13(mu_1_Message& mu_msg, mu_1_AgentType& mu_S, mu_1_NonceType& mu_N2)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1104);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_S = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_N2 = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons14(const mu_1_AgentType& mu_S, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_CPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat14 ( mu_S, mu_N2, mu_CPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat14\n";
};
/*** end procedure declaration ***/

void mu_destruct14(mu_1_Message& mu_msg, mu_1_AgentType& mu_S, mu_1_NonceType& mu_N2, mu_1_AgentType& mu_CPk)
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
mu_CPk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart[1]];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart[2]];
mu_S = mu_msgNum1.mu_ag;
mu_N2 = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons15(const mu_1_AgentType& mu_S, const mu_1_AgentType& mu_C, const mu_1_NonceType& mu_N2, const mu_1_AgentType& mu_CPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat15 ( mu_S, mu_C, mu_N2, mu_CPk, mu_msg, mu_num );
mu_msg_end.print();
mu_printMsg ( mu_msgs[mu_msg_end] );
cout << "  cons Spat15\n";
};
/*** end procedure declaration ***/

void mu_destruct15(mu_1_Message& mu_msg, mu_1_AgentType& mu_S, mu_1_AgentType& mu_C, mu_1_NonceType& mu_N2, mu_1_AgentType& mu_CPk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",552);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",1104);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1656);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_S = mu_msgNum1.mu_ag;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_C = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_k = mu_msgs[mu_msgNum3.mu_aencKey].mu_k;
mu_CPk = mu_k.mu_ag;
mu_destruct13 ( mu_msgs[mu_msgNum3.mu_aencMsg], mu_S, mu_N2 );
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
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr128;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_agent))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
if ( mu__boolexpr128 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr129;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
if ( mu__boolexpr129 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr130;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr130 = FALSE ;
  else {
bool mu__boolexpr131;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr130 = (mu__boolexpr131) ; 
}
if ( mu__boolexpr130 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr132;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_aenc))) mu__boolexpr132 = FALSE ;
  else {
bool mu__boolexpr133;
  if (!((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg)) ; 
}
  mu__boolexpr132 = (mu__boolexpr133) ; 
}
if ( mu__boolexpr132 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr134;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_senc))) mu__boolexpr134 = FALSE ;
  else {
bool mu__boolexpr135;
  if (!((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg)) ; 
}
  mu__boolexpr134 = (mu__boolexpr135) ; 
}
if ( mu__boolexpr134 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr136;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr136 = FALSE ;
  else {
bool mu__boolexpr137;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msg.mu_concatPart[1]))) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msg.mu_concatPart[2])) ; 
}
  mu__boolexpr136 = (mu__boolexpr137) ; 
}
if ( mu__boolexpr136 )
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

mu_1_indexType mu_construct3By112(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr138;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr138 )
{
bool mu__boolexpr139;
bool mu__boolexpr140;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr139 )
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
	Error.Error("The end of function construct3By112 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct5By1124(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr141;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr141 )
{
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr142 )
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
	Error.Error("The end of function construct5By1124 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By56(const mu_1_indexType& mu_msgNo5,const mu_1_indexType& mu_msgNo6)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr145;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo5))) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo6)) ; 
}
if ( mu__boolexpr145 )
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
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr146;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr146 )
{
bool mu__boolexpr147;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr147 )
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

mu_1_indexType mu_construct9By24(const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr148;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo2))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr148 )
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
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo4;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct9By24 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct10By1229(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr149;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr149 )
{
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr150 )
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
	Error.Error("The end of function construct10By1229 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct11By106(const mu_1_indexType& mu_msgNo10,const mu_1_indexType& mu_msgNo6)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr153;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo10))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo6)) ; 
}
if ( mu__boolexpr153 )
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
if (mu_msgNo6.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo6;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct11By106 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct12By1111(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr154;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr154 )
{
bool mu__boolexpr155;
bool mu__boolexpr156;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr155 )
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
	Error.Error("The end of function construct12By1111 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct13By12(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr157;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr157 )
{
bool mu__boolexpr158;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr158 )
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
	Error.Error("The end of function construct13By12 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct14By134(const mu_1_indexType& mu_msgNo13,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr159;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo13))) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr159 )
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
if (mu_msgNo13.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo13;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo4;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct14By134 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct15By1114(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__boolexpr160;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr160 )
{
bool mu__boolexpr161;
bool mu__boolexpr162;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr161 )
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
	Error.Error("The end of function construct15By1114 reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 10; mu_i++) {
bool mu__boolexpr163;
  if (!((mu_msgNo) != (0))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr163 )
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

bool mu__boolexpr164;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr164 )
{
return mu_matchAgent( mu_m1.mu_ag, mu_m2.mu_ag );
}
else
{
bool mu__boolexpr165;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr165 )
{
return mu_matchNonce( mu_m1.mu_noncePart, mu_m2.mu_noncePart );
}
else
{
bool mu__boolexpr166;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr166 )
{
bool mu__boolexpr167;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr167;
}
else
{
bool mu__boolexpr168;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr168 )
{
bool mu__boolexpr169;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr169;
}
else
{
bool mu__boolexpr170;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr170 )
{
bool mu__boolexpr171;
  if (!(mu_match( mu_msgs[mu_m1.mu_sencMsg], mu_msgs[mu_m2.mu_sencMsg] ))) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_match( mu_msgs[mu_m1.mu_sencKey], mu_msgs[mu_m2.mu_sencKey] )) ; 
}
return mu__boolexpr171;
}
else
{
bool mu__boolexpr172;
bool mu__boolexpr173;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr172 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr176;
  if (!((mu_i) > (0))) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_175;  mu__while_expr_175 = mu__boolexpr176;
int mu__counter_174 = 0;
while (mu__while_expr_175) {
if ( ++mu__counter_174 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr177;
  if (!(mu_concatFlag)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr177;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr178;
  if (!((mu_i) > (0))) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (mu_concatFlag) ; 
}
mu__while_expr_175 = mu__boolexpr178;
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
  bool mu__while_expr_180;  mu__while_expr_180 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
int mu__counter_179 = 0;
while (mu__while_expr_180) {
if ( ++mu__counter_179 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( mu_match( mu_m1, mu_msgs[mu_sPatnSet.mu_content[mu_i]] ) )
{
mu_flag = mu_true;
}
mu_i = (mu_i) + (1);
};
mu__while_expr_180 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
}
};
return mu_flag;
	Error.Error("The end of function matchPat reached without returning values.");
};
/*** end function declaration ***/

void mu_deconcatPat3(mu_1_Message& mu_msg)
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
};
/*** end procedure declaration ***/

void mu_enconcatPat3()
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
  bool mu__while_expr_182;  mu__while_expr_182 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_181 = 0;
while (mu__while_expr_182) {
if ( ++mu__counter_181 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_184;  mu__while_expr_184 = (mu_i2) <= (mu_pat1Set.mu_length);
int mu__counter_183 = 0;
while (mu__while_expr_184) {
if ( ++mu__counter_183 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i3 = 1;
{
  bool mu__while_expr_186;  mu__while_expr_186 = (mu_i3) <= (mu_pat2Set.mu_length);
int mu__counter_185 = 0;
while (mu__while_expr_186) {
if ( ++mu__counter_185 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr187;
  if (!(mu_matchPat( mu_msgs[mu_construct3By112( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3] )], mu_sPat3Set ))) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = (!(mu_Spy_known[mu_construct3By112( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3] )])) ; 
}
if ( mu__boolexpr187 )
{
mu_concatMsgNo = mu_construct3By112( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3] );
if ( !(mu_exist( mu_pat3Set, mu_concatMsgNo )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i3 = (mu_i3) + (1);
};
mu__while_expr_186 = (mu_i3) <= (mu_pat2Set.mu_length);
}
};
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_184 = (mu_i2) <= (mu_pat1Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_182 = (mu_i1) <= (mu_pat1Set.mu_length);
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
  bool mu__while_expr_189;  mu__while_expr_189 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_188 = 0;
while (mu__while_expr_189) {
if ( ++mu__counter_188 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_191;  mu__while_expr_191 = (mu_i2) <= (mu_pat1Set.mu_length);
int mu__counter_190 = 0;
while (mu__while_expr_191) {
if ( ++mu__counter_190 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i3 = 1;
{
  bool mu__while_expr_193;  mu__while_expr_193 = (mu_i3) <= (mu_pat2Set.mu_length);
int mu__counter_192 = 0;
while (mu__while_expr_193) {
if ( ++mu__counter_192 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i4 = 1;
{
  bool mu__while_expr_195;  mu__while_expr_195 = (mu_i4) <= (mu_pat4Set.mu_length);
int mu__counter_194 = 0;
while (mu__while_expr_195) {
if ( ++mu__counter_194 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr196;
  if (!(mu_matchPat( mu_msgs[mu_construct5By1124( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat4Set.mu_content[mu_i4] )], mu_sPat5Set ))) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = (!(mu_Spy_known[mu_construct5By1124( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat4Set.mu_content[mu_i4] )])) ; 
}
if ( mu__boolexpr196 )
{
mu_concatMsgNo = mu_construct5By1124( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat4Set.mu_content[mu_i4] );
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
mu__while_expr_195 = (mu_i4) <= (mu_pat4Set.mu_length);
}
};
mu_i3 = (mu_i3) + (1);
};
mu__while_expr_193 = (mu_i3) <= (mu_pat2Set.mu_length);
}
};
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_191 = (mu_i2) <= (mu_pat1Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_189 = (mu_i1) <= (mu_pat1Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDecryptionPat7(mu_1_Message& mu_msg)
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
bool mu__boolexpr197;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr197 = TRUE ;
  else {
  mu__boolexpr197 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr197 )
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
mu_deconcatPat5 ( mu_msgs[mu_msgPat5] );
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
  bool mu__while_expr_199;  mu__while_expr_199 = (mu_i) <= (mu_pat5Set.mu_length);
int mu__counter_198 = 0;
while (mu__while_expr_199) {
if ( ++mu__counter_198 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_201;  mu__while_expr_201 = (mu_j) <= (mu_pat6Set.mu_length);
int mu__counter_200 = 0;
while (mu__while_expr_201) {
if ( ++mu__counter_200 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr202;
  if (!(mu_matchPat( mu_msgs[mu_construct7By56( mu_pat5Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )], mu_sPat7Set ))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (!(mu_Spy_known[mu_construct7By56( mu_pat5Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr202 )
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
mu__while_expr_201 = (mu_j) <= (mu_pat6Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_199 = (mu_i) <= (mu_pat5Set.mu_length);
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
mu_aDecryptionPat7 ( mu_msgs[mu_msgPat2] );
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
  bool mu__while_expr_204;  mu__while_expr_204 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_203 = 0;
while (mu__while_expr_204) {
if ( ++mu__counter_203 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_206;  mu__while_expr_206 = (mu_i2) <= (mu_pat7Set.mu_length);
int mu__counter_205 = 0;
while (mu__while_expr_206) {
if ( ++mu__counter_205 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr207;
  if (!(mu_matchPat( mu_msgs[mu_construct8By17( mu_pat1Set.mu_content[mu_i1], mu_pat7Set.mu_content[mu_i2] )], mu_sPat8Set ))) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (!(mu_Spy_known[mu_construct8By17( mu_pat1Set.mu_content[mu_i1], mu_pat7Set.mu_content[mu_i2] )])) ; 
}
if ( mu__boolexpr207 )
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
mu__while_expr_206 = (mu_i2) <= (mu_pat7Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_204 = (mu_i1) <= (mu_pat1Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDecryptionPat9(mu_1_Message& mu_msg)
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
bool mu__boolexpr208;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr208 = TRUE ;
  else {
  mu__boolexpr208 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr208 )
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

void mu_aEncryptionPat9()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_210;  mu__while_expr_210 = (mu_i) <= (mu_pat2Set.mu_length);
int mu__counter_209 = 0;
while (mu__while_expr_210) {
if ( ++mu__counter_209 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_212;  mu__while_expr_212 = (mu_j) <= (mu_pat4Set.mu_length);
int mu__counter_211 = 0;
while (mu__while_expr_212) {
if ( ++mu__counter_211 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr213;
  if (!(mu_matchPat( mu_msgs[mu_construct9By24( mu_pat2Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )], mu_sPat9Set ))) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (!(mu_Spy_known[mu_construct9By24( mu_pat2Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr213 )
{
if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct9By24( mu_pat2Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat9Set, mu_encMsgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
}
mu_j = (mu_j) + (1);
};
mu__while_expr_212 = (mu_j) <= (mu_pat4Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_210 = (mu_i) <= (mu_pat2Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat10(mu_1_Message& mu_msg)
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
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
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
mu_isPat9 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat9Set, mu_msgPat4 )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_msgPat4;
mu_aDecryptionPat9 ( mu_msgs[mu_msgPat4] );
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat10()
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
  bool mu__while_expr_215;  mu__while_expr_215 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_214 = 0;
while (mu__while_expr_215) {
if ( ++mu__counter_214 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_217;  mu__while_expr_217 = (mu_i2) <= (mu_pat2Set.mu_length);
int mu__counter_216 = 0;
while (mu__while_expr_217) {
if ( ++mu__counter_216 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i3 = 1;
{
  bool mu__while_expr_219;  mu__while_expr_219 = (mu_i3) <= (mu_pat2Set.mu_length);
int mu__counter_218 = 0;
while (mu__while_expr_219) {
if ( ++mu__counter_218 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i4 = 1;
{
  bool mu__while_expr_221;  mu__while_expr_221 = (mu_i4) <= (mu_pat9Set.mu_length);
int mu__counter_220 = 0;
while (mu__while_expr_221) {
if ( ++mu__counter_220 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr222;
  if (!(mu_matchPat( mu_msgs[mu_construct10By1229( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat9Set.mu_content[mu_i4] )], mu_sPat10Set ))) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (!(mu_Spy_known[mu_construct10By1229( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat9Set.mu_content[mu_i4] )])) ; 
}
if ( mu__boolexpr222 )
{
mu_concatMsgNo = mu_construct10By1229( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat9Set.mu_content[mu_i4] );
if ( !(mu_exist( mu_pat10Set, mu_concatMsgNo )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i4 = (mu_i4) + (1);
};
mu__while_expr_221 = (mu_i4) <= (mu_pat9Set.mu_length);
}
};
mu_i3 = (mu_i3) + (1);
};
mu__while_expr_219 = (mu_i3) <= (mu_pat2Set.mu_length);
}
};
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_217 = (mu_i2) <= (mu_pat2Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_215 = (mu_i1) <= (mu_pat1Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDecryptionPat11(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat10("msgPat10",552);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat10("flag_pat10",584);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr223;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr223 = TRUE ;
  else {
  mu__boolexpr223 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr223 )
{
mu_Spy_known[mu_msg.mu_aencMsg] = mu_true;
mu_msgPat10 = mu_msg.mu_aencMsg;
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
mu_deconcatPat10 ( mu_msgs[mu_msgPat10] );
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
  bool mu__while_expr_225;  mu__while_expr_225 = (mu_i) <= (mu_pat10Set.mu_length);
int mu__counter_224 = 0;
while (mu__while_expr_225) {
if ( ++mu__counter_224 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_227;  mu__while_expr_227 = (mu_j) <= (mu_pat6Set.mu_length);
int mu__counter_226 = 0;
while (mu__while_expr_227) {
if ( ++mu__counter_226 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr228;
  if (!(mu_matchPat( mu_msgs[mu_construct11By106( mu_pat10Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )], mu_sPat11Set ))) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (!(mu_Spy_known[mu_construct11By106( mu_pat10Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr228 )
{
if ( (mu_msgs[mu_pat6Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct11By106( mu_pat10Set.mu_content[mu_i], mu_pat6Set.mu_content[mu_j] );
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
mu__while_expr_227 = (mu_j) <= (mu_pat6Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_225 = (mu_i) <= (mu_pat10Set.mu_length);
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
mu_isPat11 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat11Set, mu_msgPat3 )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_msgPat3;
mu_aDecryptionPat11 ( mu_msgs[mu_msgPat3] );
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
mu_1_indexType mu_i3("i3",64);

/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",96);

mu_i1 = 1;
{
  bool mu__while_expr_230;  mu__while_expr_230 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_229 = 0;
while (mu__while_expr_230) {
if ( ++mu__counter_229 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_232;  mu__while_expr_232 = (mu_i2) <= (mu_pat1Set.mu_length);
int mu__counter_231 = 0;
while (mu__while_expr_232) {
if ( ++mu__counter_231 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i3 = 1;
{
  bool mu__while_expr_234;  mu__while_expr_234 = (mu_i3) <= (mu_pat11Set.mu_length);
int mu__counter_233 = 0;
while (mu__while_expr_234) {
if ( ++mu__counter_233 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr235;
  if (!(mu_matchPat( mu_msgs[mu_construct12By1111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat11Set.mu_content[mu_i3] )], mu_sPat12Set ))) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (!(mu_Spy_known[mu_construct12By1111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat11Set.mu_content[mu_i3] )])) ; 
}
if ( mu__boolexpr235 )
{
mu_concatMsgNo = mu_construct12By1111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat11Set.mu_content[mu_i3] );
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
mu_i3 = (mu_i3) + (1);
};
mu__while_expr_234 = (mu_i3) <= (mu_pat11Set.mu_length);
}
};
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_232 = (mu_i2) <= (mu_pat1Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_230 = (mu_i1) <= (mu_pat1Set.mu_length);
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
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
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
  bool mu__while_expr_237;  mu__while_expr_237 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_236 = 0;
while (mu__while_expr_237) {
if ( ++mu__counter_236 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_239;  mu__while_expr_239 = (mu_i2) <= (mu_pat2Set.mu_length);
int mu__counter_238 = 0;
while (mu__while_expr_239) {
if ( ++mu__counter_238 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr240;
  if (!(mu_matchPat( mu_msgs[mu_construct13By12( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] )], mu_sPat13Set ))) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (!(mu_Spy_known[mu_construct13By12( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] )])) ; 
}
if ( mu__boolexpr240 )
{
mu_concatMsgNo = mu_construct13By12( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2] );
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
mu__while_expr_239 = (mu_i2) <= (mu_pat2Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_237 = (mu_i1) <= (mu_pat1Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_aDecryptionPat14(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat13("msgPat13",552);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat13("flag_pat13",584);

if ( !(mu_Spy_known[mu_msg.mu_aencMsg]) )
{
mu_key_inv = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr241;
  if ((mu_key_inv.mu_k.mu_ag) == (mu_Intruder)) mu__boolexpr241 = TRUE ;
  else {
  mu__boolexpr241 = ((mu_key_inv.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr241 )
{
mu_Spy_known[mu_msg.mu_aencMsg] = mu_true;
mu_msgPat13 = mu_msg.mu_aencMsg;
mu_isPat13 ( mu_msgs[mu_msgPat13], mu_flag_pat13 );
if ( mu_flag_pat13 )
{
if ( !(mu_exist( mu_pat13Set, mu_msgPat13 )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_msgPat13.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_msgPat13;
mu_deconcatPat13 ( mu_msgs[mu_msgPat13] );
}
}
}
}
};
/*** end procedure declaration ***/

void mu_aEncryptionPat14()
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",32);

/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",64);

mu_i = 1;
{
  bool mu__while_expr_243;  mu__while_expr_243 = (mu_i) <= (mu_pat13Set.mu_length);
int mu__counter_242 = 0;
while (mu__while_expr_243) {
if ( ++mu__counter_242 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_j = 1;
{
  bool mu__while_expr_245;  mu__while_expr_245 = (mu_j) <= (mu_pat4Set.mu_length);
int mu__counter_244 = 0;
while (mu__while_expr_245) {
if ( ++mu__counter_244 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr246;
  if (!(mu_matchPat( mu_msgs[mu_construct14By134( mu_pat13Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )], mu_sPat14Set ))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (!(mu_Spy_known[mu_construct14By134( mu_pat13Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
if ( mu__boolexpr246 )
{
if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct14By134( mu_pat13Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat14Set, mu_encMsgNo )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
}
mu_j = (mu_j) + (1);
};
mu__while_expr_245 = (mu_j) <= (mu_pat4Set.mu_length);
}
};
mu_i = (mu_i) + (1);
};
mu__while_expr_243 = (mu_i) <= (mu_pat13Set.mu_length);
}
};
};
/*** end procedure declaration ***/

void mu_deconcatPat15(mu_1_Message& mu_msg)
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
mu_isPat14 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat14Set, mu_msgPat3 )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_msgPat3;
mu_aDecryptionPat14 ( mu_msgs[mu_msgPat3] );
}
}
}
};
/*** end procedure declaration ***/

void mu_enconcatPat15()
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
  bool mu__while_expr_248;  mu__while_expr_248 = (mu_i1) <= (mu_pat1Set.mu_length);
int mu__counter_247 = 0;
while (mu__while_expr_248) {
if ( ++mu__counter_247 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i2 = 1;
{
  bool mu__while_expr_250;  mu__while_expr_250 = (mu_i2) <= (mu_pat1Set.mu_length);
int mu__counter_249 = 0;
while (mu__while_expr_250) {
if ( ++mu__counter_249 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_i3 = 1;
{
  bool mu__while_expr_252;  mu__while_expr_252 = (mu_i3) <= (mu_pat14Set.mu_length);
int mu__counter_251 = 0;
while (mu__while_expr_252) {
if ( ++mu__counter_251 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr253;
  if (!(mu_matchPat( mu_msgs[mu_construct15By1114( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat14Set.mu_content[mu_i3] )], mu_sPat15Set ))) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (!(mu_Spy_known[mu_construct15By1114( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat14Set.mu_content[mu_i3] )])) ; 
}
if ( mu__boolexpr253 )
{
mu_concatMsgNo = mu_construct15By1114( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat14Set.mu_content[mu_i3] );
if ( !(mu_exist( mu_pat15Set, mu_concatMsgNo )) )
{
mu_pat15Set.mu_length = (mu_pat15Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat15Set.mu_content[mu_pat15Set.mu_length].undefine();
else
  mu_pat15Set.mu_content[mu_pat15Set.mu_length] = mu_concatMsgNo;
}
if ( !(mu_Spy_known[mu_concatMsgNo]) )
{
mu_Spy_known[mu_concatMsgNo] = mu_true;
}
}
mu_i3 = (mu_i3) + (1);
};
mu__while_expr_252 = (mu_i3) <= (mu_pat14Set.mu_length);
}
};
mu_i2 = (mu_i2) + (1);
};
mu__while_expr_250 = (mu_i2) <= (mu_pat1Set.mu_length);
}
};
mu_i1 = (mu_i1) + (1);
};
mu__while_expr_248 = (mu_i1) <= (mu_pat1Set.mu_length);
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
  mu_roleS.clear();
  mu_roleC.clear();
  mu_roleAS.clear();
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
  mu_pat15Set.clear();
  mu_sPat15Set.clear();
  mu_Spy_known.clear();
  mu_emit.clear();
  mu_gnum.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_roleS.undefine();
  mu_roleC.undefine();
  mu_roleAS.undefine();
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
  mu_pat15Set.undefine();
  mu_sPat15Set.undefine();
  mu_Spy_known.undefine();
  mu_emit.undefine();
  mu_gnum.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_roleS.reset();
  mu_roleC.reset();
  mu_roleAS.reset();
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
  mu_pat15Set.reset();
  mu_sPat15Set.reset();
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
  mu_roleS.print();
  mu_roleC.print();
  mu_roleAS.print();
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
  mu_pat15Set.print();
  mu_sPat15Set.print();
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
  mu_roleS.print_statistic();
  mu_roleC.print_statistic();
  mu_roleAS.print_statistic();
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
  mu_pat15Set.print_statistic();
  mu_sPat15Set.print_statistic();
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
    mu_roleS.print_diff(prevstate);
    mu_roleC.print_diff(prevstate);
    mu_roleAS.print_diff(prevstate);
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
    mu_pat15Set.print_diff(prevstate);
    mu_sPat15Set.print_diff(prevstate);
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
  mu_roleS.to_state( newstate );
  mu_roleC.to_state( newstate );
  mu_roleAS.to_state( newstate );
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
  mu_pat15Set.to_state( newstate );
  mu_sPat15Set.to_state( newstate );
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
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[6], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
bool mu__boolexpr257;
bool mu__boolexpr258;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_i) <= (mu_pat15Set.mu_length)) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_pat15Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = (mu_matchPat( mu_msgs[mu_pat15Set.mu_content[mu_i]], mu_sPat15Set )) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (!(mu_emit[mu_pat15Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr254;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 11 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
bool mu__boolexpr262;
bool mu__boolexpr263;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = ((mu_i) <= (mu_pat15Set.mu_length)) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = ((mu_pat15Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr262)) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = (mu_matchPat( mu_msgs[mu_pat15Set.mu_content[mu_i]], mu_sPat15Set )) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = (!(mu_emit[mu_pat15Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr259) {
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
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat15Set.mu_content[mu_i]]) )
{
mu_ch[6].clear();
mu_ch[6].mu_msg = mu_msgs[mu_pat15Set.mu_content[mu_i]];
mu_ch[6].mu_sender = mu_Intruder;
mu_ch[6].mu_receiver = mu_roleC[mu_j].mu_C;
mu_ch[6].mu_empty = mu_false;
mu_emit[mu_pat15Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch6. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[6].mu_msg );
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
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[5], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
bool mu__boolexpr267;
bool mu__boolexpr268;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_matchPat( mu_msgs[mu_pat8Set.mu_content[mu_i]], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = (!(mu_emit[mu_pat8Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr264;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11;
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 22 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (mu_matchPat( mu_msgs[mu_pat8Set.mu_content[mu_i]], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (!(mu_emit[mu_pat8Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr269) {
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
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat8Set.mu_content[mu_i]]) )
{
mu_ch[5].clear();
mu_ch[5].mu_msg = mu_msgs[mu_pat8Set.mu_content[mu_i]];
mu_ch[5].mu_sender = mu_Intruder;
mu_ch[5].mu_receiver = mu_roleS[mu_j].mu_S;
mu_ch[5].mu_empty = mu_false;
mu_emit[mu_pat8Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch5. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[5].mu_msg );
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
    static mu_1_roleASNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[4], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleASNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr274;
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (mu_matchPat( mu_msgs[mu_pat3Set.mu_content[mu_i]], mu_sPat3Set )) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (!(mu_emit[mu_pat3Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr274;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 22;
    static mu_1_roleASNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 33 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
bool mu__boolexpr282;
bool mu__boolexpr283;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = (mu_matchPat( mu_msgs[mu_pat3Set.mu_content[mu_i]], mu_sPat3Set )) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (!(mu_emit[mu_pat3Set.mu_content[mu_i]])) ; 
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
    r = what_rule - 22;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleASNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat3Set.mu_content[mu_i]]) )
{
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat3Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleAS[mu_j].mu_AS;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat3Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch4. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[4].mu_msg );
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
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[3], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
bool mu__boolexpr288;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_i) <= (mu_pat12Set.mu_length)) ; 
}
  if (!(mu__boolexpr288)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_matchPat( mu_msgs[mu_pat12Set.mu_content[mu_i]], mu_sPat12Set )) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (!(mu_emit[mu_pat12Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr284;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 33;
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 44 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr289;
bool mu__boolexpr290;
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_i) <= (mu_pat12Set.mu_length)) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = (mu_matchPat( mu_msgs[mu_pat12Set.mu_content[mu_i]], mu_sPat12Set )) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (!(mu_emit[mu_pat12Set.mu_content[mu_i]])) ; 
}
	      if (mu__boolexpr289) {
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
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat12Set.mu_content[mu_i]]) )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat12Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleS[mu_j].mu_S;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat12Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch3. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[3].mu_msg );
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
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[2], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
bool mu__boolexpr297;
bool mu__boolexpr298;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr297)) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_matchPat( mu_msgs[mu_pat8Set.mu_content[mu_i]], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = (!(mu_emit[mu_pat8Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr294;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 44;
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 55 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr299;
bool mu__boolexpr300;
bool mu__boolexpr301;
bool mu__boolexpr302;
bool mu__boolexpr303;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (mu_matchPat( mu_msgs[mu_pat8Set.mu_content[mu_i]], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (!(mu_emit[mu_pat8Set.mu_content[mu_i]])) ; 
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
    r = what_rule - 44;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat8Set.mu_content[mu_i]]) )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat8Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleC[mu_j].mu_C;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat8Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch2. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[2].mu_msg );
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
    static mu_1_roleASNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("intruderEmitMsgIntoCh[1], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleASNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (mu_matchPat( mu_msgs[mu_pat3Set.mu_content[mu_i]], mu_sPat3Set )) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = (!(mu_emit[mu_pat3Set.mu_content[mu_i]])) ; 
}
    return mu__boolexpr304;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 55;
    static mu_1_roleASNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 66 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr309;
bool mu__boolexpr310;
bool mu__boolexpr311;
bool mu__boolexpr312;
bool mu__boolexpr313;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = ((mu_i) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr313)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = (mu_matchPat( mu_msgs[mu_pat3Set.mu_content[mu_i]], mu_sPat3Set )) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (!(mu_emit[mu_pat3Set.mu_content[mu_i]])) ; 
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
    r = what_rule - 55;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleASNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 11) + 0);
    r = r / 11;
if ( !(mu_emit[mu_pat3Set.mu_content[mu_i]]) )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat3Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleAS[mu_j].mu_AS;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat3Set.mu_content[mu_i]] = mu_true;
cout << "Intruder emit msg into ch1. ";
cout << " msg:   ";
mu_printMsg ( mu_ch[1].mu_msg );
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
    return tsprintf("intruderGetMsgFromCh[6]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[6].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 66;
    while (what_rule < 67 )
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
    r = what_rule - 66;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat15("flag_pat15",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[6].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat15 ( mu_msg, mu_flag_pat15 );
if ( mu_flag_pat15 )
{
if ( !(mu_exist( mu_pat15Set, mu_msgNo )) )
{
mu_pat15Set.mu_length = (mu_pat15Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat15Set.mu_content[mu_pat15Set.mu_length].undefine();
else
  mu_pat15Set.mu_content[mu_pat15Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_deconcatPat15 ( mu_msg );
mu_enconcatPat15 (  );
}
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[5]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[5].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 67;
    while (what_rule < 68 )
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
    r = what_rule - 67;
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

mu_msg = mu_ch[5].mu_msg;
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
mu_deconcatPat8 ( mu_msg );
mu_enconcatPat8 (  );
}
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[4]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[4].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 68;
    while (what_rule < 69 )
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
    r = what_rule - 68;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[4].mu_msg;
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
mu_deconcatPat3 ( mu_msg );
mu_enconcatPat3 (  );
}
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[3]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[3].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 69;
    while (what_rule < 70 )
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
    r = what_rule - 69;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

mu_msg = mu_ch[3].mu_msg;
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
mu_deconcatPat12 ( mu_msg );
mu_enconcatPat12 (  );
}
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[2]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 70;
    while (what_rule < 71 )
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
    r = what_rule - 70;
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

mu_msg = mu_ch[2].mu_msg;
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
mu_deconcatPat8 ( mu_msg );
mu_enconcatPat8 (  );
}
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
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
    return tsprintf("intruderGetMsgFromCh[1]");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[1].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 71;
    while (what_rule < 72 )
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
    r = what_rule - 71;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",40);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",72);

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
mu_deconcatPat3 ( mu_msg );
mu_enconcatPat3 (  );
}
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
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
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleAS4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr314;
bool mu__boolexpr315;
  if (!((mu_roleAS[mu_i].mu_st) == (mu_AS4))) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (!(mu_roleAS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr314;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 72;
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 73 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr316;
bool mu__boolexpr317;
  if (!((mu_roleAS[mu_i].mu_st) == (mu_AS4))) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (!(mu_roleAS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr316) {
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
    r = what_rule - 72;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons8 ( mu_roleAS[mu_i].mu_AS, mu_roleAS[mu_i].mu_locS, mu_roleAS[mu_i].mu_locN3, mu_roleAS[mu_i].mu_locC, mu_roleAS[mu_i].mu_AS, mu_msg, mu_msgNo );
mu_ch[5].mu_empty = mu_false;
mu_ch[5].mu_msg = mu_msg;
mu_ch[5].mu_sender = mu_roleAS[mu_i].mu_AS;
mu_ch[5].mu_receiver = mu_Intruder;
mu_roleAS[mu_i].mu_st = mu_AS1;
cout << "roleAS send into ch[5]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[5].mu_msg );
cout << "\n";
mu_roleAS[mu_i].mu_commit = mu_true;
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
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleAS3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr318;
bool mu__boolexpr319;
  if (!((mu_roleAS[mu_i].mu_st) == (mu_AS3))) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (!(mu_roleAS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr318;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 73;
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 74 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr320;
bool mu__boolexpr321;
  if (!((mu_roleAS[mu_i].mu_st) == (mu_AS3))) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (!(mu_roleAS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr320) {
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
    r = what_rule - 73;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[4].mu_msg;
mu_isPat3 ( mu_msg, mu_flag_pat3 );
if ( mu_flag_pat3 )
{
mu_destruct3 ( mu_msg, mu_roleAS[mu_i].mu_locS, mu_roleAS[mu_i].mu_locC, mu_roleAS[mu_i].mu_locN3 );
bool mu__boolexpr322;
bool mu__boolexpr323;
  if (!(mu_matchAgent( mu_roleAS[mu_i].mu_locS, mu_roleAS[mu_i].mu_S ))) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (mu_matchAgent( mu_roleAS[mu_i].mu_locC, mu_roleAS[mu_i].mu_C )) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (mu_matchNonce( mu_roleAS[mu_i].mu_locN3, mu_roleAS[mu_i].mu_N3 )) ; 
}
if ( mu__boolexpr322 )
{
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
mu_roleAS[mu_i].mu_st = mu_AS4;
}
}
cout << "roleAS recieve from ch[4]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleAS2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr324;
bool mu__boolexpr325;
  if (!((mu_roleAS[mu_i].mu_st) == (mu_AS2))) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (!(mu_roleAS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr324;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 74;
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 75 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr326;
bool mu__boolexpr327;
  if (!((mu_roleAS[mu_i].mu_st) == (mu_AS2))) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (!(mu_roleAS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr326) {
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
    r = what_rule - 74;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons8 ( mu_roleAS[mu_i].mu_AS, mu_roleAS[mu_i].mu_locC, mu_roleAS[mu_i].mu_locN1, mu_roleAS[mu_i].mu_locS, mu_roleAS[mu_i].mu_AS, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleAS[mu_i].mu_AS;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleAS[mu_i].mu_st = mu_AS3;
cout << "roleAS send into ch[2]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[2].mu_msg );
cout << "\n";
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
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleAS1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr328;
bool mu__boolexpr329;
  if (!((mu_roleAS[mu_i].mu_st) == (mu_AS1))) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (!(mu_roleAS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr328;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 75;
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 76 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr330;
bool mu__boolexpr331;
  if (!((mu_roleAS[mu_i].mu_st) == (mu_AS1))) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = (!(mu_roleAS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr330) {
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
    r = what_rule - 75;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleASNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_isPat3 ( mu_msg, mu_flag_pat3 );
if ( mu_flag_pat3 )
{
mu_destruct3 ( mu_msg, mu_roleAS[mu_i].mu_locC, mu_roleAS[mu_i].mu_locS, mu_roleAS[mu_i].mu_locN1 );
bool mu__boolexpr332;
bool mu__boolexpr333;
  if (!(mu_matchAgent( mu_roleAS[mu_i].mu_locC, mu_roleAS[mu_i].mu_C ))) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (mu_matchAgent( mu_roleAS[mu_i].mu_locS, mu_roleAS[mu_i].mu_S )) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = (mu_matchNonce( mu_roleAS[mu_i].mu_locN1, mu_roleAS[mu_i].mu_N1 )) ; 
}
if ( mu__boolexpr332 )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleAS[mu_i].mu_st = mu_AS2;
}
}
cout << "roleAS recieve from ch[1]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
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
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr334;
bool mu__boolexpr335;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C4))) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr334;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 76;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 77 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr336;
bool mu__boolexpr337;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C4))) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr336) {
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
    r = what_rule - 76;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat15("flag_pat15",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[6].mu_msg;
mu_isPat15 ( mu_msg, mu_flag_pat15 );
if ( mu_flag_pat15 )
{
mu_destruct15 ( mu_msg, mu_roleC[mu_i].mu_locS, mu_roleC[mu_i].mu_locC, mu_roleC[mu_i].mu_locN2, mu_roleC[mu_i].mu_locC );
bool mu__boolexpr338;
bool mu__boolexpr339;
bool mu__boolexpr340;
  if (!(mu_matchAgent( mu_roleC[mu_i].mu_locS, mu_roleC[mu_i].mu_S ))) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = (mu_matchAgent( mu_roleC[mu_i].mu_locC, mu_roleC[mu_i].mu_C )) ; 
}
  if (!(mu__boolexpr340)) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = (mu_matchNonce( mu_roleC[mu_i].mu_locN2, mu_roleC[mu_i].mu_N2 )) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = (mu_matchAgent( mu_roleC[mu_i].mu_locC, mu_roleC[mu_i].mu_C )) ; 
}
if ( mu__boolexpr338 )
{
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
mu_roleC[mu_i].mu_st = mu_C1;
}
}
cout << "roleC recieve from ch[6]. ";
cout << " msg: ";
mu_printMsg ( mu_msg );
cout << "\n";
mu_roleC[mu_i].mu_commit = mu_true;
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
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr341;
bool mu__boolexpr342;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C3))) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr341;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 77;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 78 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr343;
bool mu__boolexpr344;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C3))) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr343) {
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
    r = what_rule - 77;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons12 ( mu_roleC[mu_i].mu_C, mu_roleC[mu_i].mu_S, mu_roleC[mu_i].mu_T, mu_roleC[mu_i].mu_L, mu_roleC[mu_i].mu_N2, mu_roleC[mu_i].mu_S, mu_roleC[mu_i].mu_C, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleC[mu_i].mu_C;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleC[mu_i].mu_st = mu_C4;
cout << "roleC send into ch[3]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[3].mu_msg );
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
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr345;
bool mu__boolexpr346;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C2))) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr345;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 78;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 79 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr347;
bool mu__boolexpr348;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C2))) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr347) {
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
    r = what_rule - 78;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat8("flag_pat8",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_isPat8 ( mu_msg, mu_flag_pat8 );
if ( mu_flag_pat8 )
{
mu_destruct8 ( mu_msg, mu_roleC[mu_i].mu_locAS, mu_roleC[mu_i].mu_locC, mu_roleC[mu_i].mu_locN1, mu_roleC[mu_i].mu_locS, mu_roleC[mu_i].mu_locAS );
bool mu__boolexpr349;
bool mu__boolexpr350;
bool mu__boolexpr351;
bool mu__boolexpr352;
  if (!(mu_matchAgent( mu_roleC[mu_i].mu_locAS, mu_roleC[mu_i].mu_AS ))) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = (mu_matchAgent( mu_roleC[mu_i].mu_locC, mu_roleC[mu_i].mu_C )) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (mu_matchNonce( mu_roleC[mu_i].mu_locN1, mu_roleC[mu_i].mu_N1 )) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = (mu_matchAgent( mu_roleC[mu_i].mu_locS, mu_roleC[mu_i].mu_S )) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = (mu_matchAgent( mu_roleC[mu_i].mu_locAS, mu_roleC[mu_i].mu_AS )) ; 
}
if ( mu__boolexpr349 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleC[mu_i].mu_st = mu_C3;
}
}
cout << "roleC recieve from ch[2]. ";
cout << " msg: ";
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
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr353;
bool mu__boolexpr354;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C1))) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr354)) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr353;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 79;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 80 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr355;
bool mu__boolexpr356;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C1))) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr355) {
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
    r = what_rule - 79;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons3 ( mu_roleC[mu_i].mu_C, mu_roleC[mu_i].mu_S, mu_roleC[mu_i].mu_N1, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleC[mu_i].mu_C;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleC[mu_i].mu_st = mu_C2;
cout << "roleC send into ch[1]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[1].mu_msg );
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
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleS4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr357;
bool mu__boolexpr358;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S4))) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr357;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 80;
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 81 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr359;
bool mu__boolexpr360;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S4))) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr359) {
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
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons15 ( mu_roleS[mu_i].mu_S, mu_roleS[mu_i].mu_locC, mu_roleS[mu_i].mu_locN2, mu_roleS[mu_i].mu_locC, mu_msg, mu_msgNo );
mu_ch[6].mu_empty = mu_false;
mu_ch[6].mu_msg = mu_msg;
mu_ch[6].mu_sender = mu_roleS[mu_i].mu_S;
mu_ch[6].mu_receiver = mu_Intruder;
mu_roleS[mu_i].mu_st = mu_S1;
cout << "roleS send into ch[6]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[6].mu_msg );
cout << "\n";
mu_roleS[mu_i].mu_commit = mu_true;
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
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleS3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr361;
bool mu__boolexpr362;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S3))) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr361;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 81;
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 82 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr363;
bool mu__boolexpr364;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S3))) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr363) {
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
    r = what_rule - 81;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat8("flag_pat8",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[5].mu_msg;
mu_isPat8 ( mu_msg, mu_flag_pat8 );
if ( mu_flag_pat8 )
{
mu_destruct8 ( mu_msg, mu_roleS[mu_i].mu_locAS, mu_roleS[mu_i].mu_locS, mu_roleS[mu_i].mu_locN3, mu_roleS[mu_i].mu_locC, mu_roleS[mu_i].mu_locAS );
bool mu__boolexpr365;
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
  if (!(mu_matchAgent( mu_roleS[mu_i].mu_locAS, mu_roleS[mu_i].mu_AS ))) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = (mu_matchAgent( mu_roleS[mu_i].mu_locS, mu_roleS[mu_i].mu_S )) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_matchNonce( mu_roleS[mu_i].mu_locN3, mu_roleS[mu_i].mu_N3 )) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (mu_matchAgent( mu_roleS[mu_i].mu_locC, mu_roleS[mu_i].mu_C )) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (mu_matchAgent( mu_roleS[mu_i].mu_locAS, mu_roleS[mu_i].mu_AS )) ; 
}
if ( mu__boolexpr365 )
{
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
mu_roleS[mu_i].mu_st = mu_S4;
}
}
cout << "roleS recieve from ch[5]. ";
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
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleS2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr369;
bool mu__boolexpr370;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S2))) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr369;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 82;
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 83 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr371;
bool mu__boolexpr372;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S2))) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr371) {
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
    r = what_rule - 82;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",552);

mu_msg.clear();
mu_cons3 ( mu_roleS[mu_i].mu_S, mu_roleS[mu_i].mu_locC, mu_roleS[mu_i].mu_N3, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleS[mu_i].mu_S;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleS[mu_i].mu_st = mu_S3;
cout << "roleS send into ch[4]. ";
cout << " msg: ";
mu_printMsg ( mu_ch[4].mu_msg );
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
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleS1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr373;
bool mu__boolexpr374;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S1))) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr373;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 83;
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 84 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr375;
bool mu__boolexpr376;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S1))) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr375) {
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
    r = what_rule - 83;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",560);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat12 ( mu_msg, mu_flag_pat12 );
if ( mu_flag_pat12 )
{
mu_destruct12 ( mu_msg, mu_roleS[mu_i].mu_locC, mu_roleS[mu_i].mu_locS, mu_roleS[mu_i].mu_locT, mu_roleS[mu_i].mu_locL, mu_roleS[mu_i].mu_locN2, mu_roleS[mu_i].mu_locS, mu_roleS[mu_i].mu_locC );
bool mu__boolexpr377;
bool mu__boolexpr378;
bool mu__boolexpr379;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
  if (!(mu_matchAgent( mu_roleS[mu_i].mu_locC, mu_roleS[mu_i].mu_C ))) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = (mu_matchAgent( mu_roleS[mu_i].mu_locS, mu_roleS[mu_i].mu_S )) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (mu_matchNonce( mu_roleS[mu_i].mu_locT, mu_roleS[mu_i].mu_T )) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = (mu_matchNonce( mu_roleS[mu_i].mu_locL, mu_roleS[mu_i].mu_L )) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (mu_matchNonce( mu_roleS[mu_i].mu_locN2, mu_roleS[mu_i].mu_N2 )) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = (mu_matchAgent( mu_roleS[mu_i].mu_locS, mu_roleS[mu_i].mu_S )) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = (mu_matchAgent( mu_roleS[mu_i].mu_locC, mu_roleS[mu_i].mu_C )) ; 
}
if ( mu__boolexpr377 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleS[mu_i].mu_st = mu_S2;
}
}
cout << "roleS recieve from ch[3]. ";
cout << " msg: ";
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
  if (what_rule>=33 && what_rule<44)
    { R3.NextRule(what_rule);
      if (what_rule<44) return; }
  if (what_rule>=44 && what_rule<55)
    { R4.NextRule(what_rule);
      if (what_rule<55) return; }
  if (what_rule>=55 && what_rule<66)
    { R5.NextRule(what_rule);
      if (what_rule<66) return; }
  if (what_rule>=66 && what_rule<67)
    { R6.NextRule(what_rule);
      if (what_rule<67) return; }
  if (what_rule>=67 && what_rule<68)
    { R7.NextRule(what_rule);
      if (what_rule<68) return; }
  if (what_rule>=68 && what_rule<69)
    { R8.NextRule(what_rule);
      if (what_rule<69) return; }
  if (what_rule>=69 && what_rule<70)
    { R9.NextRule(what_rule);
      if (what_rule<70) return; }
  if (what_rule>=70 && what_rule<71)
    { R10.NextRule(what_rule);
      if (what_rule<71) return; }
  if (what_rule>=71 && what_rule<72)
    { R11.NextRule(what_rule);
      if (what_rule<72) return; }
  if (what_rule>=72 && what_rule<73)
    { R12.NextRule(what_rule);
      if (what_rule<73) return; }
  if (what_rule>=73 && what_rule<74)
    { R13.NextRule(what_rule);
      if (what_rule<74) return; }
  if (what_rule>=74 && what_rule<75)
    { R14.NextRule(what_rule);
      if (what_rule<75) return; }
  if (what_rule>=75 && what_rule<76)
    { R15.NextRule(what_rule);
      if (what_rule<76) return; }
  if (what_rule>=76 && what_rule<77)
    { R16.NextRule(what_rule);
      if (what_rule<77) return; }
  if (what_rule>=77 && what_rule<78)
    { R17.NextRule(what_rule);
      if (what_rule<78) return; }
  if (what_rule>=78 && what_rule<79)
    { R18.NextRule(what_rule);
      if (what_rule<79) return; }
  if (what_rule>=79 && what_rule<80)
    { R19.NextRule(what_rule);
      if (what_rule<80) return; }
  if (what_rule>=80 && what_rule<81)
    { R20.NextRule(what_rule);
      if (what_rule<81) return; }
  if (what_rule>=81 && what_rule<82)
    { R21.NextRule(what_rule);
      if (what_rule<82) return; }
  if (what_rule>=82 && what_rule<83)
    { R22.NextRule(what_rule);
      if (what_rule<83) return; }
  if (what_rule>=83 && what_rule<84)
    { R23.NextRule(what_rule);
      if (what_rule<84) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=10) return R0.Condition(r-0);
  if (r>=11 && r<=21) return R1.Condition(r-11);
  if (r>=22 && r<=32) return R2.Condition(r-22);
  if (r>=33 && r<=43) return R3.Condition(r-33);
  if (r>=44 && r<=54) return R4.Condition(r-44);
  if (r>=55 && r<=65) return R5.Condition(r-55);
  if (r>=66 && r<=66) return R6.Condition(r-66);
  if (r>=67 && r<=67) return R7.Condition(r-67);
  if (r>=68 && r<=68) return R8.Condition(r-68);
  if (r>=69 && r<=69) return R9.Condition(r-69);
  if (r>=70 && r<=70) return R10.Condition(r-70);
  if (r>=71 && r<=71) return R11.Condition(r-71);
  if (r>=72 && r<=72) return R12.Condition(r-72);
  if (r>=73 && r<=73) return R13.Condition(r-73);
  if (r>=74 && r<=74) return R14.Condition(r-74);
  if (r>=75 && r<=75) return R15.Condition(r-75);
  if (r>=76 && r<=76) return R16.Condition(r-76);
  if (r>=77 && r<=77) return R17.Condition(r-77);
  if (r>=78 && r<=78) return R18.Condition(r-78);
  if (r>=79 && r<=79) return R19.Condition(r-79);
  if (r>=80 && r<=80) return R20.Condition(r-80);
  if (r>=81 && r<=81) return R21.Condition(r-81);
  if (r>=82 && r<=82) return R22.Condition(r-82);
  if (r>=83 && r<=83) return R23.Condition(r-83);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=10) { R0.Code(r-0); return; } 
  if (r>=11 && r<=21) { R1.Code(r-11); return; } 
  if (r>=22 && r<=32) { R2.Code(r-22); return; } 
  if (r>=33 && r<=43) { R3.Code(r-33); return; } 
  if (r>=44 && r<=54) { R4.Code(r-44); return; } 
  if (r>=55 && r<=65) { R5.Code(r-55); return; } 
  if (r>=66 && r<=66) { R6.Code(r-66); return; } 
  if (r>=67 && r<=67) { R7.Code(r-67); return; } 
  if (r>=68 && r<=68) { R8.Code(r-68); return; } 
  if (r>=69 && r<=69) { R9.Code(r-69); return; } 
  if (r>=70 && r<=70) { R10.Code(r-70); return; } 
  if (r>=71 && r<=71) { R11.Code(r-71); return; } 
  if (r>=72 && r<=72) { R12.Code(r-72); return; } 
  if (r>=73 && r<=73) { R13.Code(r-73); return; } 
  if (r>=74 && r<=74) { R14.Code(r-74); return; } 
  if (r>=75 && r<=75) { R15.Code(r-75); return; } 
  if (r>=76 && r<=76) { R16.Code(r-76); return; } 
  if (r>=77 && r<=77) { R17.Code(r-77); return; } 
  if (r>=78 && r<=78) { R18.Code(r-78); return; } 
  if (r>=79 && r<=79) { R19.Code(r-79); return; } 
  if (r>=80 && r<=80) { R20.Code(r-80); return; } 
  if (r>=81 && r<=81) { R21.Code(r-81); return; } 
  if (r>=82 && r<=82) { R22.Code(r-82); return; } 
  if (r>=83 && r<=83) { R23.Code(r-83); return; } 
}
int Priority(unsigned short r)
{
  if (r<=10) { return R0.Priority(); } 
  if (r>=11 && r<=21) { return R1.Priority(); } 
  if (r>=22 && r<=32) { return R2.Priority(); } 
  if (r>=33 && r<=43) { return R3.Priority(); } 
  if (r>=44 && r<=54) { return R4.Priority(); } 
  if (r>=55 && r<=65) { return R5.Priority(); } 
  if (r>=66 && r<=66) { return R6.Priority(); } 
  if (r>=67 && r<=67) { return R7.Priority(); } 
  if (r>=68 && r<=68) { return R8.Priority(); } 
  if (r>=69 && r<=69) { return R9.Priority(); } 
  if (r>=70 && r<=70) { return R10.Priority(); } 
  if (r>=71 && r<=71) { return R11.Priority(); } 
  if (r>=72 && r<=72) { return R12.Priority(); } 
  if (r>=73 && r<=73) { return R13.Priority(); } 
  if (r>=74 && r<=74) { return R14.Priority(); } 
  if (r>=75 && r<=75) { return R15.Priority(); } 
  if (r>=76 && r<=76) { return R16.Priority(); } 
  if (r>=77 && r<=77) { return R17.Priority(); } 
  if (r>=78 && r<=78) { return R18.Priority(); } 
  if (r>=79 && r<=79) { return R19.Priority(); } 
  if (r>=80 && r<=80) { return R20.Priority(); } 
  if (r>=81 && r<=81) { return R21.Priority(); } 
  if (r>=82 && r<=82) { return R22.Priority(); } 
  if (r>=83 && r<=83) { return R23.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=10) return R0.Name(r-0);
  if (r>=11 && r<=21) return R1.Name(r-11);
  if (r>=22 && r<=32) return R2.Name(r-22);
  if (r>=33 && r<=43) return R3.Name(r-33);
  if (r>=44 && r<=54) return R4.Name(r-44);
  if (r>=55 && r<=65) return R5.Name(r-55);
  if (r>=66 && r<=66) return R6.Name(r-66);
  if (r>=67 && r<=67) return R7.Name(r-67);
  if (r>=68 && r<=68) return R8.Name(r-68);
  if (r>=69 && r<=69) return R9.Name(r-69);
  if (r>=70 && r<=70) return R10.Name(r-70);
  if (r>=71 && r<=71) return R11.Name(r-71);
  if (r>=72 && r<=72) return R12.Name(r-72);
  if (r>=73 && r<=73) return R13.Name(r-73);
  if (r>=74 && r<=74) return R14.Name(r-74);
  if (r>=75 && r<=75) return R15.Name(r-75);
  if (r>=76 && r<=76) return R16.Name(r-76);
  if (r>=77 && r<=77) return R17.Name(r-77);
  if (r>=78 && r<=78) return R18.Name(r-78);
  if (r>=79 && r<=79) return R19.Name(r-79);
  if (r>=80 && r<=80) return R20.Name(r-80);
  if (r>=81 && r<=81) return R21.Name(r-81);
  if (r>=82 && r<=82) return R22.Name(r-82);
  if (r>=83 && r<=83) return R23.Name(r-83);
  return NULL;
}
};
const unsigned numrules = 84;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 84


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
mu_roleS[1].mu_S = mu_s;
mu_roleS[1].mu_AS = mu_as;
mu_roleS[1].mu_N3 = mu_n3;
mu_roleS[1].mu_st = mu_S1;
mu_roleS[1].mu_commit = mu_false;
mu_roleS[1].mu_N1 = mu_anyNonce;
mu_roleS[1].mu_N2 = mu_anyNonce;
mu_roleS[1].mu_T = mu_anyNonce;
mu_roleS[1].mu_L = mu_anyNonce;
mu_roleS[1].mu_C = mu_anyAgent;
mu_roleC[1].mu_C = mu_c;
mu_roleC[1].mu_S = mu_s;
mu_roleC[1].mu_AS = mu_as;
mu_roleC[1].mu_N1 = mu_n1;
mu_roleC[1].mu_N2 = mu_n2;
mu_roleC[1].mu_T = mu_t;
mu_roleC[1].mu_L = mu_l;
mu_roleC[1].mu_st = mu_C1;
mu_roleC[1].mu_commit = mu_false;
mu_roleC[1].mu_N3 = mu_anyNonce;
mu_roleAS[1].mu_AS = mu_as;
mu_roleAS[1].mu_st = mu_AS1;
mu_roleAS[1].mu_commit = mu_false;
mu_roleAS[1].mu_N3 = mu_anyNonce;
mu_roleAS[1].mu_N1 = mu_anyNonce;
mu_roleAS[1].mu_N2 = mu_anyNonce;
mu_roleAS[1].mu_T = mu_anyNonce;
mu_roleAS[1].mu_L = mu_anyNonce;
mu_roleAS[1].mu_S = mu_anyAgent;
mu_roleAS[1].mu_C = mu_anyAgent;
{
for(int mu_i = 1; mu_i <= 10; mu_i++) {
mu_ch[mu_i].mu_empty = mu_true;
};
};
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
mu_msgs[mu_i].mu_msgType = mu_null;
mu_msgs[mu_i].mu_length = 0;
};
};
mu_msg_end = 0;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
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
mu_pat15Set.mu_content[mu_i] = 0;
mu_sPat15Set.mu_content[mu_i] = 0;
};
};
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
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
mu_pat15Set.mu_length = 0;
mu_sPat15Set.mu_length = 0;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleS[mu_i].mu_S;
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
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleC[mu_i].mu_C;
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
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleAS[mu_i].mu_AS;
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
mu_msgs[mu_msg_end].mu_msgType = mu_agent;
mu_msgs[mu_msg_end].mu_ag = mu_roleS[mu_i].mu_S;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_agent;
mu_msgs[mu_msg_end].mu_ag = mu_roleC[mu_i].mu_C;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_agent;
mu_msgs[mu_msg_end].mu_ag = mu_roleAS[mu_i].mu_AS;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_agent;
mu_msgs[mu_msg_end].mu_ag = mu_Intruder;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_Intruder;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat3 ( mu_roleAS[mu_i].mu_C, mu_roleAS[mu_i].mu_S, mu_roleAS[mu_i].mu_N1, mu_gnum );
mu_constructSpat3 ( mu_Intruder, mu_roleAS[mu_i].mu_S, mu_roleAS[mu_i].mu_N1, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat8 ( mu_roleC[mu_i].mu_AS, mu_roleC[mu_i].mu_C, mu_roleC[mu_i].mu_N1, mu_roleC[mu_i].mu_S, mu_roleC[mu_i].mu_AS, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat12 ( mu_roleS[mu_i].mu_C, mu_roleS[mu_i].mu_S, mu_roleS[mu_i].mu_T, mu_roleS[mu_i].mu_L, mu_roleS[mu_i].mu_N2, mu_roleS[mu_i].mu_S, mu_roleS[mu_i].mu_C, mu_gnum );
mu_constructSpat12 ( mu_Intruder, mu_roleS[mu_i].mu_S, mu_roleS[mu_i].mu_T, mu_roleS[mu_i].mu_L, mu_roleS[mu_i].mu_N2, mu_roleS[mu_i].mu_S, mu_Intruder, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat3 ( mu_roleAS[mu_i].mu_S, mu_roleAS[mu_i].mu_C, mu_roleAS[mu_i].mu_N3, mu_gnum );
mu_constructSpat3 ( mu_Intruder, mu_roleAS[mu_i].mu_C, mu_roleAS[mu_i].mu_N3, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat8 ( mu_roleS[mu_i].mu_AS, mu_roleS[mu_i].mu_S, mu_roleS[mu_i].mu_N3, mu_roleS[mu_i].mu_C, mu_roleS[mu_i].mu_AS, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat15 ( mu_roleC[mu_i].mu_S, mu_roleC[mu_i].mu_C, mu_roleC[mu_i].mu_N2, mu_roleC[mu_i].mu_C, mu_gnum );
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
int mu__invariant_383() // Invariant "auth1"
{
bool mu__quant384; 
mu__quant384 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr385;
  if (!((mu_roleC[mu_i].mu_commit) == (mu_true))) mu__boolexpr385 = TRUE ;
  else {
bool mu__quant386; 
mu__quant386 = FALSE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
if ( ((mu_roleS[mu_i].mu_N2) == (mu_roleC[mu_j].mu_N2)) )
  { mu__quant386 = TRUE; break; }
};
};
  mu__boolexpr385 = (mu__quant386) ; 
}
if ( !(mu__boolexpr385) )
  { mu__quant384 = FALSE; break; }
};
};
return mu__quant384;
};

bool mu__condition_387() // Condition for Rule "auth1"
{
  return mu__invariant_383( );
}

/**** end rule declaration ****/

int mu__invariant_388() // Invariant "sec2"
{
bool mu__quant389; 
mu__quant389 = TRUE;
{
for(int mu_i = 0; mu_i <= 400; mu_i++) {
bool mu__quant390; 
mu__quant390 = TRUE;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
bool mu__quant391; 
mu__quant391 = TRUE;
{
for(int mu_k = 1; mu_k <= 1; mu_k++) {
bool mu__boolexpr392;
bool mu__boolexpr393;
bool mu__boolexpr394;
bool mu__boolexpr395;
bool mu__boolexpr396;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = ((mu_msgs[mu_i].mu_noncePart) == (mu_roleC[mu_j].mu_N2)) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_roleC[mu_j].mu_C) != (mu_Intruder)) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = ((mu_roleC[mu_j].mu_S) != (mu_Intruder)) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = ((mu_roleS[mu_k].mu_S) != (mu_Intruder)) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = TRUE ;
  else {
  mu__boolexpr392 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr392) )
  { mu__quant391 = FALSE; break; }
};
};
if ( !(mu__quant391) )
  { mu__quant390 = FALSE; break; }
};
};
if ( !(mu__quant390) )
  { mu__quant389 = FALSE; break; }
};
};
return mu__quant389;
};

bool mu__condition_397() // Condition for Rule "sec2"
{
  return mu__invariant_388( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"sec2", &mu__condition_397, NULL, },
{"auth1", &mu__condition_387, NULL, },
};
const unsigned short numinvariants = 2;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
emit:NoScalarset
Spy_known:NoScalarset
sPat15Set:NoScalarset
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
roleS:NoScalarset
roleC:NoScalarset
roleAS:NoScalarset
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
pat15Set:NoScalarset
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
        mu_sPat15Set.MultisetSort();
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
        mu_roleS.MultisetSort();
        mu_roleC.MultisetSort();
        mu_roleAS.MultisetSort();
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
        mu_pat15Set.MultisetSort();
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
void mu_1_roleSNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleSNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleSNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleSNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleSNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleSNums::Limit(PermSet& Perm) {};
void mu_1_roleSNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleCNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleCNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleCNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleCNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleCNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleCNums::Limit(PermSet& Perm) {};
void mu_1_roleCNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleASNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleASNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleASNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleASNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleASNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleASNums::Limit(PermSet& Perm) {};
void mu_1_roleASNums::MultisetLimit(PermSet& Perm)
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
void mu_1_SStatus::Permute(PermSet& Perm, int i) {};
void mu_1_SStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_SStatus::Canonicalize(PermSet& Perm) {};
void mu_1_SStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_SStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_SStatus::Limit(PermSet& Perm) {};
void mu_1_SStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_CStatus::Permute(PermSet& Perm, int i) {};
void mu_1_CStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_CStatus::Canonicalize(PermSet& Perm) {};
void mu_1_CStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_CStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_CStatus::Limit(PermSet& Perm) {};
void mu_1_CStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_ASStatus::Permute(PermSet& Perm, int i) {};
void mu_1_ASStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_ASStatus::Canonicalize(PermSet& Perm) {};
void mu_1_ASStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_ASStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_ASStatus::Limit(PermSet& Perm) {};
void mu_1_ASStatus::MultisetLimit(PermSet& Perm)
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
void mu_1_RoleS::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleS::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleS::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleS::SimpleLimit(PermSet& Perm){}
void mu_1_RoleS::ArrayLimit(PermSet& Perm){}
void mu_1_RoleS::Limit(PermSet& Perm)
{
};
void mu_1_RoleS::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleC::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleC::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleC::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleC::SimpleLimit(PermSet& Perm){}
void mu_1_RoleC::ArrayLimit(PermSet& Perm){}
void mu_1_RoleC::Limit(PermSet& Perm)
{
};
void mu_1_RoleC::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleAS::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleAS::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleAS::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleAS::SimpleLimit(PermSet& Perm){}
void mu_1_RoleAS::ArrayLimit(PermSet& Perm){}
void mu_1_RoleAS::Limit(PermSet& Perm)
{
};
void mu_1_RoleAS::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<401; j++)
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
  for (j=0; j<401; j++)
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
  for (j=0; j<401; j++)
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
  for (j=0; j<401; j++)
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
              mu_sPat15Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat15Set.MultisetSort();
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
              mu_roleS.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleS.MultisetSort();
              mu_roleC.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleC.MultisetSort();
              mu_roleAS.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleAS.MultisetSort();
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
              mu_pat15Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat15Set.MultisetSort();
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
          mu_sPat15Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat15Set.MultisetSort();
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
          mu_roleS.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleS.MultisetSort();
          mu_roleC.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleC.MultisetSort();
          mu_roleAS.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleAS.MultisetSort();
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
          mu_pat15Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat15Set.MultisetSort();
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
              mu_sPat15Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat15Set.MultisetSort();
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
              mu_roleS.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleS.MultisetSort();
              mu_roleC.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleC.MultisetSort();
              mu_roleAS.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleAS.MultisetSort();
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
              mu_pat15Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat15Set.MultisetSort();
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
      mu_sPat15Set.MultisetSort();
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
      mu_roleS.MultisetSort();
      mu_roleC.MultisetSort();
      mu_roleAS.MultisetSort();
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
      mu_pat15Set.MultisetSort();
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
        mu_sPat15Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat15Set.MultisetSort();
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
        mu_roleS.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleS.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleC.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleC.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleAS.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleAS.MultisetSort();
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
