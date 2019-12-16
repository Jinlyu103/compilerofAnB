/******************************
  Program "nspk_2.m" compiled by "Caching Murphi Release 5.4.9.1"

  Murphi Last Compiled date: "Aug  7 2019"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9.1"
#define MURPHI_DATE "Aug  7 2019"
#define PROTOCOL_NAME "nspk_2"
#define BITS_IN_WORLD 4168
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

class mu_1_aliceNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_aliceNums& val) { return mu__byte::operator=((int) val); };
  mu_1_aliceNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_aliceNums (void): mu__byte(1, 1, 1) {};
  mu_1_aliceNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_aliceNums mu_1_aliceNums_undefined_var;

class mu_1_bobNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_bobNums& val) { return mu__byte::operator=((int) val); };
  mu_1_bobNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_bobNums (void): mu__byte(1, 1, 1) {};
  mu_1_bobNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu_1_bobNums mu_1_bobNums_undefined_var;

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

class mu_1_DeductionsNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_DeductionsNums& val) { return mu__byte::operator=((int) val); };
  mu_1_DeductionsNums (const char *name, int os): mu__byte(0, 20, 5, name, os) {};
  mu_1_DeductionsNums (void): mu__byte(0, 20, 5) {};
  mu_1_DeductionsNums (int val): mu__byte(0, 20, 5, "Parameter or function result.", 0)
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
mu_1_DeductionsNums mu_1_DeductionsNums_undefined_var;

class mu_1_msgpassingNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_msgpassingNums& val) { return mu__byte::operator=((int) val); };
  mu_1_msgpassingNums (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_msgpassingNums (void): mu__byte(1, 3, 2) {};
  mu_1_msgpassingNums (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
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
mu_1_msgpassingNums mu_1_msgpassingNums_undefined_var;

class mu_1_eventNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_eventNums& val) { return mu__byte::operator=((int) val); };
  mu_1_eventNums (const char *name, int os): mu__byte(0, 30, 5, name, os) {};
  mu_1_eventNums (void): mu__byte(0, 30, 5) {};
  mu_1_eventNums (int val): mu__byte(0, 30, 5, "Parameter or function result.", 0)
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
mu_1_eventNums mu_1_eventNums_undefined_var;

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

  mu_1_AgentType (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_AgentType (void): mu__byte(1, 3, 2) {};
  mu_1_AgentType (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
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

const char *mu_1_AgentType::values[] = {"Alice","Bob","intruderType",NULL };

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
      return ( s << mu_1_NonceType::values[ int(val) - 4] );
    else return ( s << "Undefined" );
  };

  mu_1_NonceType (const char *name, int os): mu__byte(4, 7, 3, name, os) {};
  mu_1_NonceType (void): mu__byte(4, 7, 3) {};
  mu_1_NonceType (int val): mu__byte(4, 7, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -4]; };
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
      cout << name << ":" << values[ value() -4] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NonceType::values[] = {"Na","Na1","Nb","Nb1",NULL };

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

const char *mu_1_EncryptType::values[] = {"PK","SK","SymK",NULL };

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
  mu_1_EncryptType mu_encTyp;
  mu_1_AgentType mu_ag;
  mu_1_KeyType ( const char *n, int os ) { set_self(n,os); };
  mu_1_KeyType ( void ) {};

  virtual ~mu_1_KeyType(); 
friend int CompareWeight(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = CompareWeight(a.mu_encTyp, b.mu_encTyp);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = Compare(a.mu_encTyp, b.mu_encTyp);
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
    mu_encTyp.MultisetSort();
    mu_ag.MultisetSort();
  }
  void print_statistic()
  {
    mu_encTyp.print_statistic();
    mu_ag.print_statistic();
  }
  void clear() {
    mu_encTyp.clear();
    mu_ag.clear();
 };
  void undefine() {
    mu_encTyp.undefine();
    mu_ag.undefine();
 };
  void reset() {
    mu_encTyp.reset();
    mu_ag.reset();
 };
  void print() {
    mu_encTyp.print();
    mu_ag.print();
  };
  void print_diff(state *prevstate) {
    mu_encTyp.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_encTyp.to_state(thestate);
    mu_ag.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_KeyType& operator= (const mu_1_KeyType& from) {
    mu_encTyp.value(from.mu_encTyp.value());
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

  if (name) mu_encTyp.set_self_2(name, ".encTyp", os + 0 ); else mu_encTyp.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
}

mu_1_KeyType::~mu_1_KeyType()
{
}

/*** end record declaration ***/
mu_1_KeyType mu_1_KeyType_undefined_var;

class mu_1_AliceStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AliceStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AliceStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_AliceStatus::values[ int(val) - 11] );
    else return ( s << "Undefined" );
  };

  mu_1_AliceStatus (const char *name, int os): mu__byte(11, 13, 2, name, os) {};
  mu_1_AliceStatus (void): mu__byte(11, 13, 2) {};
  mu_1_AliceStatus (int val): mu__byte(11, 13, 2, "Parameter or function result.", 0)
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

const char *mu_1_AliceStatus::values[] = {"A1","A2","A3",NULL };

/*** end of enum declaration ***/
mu_1_AliceStatus mu_1_AliceStatus_undefined_var;

class mu_1_BobStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_BobStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_BobStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_BobStatus::values[ int(val) - 14] );
    else return ( s << "Undefined" );
  };

  mu_1_BobStatus (const char *name, int os): mu__byte(14, 16, 2, name, os) {};
  mu_1_BobStatus (void): mu__byte(14, 16, 2) {};
  mu_1_BobStatus (int val): mu__byte(14, 16, 2, "Parameter or function result.", 0)
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

const char *mu_1_BobStatus::values[] = {"B1","B2","B3",NULL };

/*** end of enum declaration ***/
mu_1_BobStatus mu_1_BobStatus_undefined_var;

class mu_1_IntruderStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_IntruderStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_IntruderStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_IntruderStatus::values[ int(val) - 17] );
    else return ( s << "Undefined" );
  };

  mu_1_IntruderStatus (const char *name, int os): mu__byte(17, 26, 4, name, os) {};
  mu_1_IntruderStatus (void): mu__byte(17, 26, 4) {};
  mu_1_IntruderStatus (int val): mu__byte(17, 26, 4, "Parameter or function result.", 0)
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

const char *mu_1_IntruderStatus::values[] = {"wait","gotmsg1","gotmsg2","gotmsg3","deducted1","deducted2","deducted3","emitted1","emitted2","emitted3",NULL };

/*** end of enum declaration ***/
mu_1_IntruderStatus mu_1_IntruderStatus_undefined_var;

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
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu_1_DeduceType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_DeduceType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_DeduceType& val)
  {
    if (val.defined())
      return ( s << mu_1_DeduceType::values[ int(val) - 35] );
    else return ( s << "Undefined" );
  };

  mu_1_DeduceType (const char *name, int os): mu__byte(35, 38, 3, name, os) {};
  mu_1_DeduceType (void): mu__byte(35, 38, 3) {};
  mu_1_DeduceType (int val): mu__byte(35, 38, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -35]; };
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
      cout << name << ":" << values[ value() -35] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_DeduceType::values[] = {"encryptDed","decrypt","enConcatDed","deConcatDed",NULL };

/*** end of enum declaration ***/
mu_1_DeduceType mu_1_DeduceType_undefined_var;

class mu_1_TDeduction
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_0_boolean mu_deduced;
  mu_1_DeduceType mu_deduceKind;
  mu_1_indexType mu_conclusion;
  mu_1_indexType mu_assumption1;
  mu_1_indexType mu_assumption2;
  mu_1_TDeduction ( const char *n, int os ) { set_self(n,os); };
  mu_1_TDeduction ( void ) {};

  virtual ~mu_1_TDeduction(); 
friend int CompareWeight(mu_1_TDeduction& a, mu_1_TDeduction& b)
  {
    int w;
    w = CompareWeight(a.mu_deduced, b.mu_deduced);
    if (w!=0) return w;
    w = CompareWeight(a.mu_deduceKind, b.mu_deduceKind);
    if (w!=0) return w;
    w = CompareWeight(a.mu_conclusion, b.mu_conclusion);
    if (w!=0) return w;
    w = CompareWeight(a.mu_assumption1, b.mu_assumption1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_assumption2, b.mu_assumption2);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_TDeduction& a, mu_1_TDeduction& b)
  {
    int w;
    w = Compare(a.mu_deduced, b.mu_deduced);
    if (w!=0) return w;
    w = Compare(a.mu_deduceKind, b.mu_deduceKind);
    if (w!=0) return w;
    w = Compare(a.mu_conclusion, b.mu_conclusion);
    if (w!=0) return w;
    w = Compare(a.mu_assumption1, b.mu_assumption1);
    if (w!=0) return w;
    w = Compare(a.mu_assumption2, b.mu_assumption2);
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
    mu_deduced.MultisetSort();
    mu_deduceKind.MultisetSort();
    mu_conclusion.MultisetSort();
    mu_assumption1.MultisetSort();
    mu_assumption2.MultisetSort();
  }
  void print_statistic()
  {
    mu_deduced.print_statistic();
    mu_deduceKind.print_statistic();
    mu_conclusion.print_statistic();
    mu_assumption1.print_statistic();
    mu_assumption2.print_statistic();
  }
  void clear() {
    mu_deduced.clear();
    mu_deduceKind.clear();
    mu_conclusion.clear();
    mu_assumption1.clear();
    mu_assumption2.clear();
 };
  void undefine() {
    mu_deduced.undefine();
    mu_deduceKind.undefine();
    mu_conclusion.undefine();
    mu_assumption1.undefine();
    mu_assumption2.undefine();
 };
  void reset() {
    mu_deduced.reset();
    mu_deduceKind.reset();
    mu_conclusion.reset();
    mu_assumption1.reset();
    mu_assumption2.reset();
 };
  void print() {
    mu_deduced.print();
    mu_deduceKind.print();
    mu_conclusion.print();
    mu_assumption1.print();
    mu_assumption2.print();
  };
  void print_diff(state *prevstate) {
    mu_deduced.print_diff(prevstate);
    mu_deduceKind.print_diff(prevstate);
    mu_conclusion.print_diff(prevstate);
    mu_assumption1.print_diff(prevstate);
    mu_assumption2.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_deduced.to_state(thestate);
    mu_deduceKind.to_state(thestate);
    mu_conclusion.to_state(thestate);
    mu_assumption1.to_state(thestate);
    mu_assumption2.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_TDeduction& operator= (const mu_1_TDeduction& from) {
    mu_deduced.value(from.mu_deduced.value());
    mu_deduceKind.value(from.mu_deduceKind.value());
    mu_conclusion.value(from.mu_conclusion.value());
    mu_assumption1.value(from.mu_assumption1.value());
    mu_assumption2.value(from.mu_assumption2.value());
    return *this;
  };
};

  void mu_1_TDeduction::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_TDeduction::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_TDeduction::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_deduced.set_self_2(name, ".deduced", os + 0 ); else mu_deduced.set_self_2(NULL, NULL, 0);
  if (name) mu_deduceKind.set_self_2(name, ".deduceKind", os + 8 ); else mu_deduceKind.set_self_2(NULL, NULL, 0);
  if (name) mu_conclusion.set_self_2(name, ".conclusion", os + 16 ); else mu_conclusion.set_self_2(NULL, NULL, 0);
  if (name) mu_assumption1.set_self_2(name, ".assumption1", os + 24 ); else mu_assumption1.set_self_2(NULL, NULL, 0);
  if (name) mu_assumption2.set_self_2(name, ".assumption2", os + 32 ); else mu_assumption2.set_self_2(NULL, NULL, 0);
}

mu_1_TDeduction::~mu_1_TDeduction()
{
}

/*** end record declaration ***/
mu_1_TDeduction mu_1_TDeduction_undefined_var;

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
  if (name) mu_sender.set_self_2(name, ".sender", os + 88 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 96 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 104 ); else mu_empty.set_self_2(NULL, NULL, 0);
}

mu_1_Channel::~mu_1_Channel()
{
}

/*** end record declaration ***/
mu_1_Channel mu_1_Channel_undefined_var;

class mu_1_RoleInit
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_Na;
  mu_1_AliceStatus mu_st;
  mu_1_RoleInit ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleInit ( void ) {};

  virtual ~mu_1_RoleInit(); 
friend int CompareWeight(mu_1_RoleInit& a, mu_1_RoleInit& b)
  {
    int w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleInit& a, mu_1_RoleInit& b)
  {
    int w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
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
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_Na.MultisetSort();
    mu_st.MultisetSort();
  }
  void print_statistic()
  {
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_Na.print_statistic();
    mu_st.print_statistic();
  }
  void clear() {
    mu_A.clear();
    mu_B.clear();
    mu_Na.clear();
    mu_st.clear();
 };
  void undefine() {
    mu_A.undefine();
    mu_B.undefine();
    mu_Na.undefine();
    mu_st.undefine();
 };
  void reset() {
    mu_A.reset();
    mu_B.reset();
    mu_Na.reset();
    mu_st.reset();
 };
  void print() {
    mu_A.print();
    mu_B.print();
    mu_Na.print();
    mu_st.print();
  };
  void print_diff(state *prevstate) {
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_Na.print_diff(prevstate);
    mu_st.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_Na.to_state(thestate);
    mu_st.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleInit& operator= (const mu_1_RoleInit& from) {
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_Na.value(from.mu_Na.value());
    mu_st.value(from.mu_st.value());
    return *this;
  };
};

  void mu_1_RoleInit::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleInit::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleInit::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_A.set_self_2(name, ".A", os + 0 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 8 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_Na.set_self_2(name, ".Na", os + 16 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 24 ); else mu_st.set_self_2(NULL, NULL, 0);
}

mu_1_RoleInit::~mu_1_RoleInit()
{
}

/*** end record declaration ***/
mu_1_RoleInit mu_1_RoleInit_undefined_var;

class mu_1_RoleResp
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentType mu_B;
  mu_1_NonceType mu_Nb;
  mu_1_BobStatus mu_st;
  mu_1_RoleResp ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleResp ( void ) {};

  virtual ~mu_1_RoleResp(); 
friend int CompareWeight(mu_1_RoleResp& a, mu_1_RoleResp& b)
  {
    int w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleResp& a, mu_1_RoleResp& b)
  {
    int w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
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
    mu_B.MultisetSort();
    mu_Nb.MultisetSort();
    mu_st.MultisetSort();
  }
  void print_statistic()
  {
    mu_B.print_statistic();
    mu_Nb.print_statistic();
    mu_st.print_statistic();
  }
  void clear() {
    mu_B.clear();
    mu_Nb.clear();
    mu_st.clear();
 };
  void undefine() {
    mu_B.undefine();
    mu_Nb.undefine();
    mu_st.undefine();
 };
  void reset() {
    mu_B.reset();
    mu_Nb.reset();
    mu_st.reset();
 };
  void print() {
    mu_B.print();
    mu_Nb.print();
    mu_st.print();
  };
  void print_diff(state *prevstate) {
    mu_B.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_st.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_B.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_st.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleResp& operator= (const mu_1_RoleResp& from) {
    mu_B.value(from.mu_B.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_st.value(from.mu_st.value());
    return *this;
  };
};

  void mu_1_RoleResp::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleResp::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleResp::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_B.set_self_2(name, ".B", os + 0 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 8 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 16 ); else mu_st.set_self_2(NULL, NULL, 0);
}

mu_1_RoleResp::~mu_1_RoleResp()
{
}

/*** end record declaration ***/
mu_1_RoleResp mu_1_RoleResp_undefined_var;

class mu_1_RoleIntruder
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentType mu_B;
  mu_1_IntruderStatus mu_st;
  mu_1_RoleIntruder ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleIntruder ( void ) {};

  virtual ~mu_1_RoleIntruder(); 
friend int CompareWeight(mu_1_RoleIntruder& a, mu_1_RoleIntruder& b)
  {
    int w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleIntruder& a, mu_1_RoleIntruder& b)
  {
    int w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
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
    mu_B.MultisetSort();
    mu_st.MultisetSort();
  }
  void print_statistic()
  {
    mu_B.print_statistic();
    mu_st.print_statistic();
  }
  void clear() {
    mu_B.clear();
    mu_st.clear();
 };
  void undefine() {
    mu_B.undefine();
    mu_st.undefine();
 };
  void reset() {
    mu_B.reset();
    mu_st.reset();
 };
  void print() {
    mu_B.print();
    mu_st.print();
  };
  void print_diff(state *prevstate) {
    mu_B.print_diff(prevstate);
    mu_st.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_B.to_state(thestate);
    mu_st.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleIntruder& operator= (const mu_1_RoleIntruder& from) {
    mu_B.value(from.mu_B.value());
    mu_st.value(from.mu_st.value());
    return *this;
  };
};

  void mu_1_RoleIntruder::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleIntruder::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleIntruder::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_B.set_self_2(name, ".B", os + 0 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 8 ); else mu_st.set_self_2(NULL, NULL, 0);
}

mu_1_RoleIntruder::~mu_1_RoleIntruder()
{
}

/*** end record declaration ***/
mu_1_RoleIntruder mu_1_RoleIntruder_undefined_var;

class mu_1_Event
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_0_boolean mu_send;
  mu_1_AgentType mu_sender;
  mu_1_AgentType mu_receiver;
  mu_1_NonceType mu_nonce;
  mu_1_Event ( const char *n, int os ) { set_self(n,os); };
  mu_1_Event ( void ) {};

  virtual ~mu_1_Event(); 
friend int CompareWeight(mu_1_Event& a, mu_1_Event& b)
  {
    int w;
    w = CompareWeight(a.mu_send, b.mu_send);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = CompareWeight(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = CompareWeight(a.mu_nonce, b.mu_nonce);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Event& a, mu_1_Event& b)
  {
    int w;
    w = Compare(a.mu_send, b.mu_send);
    if (w!=0) return w;
    w = Compare(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = Compare(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = Compare(a.mu_nonce, b.mu_nonce);
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
    mu_send.MultisetSort();
    mu_sender.MultisetSort();
    mu_receiver.MultisetSort();
    mu_nonce.MultisetSort();
  }
  void print_statistic()
  {
    mu_send.print_statistic();
    mu_sender.print_statistic();
    mu_receiver.print_statistic();
    mu_nonce.print_statistic();
  }
  void clear() {
    mu_send.clear();
    mu_sender.clear();
    mu_receiver.clear();
    mu_nonce.clear();
 };
  void undefine() {
    mu_send.undefine();
    mu_sender.undefine();
    mu_receiver.undefine();
    mu_nonce.undefine();
 };
  void reset() {
    mu_send.reset();
    mu_sender.reset();
    mu_receiver.reset();
    mu_nonce.reset();
 };
  void print() {
    mu_send.print();
    mu_sender.print();
    mu_receiver.print();
    mu_nonce.print();
  };
  void print_diff(state *prevstate) {
    mu_send.print_diff(prevstate);
    mu_sender.print_diff(prevstate);
    mu_receiver.print_diff(prevstate);
    mu_nonce.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_send.to_state(thestate);
    mu_sender.to_state(thestate);
    mu_receiver.to_state(thestate);
    mu_nonce.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Event& operator= (const mu_1_Event& from) {
    mu_send.value(from.mu_send.value());
    mu_sender.value(from.mu_sender.value());
    mu_receiver.value(from.mu_receiver.value());
    mu_nonce.value(from.mu_nonce.value());
    return *this;
  };
};

  void mu_1_Event::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Event::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Event::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_send.set_self_2(name, ".send", os + 0 ); else mu_send.set_self_2(NULL, NULL, 0);
  if (name) mu_sender.set_self_2(name, ".sender", os + 8 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 16 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_nonce.set_self_2(name, ".nonce", os + 24 ); else mu_nonce.set_self_2(NULL, NULL, 0);
}

mu_1_Event::~mu_1_Event()
{
}

/*** end record declaration ***/
mu_1_Event mu_1_Event_undefined_var;

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
  mu_1_Channel array[ 3 ];
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
    if ( ( index >= 1 ) && ( index <= 3 ) )
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
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<3; i++) {
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
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
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
  for(int i = 0; i < 3; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 112 + os);
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
  mu_1_RoleInit array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_RoleInit& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
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
  mu_1_RoleResp array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_RoleResp& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
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
  mu_1_Message array[ 21 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
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
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 21; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
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
  for(int i = 0; i < 21; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 88 + os);
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
  mu_0_boolean array[ 21 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
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
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 21; i++)
      array[i].value(from.array[i].value());
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
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

const int mu_aliceNum = 1;
const int mu_bobNum = 1;
const int mu_intruderNum = 1;
const int mu_total_fact = 20;
const int mu_deductionsNum = 20;
const int mu_msgpassingNum = 3;
const int mu_eventNum = 30;
const int mu_Alice = 1;
const int mu_Bob = 2;
const int mu_intruderType = 3;
const int mu_Na = 4;
const int mu_Na1 = 5;
const int mu_Nb = 6;
const int mu_Nb1 = 7;
const int mu_PK = 8;
const int mu_SK = 9;
const int mu_SymK = 10;
const int mu_A1 = 11;
const int mu_A2 = 12;
const int mu_A3 = 13;
const int mu_B1 = 14;
const int mu_B2 = 15;
const int mu_B3 = 16;
const int mu_wait = 17;
const int mu_gotmsg1 = 18;
const int mu_gotmsg2 = 19;
const int mu_gotmsg3 = 20;
const int mu_deducted1 = 21;
const int mu_deducted2 = 22;
const int mu_deducted3 = 23;
const int mu_emitted1 = 24;
const int mu_emitted2 = 25;
const int mu_emitted3 = 26;
const int mu_null = 27;
const int mu_agent = 28;
const int mu_nonce = 29;
const int mu_key = 30;
const int mu_aenc = 31;
const int mu_senc = 32;
const int mu_concat = 33;
const int mu_hash = 34;
const int mu_encryptDed = 35;
const int mu_decrypt = 36;
const int mu_enConcatDed = 37;
const int mu_deConcatDed = 38;
/*** Variable declaration ***/
mu_1__type_1 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_2 mu_alices("alices",336);

/*** Variable declaration ***/
mu_1__type_3 mu_bobs("bobs",368);

/*** Variable declaration ***/
mu_1_RoleIntruder mu_intruder("intruder",392);

/*** Variable declaration ***/
mu_1__type_4 mu_msgs("msgs",408);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",2256);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",2432);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",2608);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",2784);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",2960);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",3136);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",3312);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",3488);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",3664);

/*** Variable declaration ***/
mu_1_DeductionsNums mu_ded_end("ded_end",3672);

/*** Variable declaration ***/
mu_1_eventNums mu_eve_end("eve_end",3680);

/*** Variable declaration ***/
mu_1__type_5 mu_Spy_known("Spy_known",3688);

/*** Variable declaration ***/
mu_1__type_6 mu_emit("emit",3856);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",4024);

/*** Variable declaration ***/
mu_1_Event mu_eve("eve",4112);

/*** Variable declaration ***/
mu_1_indexType mu_endn("endn",4144);

/*** Variable declaration ***/
mu_1_indexType mu_end1("end1",4152);

/*** Variable declaration ***/
mu_1_indexType mu_end2("end2",4160);

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
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
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
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_lookAddPat3(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",8);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",16);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",24);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",112);

mu_index = 0;
mu_lookAddPat1 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_A, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_concat) )
{
bool mu__boolexpr7;
  if (!((mu_msgs[mu_i].mu_concatPart1) == (mu_i1))) mu__boolexpr7 = FALSE ;
  else {
  mu__boolexpr7 = ((mu_msgs[mu_i].mu_concatPart2) == (mu_i2)) ; 
}
if ( mu__boolexpr7 )
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

void mu_lookAddPat4(const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr8;
  if (!((mu_msgs[mu_i].mu_k.mu_encTyp) == (mu_PK))) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_B)) ; 
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
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encTyp = mu_PK;
if (mu_B.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_B;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_lookAddPat5(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",88);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",176);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",184);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",192);

mu_index = 0;
mu_lookAddPat3 ( mu_Na, mu_A, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_B, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr9;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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

void mu_lookAddPat6(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",88);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",176);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",184);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",192);

mu_index = 0;
mu_lookAddPat1 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Nb, mu_msg2, mu_i2 );
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

void mu_lookAddPat7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",88);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",176);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",184);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",192);

mu_index = 0;
mu_lookAddPat6 ( mu_Na, mu_Nb, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_A, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr11;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
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

void mu_lookAddPat8(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",88);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",176);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",184);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",192);

mu_index = 0;
mu_lookAddPat1 ( mu_Nb, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_B, mu_msg2, mu_i2 );
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

void mu_isPat3(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
bool mu__boolexpr13;
  if (!((mu_msgs[mu_msg.mu_concatPart1].mu_msgType) == (mu_nonce))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_msgs[mu_msg.mu_concatPart2].mu_msgType) == (mu_agent)) ; 
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

void mu_isPat4(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_key) )
{
if ( (mu_msg.mu_k.mu_encTyp) == (mu_PK) )
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

void mu_isPat5(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flag_part1("flag_part1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_part2("flag_part2",16);

mu_flag1 = mu_false;
mu_flag_part1 = mu_false;
mu_flag_part2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat3 ( mu_msgs[mu_msg.mu_aencMsg], mu_flag_part1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_aencKey], mu_flag_part2 );
bool mu__boolexpr14;
  if (!(mu_flag_part1)) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = (mu_flag_part2) ; 
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

void mu_isPat6(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
bool mu__boolexpr15;
  if (!((mu_msgs[mu_msg.mu_concatPart1].mu_msgType) == (mu_nonce))) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_msgs[mu_msg.mu_concatPart2].mu_msgType) == (mu_nonce)) ; 
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

void mu_isPat7(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flag_part1("flag_part1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_part2("flag_part2",16);

mu_flag1 = mu_false;
mu_flag_part1 = mu_false;
mu_flag_part2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat6 ( mu_msgs[mu_msg.mu_aencMsg], mu_flag_part1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_aencKey], mu_flag_part2 );
bool mu__boolexpr16;
  if (!(mu_flag_part1)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = (mu_flag_part2) ; 
}
if ( mu__boolexpr16 )
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

void mu_isPat8(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flag_part1("flag_part1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_part2("flag_part2",16);

mu_flag1 = mu_false;
mu_flag_part1 = mu_false;
mu_flag_part2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_aencMsg], mu_flag_part1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_aencKey], mu_flag_part2 );
bool mu__boolexpr17;
  if (!(mu_flag_part1)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = (mu_flag_part2) ; 
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

void mu_cons1(const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_lookAddPat5 ( mu_Na, mu_A, mu_B, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_Na, mu_Nb, mu_A, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_lookAddPat8 ( mu_Nb, mu_B, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct1(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_A, mu_1_AgentType& mu_B)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",104);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",192);

mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_B = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart1];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart2];
mu_Na = mu_msgNum1.mu_noncePart;
mu_A = mu_msgNum2.mu_ag;
};
/*** end procedure declaration ***/

void mu_destruct2(mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_A)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",104);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",192);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_A = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_msgNum1 = mu_msgs[mu_msg1.mu_concatPart1];
mu_msgNum2 = mu_msgs[mu_msg1.mu_concatPart2];
mu_Na = mu_msgNum1.mu_noncePart;
mu_Nb = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_destruct3(mu_1_Message& mu_msg, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_B)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",16);

mu_msg1.clear();
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_B = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_Nb = mu_msg1.mu_noncePart;
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
  if (!((mu_msgs[mu_i].mu_k.mu_encTyp) == (mu_msg.mu_k.mu_encTyp))) mu__boolexpr25 = FALSE ;
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
if ( (mu_msg.mu_k.mu_encTyp) == (mu_PK) )
{
cout << "PK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encTyp) == (mu_SK) )
{
cout << "SK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encTyp) == (mu_SymK) )
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
cout << "concat{";
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart1] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart2] );
cout << "}";
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
mu_key_inv.mu_k.mu_encTyp = mu_msgK.mu_k.mu_encTyp;
if ( (mu_msgK.mu_k.mu_encTyp) == (mu_PK) )
{
mu_key_inv.mu_k.mu_encTyp = mu_SK;
}
else
{
if ( (mu_msgK.mu_k.mu_encTyp) == (mu_SK) )
{
mu_key_inv.mu_k.mu_encTyp = mu_PK;
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
  if (!((mu_msgs[mu_i].mu_k.mu_encTyp) == (mu_msg.mu_k.mu_encTyp))) mu__boolexpr33 = FALSE ;
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
mu_1_NonceType mu_locNa("locNa",8);

/*** Variable declaration ***/
mu_1_AgentType mu_locA("locA",16);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",24);

mu_index = 0;
mu_locNa = mu_msgs[mu_msgNo1].mu_noncePart;
mu_locA = mu_msgs[mu_msgNo2].mu_ag;
mu_lookAddPat3 ( mu_locNa, mu_locA, mu_msg, mu_index );
return mu_index;
	Error.Error("The end of function construct3By12 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct5By34(const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_NonceType mu_locNa("locNa",8);

/*** Variable declaration ***/
mu_1_AgentType mu_locA("locA",16);

/*** Variable declaration ***/
mu_1_AgentType mu_k_ag("k_ag",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",32);

mu_index = 0;
mu_locNa = mu_msgs[mu_msgs[mu_msgNo3].mu_concatPart1].mu_noncePart;
mu_locA = mu_msgs[mu_msgs[mu_msgNo3].mu_concatPart2].mu_ag;
mu_k_ag = mu_msgs[mu_msgNo4].mu_k.mu_ag;
mu_lookAddPat5 ( mu_locNa, mu_locA, mu_k_ag, mu_msg, mu_index );
return mu_index;
	Error.Error("The end of function construct5By34 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct6By11(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_NonceType mu_locNa("locNa",8);

/*** Variable declaration ***/
mu_1_NonceType mu_locNb("locNb",16);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",24);

mu_index = 0;
mu_locNa = mu_msgs[mu_msgNo1].mu_noncePart;
mu_locNb = mu_msgs[mu_msgNo2].mu_noncePart;
mu_lookAddPat6 ( mu_locNa, mu_locNb, mu_msg, mu_index );
return mu_index;
	Error.Error("The end of function construct6By11 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By64(const mu_1_indexType& mu_msgNo6,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_NonceType mu_locNa("locNa",8);

/*** Variable declaration ***/
mu_1_NonceType mu_locNb("locNb",16);

/*** Variable declaration ***/
mu_1_AgentType mu_k_ag("k_ag",24);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",32);

mu_index = 0;
mu_locNa = mu_msgs[mu_msgs[mu_msgNo6].mu_concatPart1].mu_noncePart;
mu_locNb = mu_msgs[mu_msgs[mu_msgNo6].mu_concatPart2].mu_noncePart;
mu_k_ag = mu_msgs[mu_msgNo4].mu_k.mu_ag;
mu_lookAddPat7 ( mu_locNa, mu_locNb, mu_k_ag, mu_msg, mu_index );
return mu_index;
	Error.Error("The end of function construct7By64 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct8By14(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_NonceType mu_locNb("locNb",8);

/*** Variable declaration ***/
mu_1_AgentType mu_k_ag("k_ag",16);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",24);

mu_index = 0;
mu_locNb = mu_msgs[mu_msgNo1].mu_noncePart;
mu_k_ag = mu_msgs[mu_msgNo4].mu_k.mu_ag;
mu_lookAddPat8 ( mu_locNb, mu_k_ag, mu_msg, mu_index );
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





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_ch.clear();
  mu_alices.clear();
  mu_bobs.clear();
  mu_intruder.clear();
  mu_msgs.clear();
  mu_pat1Set.clear();
  mu_pat2Set.clear();
  mu_pat3Set.clear();
  mu_pat4Set.clear();
  mu_pat5Set.clear();
  mu_pat6Set.clear();
  mu_pat7Set.clear();
  mu_pat8Set.clear();
  mu_msg_end.clear();
  mu_ded_end.clear();
  mu_eve_end.clear();
  mu_Spy_known.clear();
  mu_emit.clear();
  mu_msg.clear();
  mu_eve.clear();
  mu_endn.clear();
  mu_end1.clear();
  mu_end2.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_alices.undefine();
  mu_bobs.undefine();
  mu_intruder.undefine();
  mu_msgs.undefine();
  mu_pat1Set.undefine();
  mu_pat2Set.undefine();
  mu_pat3Set.undefine();
  mu_pat4Set.undefine();
  mu_pat5Set.undefine();
  mu_pat6Set.undefine();
  mu_pat7Set.undefine();
  mu_pat8Set.undefine();
  mu_msg_end.undefine();
  mu_ded_end.undefine();
  mu_eve_end.undefine();
  mu_Spy_known.undefine();
  mu_emit.undefine();
  mu_msg.undefine();
  mu_eve.undefine();
  mu_endn.undefine();
  mu_end1.undefine();
  mu_end2.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_alices.reset();
  mu_bobs.reset();
  mu_intruder.reset();
  mu_msgs.reset();
  mu_pat1Set.reset();
  mu_pat2Set.reset();
  mu_pat3Set.reset();
  mu_pat4Set.reset();
  mu_pat5Set.reset();
  mu_pat6Set.reset();
  mu_pat7Set.reset();
  mu_pat8Set.reset();
  mu_msg_end.reset();
  mu_ded_end.reset();
  mu_eve_end.reset();
  mu_Spy_known.reset();
  mu_emit.reset();
  mu_msg.reset();
  mu_eve.reset();
  mu_endn.reset();
  mu_end1.reset();
  mu_end2.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print();
  mu_alices.print();
  mu_bobs.print();
  mu_intruder.print();
  mu_msgs.print();
  mu_pat1Set.print();
  mu_pat2Set.print();
  mu_pat3Set.print();
  mu_pat4Set.print();
  mu_pat5Set.print();
  mu_pat6Set.print();
  mu_pat7Set.print();
  mu_pat8Set.print();
  mu_msg_end.print();
  mu_ded_end.print();
  mu_eve_end.print();
  mu_Spy_known.print();
  mu_emit.print();
  mu_msg.print();
  mu_eve.print();
  mu_endn.print();
  mu_end1.print();
  mu_end2.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print_statistic();
  mu_alices.print_statistic();
  mu_bobs.print_statistic();
  mu_intruder.print_statistic();
  mu_msgs.print_statistic();
  mu_pat1Set.print_statistic();
  mu_pat2Set.print_statistic();
  mu_pat3Set.print_statistic();
  mu_pat4Set.print_statistic();
  mu_pat5Set.print_statistic();
  mu_pat6Set.print_statistic();
  mu_pat7Set.print_statistic();
  mu_pat8Set.print_statistic();
  mu_msg_end.print_statistic();
  mu_ded_end.print_statistic();
  mu_eve_end.print_statistic();
  mu_Spy_known.print_statistic();
  mu_emit.print_statistic();
  mu_msg.print_statistic();
  mu_eve.print_statistic();
  mu_endn.print_statistic();
  mu_end1.print_statistic();
  mu_end2.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_ch.print_diff(prevstate);
    mu_alices.print_diff(prevstate);
    mu_bobs.print_diff(prevstate);
    mu_intruder.print_diff(prevstate);
    mu_msgs.print_diff(prevstate);
    mu_pat1Set.print_diff(prevstate);
    mu_pat2Set.print_diff(prevstate);
    mu_pat3Set.print_diff(prevstate);
    mu_pat4Set.print_diff(prevstate);
    mu_pat5Set.print_diff(prevstate);
    mu_pat6Set.print_diff(prevstate);
    mu_pat7Set.print_diff(prevstate);
    mu_pat8Set.print_diff(prevstate);
    mu_msg_end.print_diff(prevstate);
    mu_ded_end.print_diff(prevstate);
    mu_eve_end.print_diff(prevstate);
    mu_Spy_known.print_diff(prevstate);
    mu_emit.print_diff(prevstate);
    mu_msg.print_diff(prevstate);
    mu_eve.print_diff(prevstate);
    mu_endn.print_diff(prevstate);
    mu_end1.print_diff(prevstate);
    mu_end2.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_ch.to_state( newstate );
  mu_alices.to_state( newstate );
  mu_bobs.to_state( newstate );
  mu_intruder.to_state( newstate );
  mu_msgs.to_state( newstate );
  mu_pat1Set.to_state( newstate );
  mu_pat2Set.to_state( newstate );
  mu_pat3Set.to_state( newstate );
  mu_pat4Set.to_state( newstate );
  mu_pat5Set.to_state( newstate );
  mu_pat6Set.to_state( newstate );
  mu_pat7Set.to_state( newstate );
  mu_pat8Set.to_state( newstate );
  mu_msg_end.to_state( newstate );
  mu_ded_end.to_state( newstate );
  mu_eve_end.to_state( newstate );
  mu_Spy_known.to_state( newstate );
  mu_emit.to_state( newstate );
  mu_msg.to_state( newstate );
  mu_eve.to_state( newstate );
  mu_endn.to_state( newstate );
  mu_end1.to_state( newstate );
  mu_end2.to_state( newstate );
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
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg3, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr40;
bool mu__boolexpr41;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr40;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 21 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr42;
bool mu__boolexpr43;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_i) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr42) {
		if ( ( TRUE  ) )
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
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr44;
  if (!((mu_emit[mu_pat8Set.mu_content[mu_i]]) == (mu_false))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_msgs[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_intruder.mu_B)) ; 
}
if ( mu__boolexpr44 )
{
mu_ch[3].clear();
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msgs[mu_pat8Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_intruderType;
mu_ch[3].mu_receiver = mu_bobs[mu_j].mu_B;
mu_emit[mu_pat8Set.mu_content[mu_i]] = mu_true;
mu_intruder.mu_st = mu_emitted3;
cout << "3. I->B\n";
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
    static mu_1_aliceNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg2, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_aliceNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr45;
bool mu__boolexpr46;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr45;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 21;
    static mu_1_aliceNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 42 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr47;
bool mu__boolexpr48;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_i) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
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
    r = what_rule - 21;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_aliceNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr49;
  if (!((mu_emit[mu_pat7Set.mu_content[mu_i]]) == (mu_false))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_alices[mu_i].mu_A)) ; 
}
if ( mu__boolexpr49 )
{
mu_ch[2].clear();
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msgs[mu_pat7Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_intruderType;
mu_ch[2].mu_receiver = mu_alices[mu_j].mu_A;
mu_emit[mu_pat7Set.mu_content[mu_i]] = mu_true;
mu_intruder.mu_st = mu_emitted2;
cout << "2. I->A\n";
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
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("intruderEmitMsg1, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr50;
bool mu__boolexpr51;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr50;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 42;
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 63 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr52;
bool mu__boolexpr53;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_i) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr52) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 42;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr54;
  if (!(!(mu_emit[mu_pat5Set.mu_content[mu_i]]))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_msgs[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencKey].mu_k.mu_ag) == (mu_intruder.mu_B)) ; 
}
if ( mu__boolexpr54 )
{
mu_ch[1].clear();
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msgs[mu_pat5Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_intruderType;
mu_ch[1].mu_receiver = mu_bobs[mu_j].mu_B;
mu_emit[mu_pat5Set.mu_content[mu_i]] = mu_true;
mu_intruder.mu_st = mu_emitted1;
cout << "1. I->B\n";
mu_printMsg ( mu_ch[1].mu_msg );
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
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("enconcat6, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
bool mu__boolexpr59;
  if (!((mu_i) < (mu_pat1Set.mu_length))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_j) < (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = (mu_Spy_known[mu_pat1Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_i) != (mu_j)) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (!(mu_Spy_known[mu_construct6By11( mu_pat1Set.mu_content[mu_i], mu_pat1Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr55;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 63;
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 504 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
  if (!((mu_i) < (mu_pat1Set.mu_length))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_j) < (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_Spy_known[mu_pat1Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_i) != (mu_j)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (!(mu_Spy_known[mu_construct6By11( mu_pat1Set.mu_content[mu_i], mu_pat1Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr60) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 63;
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
mu_1_indexType mu_concatMsg("concatMsg",0);

mu_concatMsg = mu_construct6By11( mu_pat1Set.mu_content[mu_i], mu_pat1Set.mu_content[mu_j] );
mu_Spy_known[mu_concatMsg] = mu_true;
if ( !(mu_exist( mu_pat6Set, mu_concatMsg )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_concatMsg.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_concatMsg;
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
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("deconcat6, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
bool mu__boolexpr67;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr65 = (!(mu__boolexpr67)) ; 
}
    return mu__boolexpr65;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 504;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 525 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr68;
bool mu__boolexpr69;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
bool mu__boolexpr70;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr68 = (!(mu__boolexpr70)) ; 
}
	      if (mu__boolexpr68) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 504;
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
mu_1_indexType mu_msgPa1_1("msgPa1_1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPa1_2("msgPa1_2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1_1("flag_pat1_1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1_2("flag_pat1_2",24);

if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart1]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart1] = mu_true;
mu_msgPa1_1 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart1;
mu_isPat1 ( mu_msgs[mu_msgPa1_1], mu_flag_pat1_1 );
if ( mu_flag_pat1_1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPa1_1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPa1_1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPa1_1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart2]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart2] = mu_true;
mu_msgPa1_2 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart2;
mu_isPat1 ( mu_msgs[mu_msgPa1_2], mu_flag_pat1_2 );
if ( mu_flag_pat1_2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPa1_2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPa1_2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPa1_2;
}
}
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
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("enconcat3, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr71;
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
  if (!((mu_i) <= (mu_pat1Set.mu_length))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_j) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (!(mu_Spy_known[mu_construct3By12( mu_pat1Set.mu_content[mu_i], mu_pat2Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr71;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 525;
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 966 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr75;
bool mu__boolexpr76;
bool mu__boolexpr77;
bool mu__boolexpr78;
  if (!((mu_i) <= (mu_pat1Set.mu_length))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_j) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (!(mu_Spy_known[mu_construct3By12( mu_pat1Set.mu_content[mu_i], mu_pat2Set.mu_content[mu_j] )])) ; 
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
    r = what_rule - 525;
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
mu_1_indexType mu_concatMsg("concatMsg",0);

mu_concatMsg = mu_construct3By12( mu_pat1Set.mu_content[mu_i], mu_pat2Set.mu_content[mu_j] );
mu_Spy_known[mu_concatMsg] = mu_true;
if ( !(mu_exist( mu_pat3Set, mu_concatMsg )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_concatMsg.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_concatMsg;
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
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("deconcat3, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr79;
bool mu__boolexpr80;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
bool mu__boolexpr81;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart2]) ; 
}
  mu__boolexpr79 = (!(mu__boolexpr81)) ; 
}
    return mu__boolexpr79;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 966;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 987 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
bool mu__boolexpr84;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart1])) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart2]) ; 
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
    r = what_rule - 966;
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
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("encrypty8, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
bool mu__boolexpr88;
  if (!((mu_i) <= (mu_pat1Set.mu_length))) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (!(mu_Spy_known[mu_construct8By14( mu_pat1Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr85;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 987;
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 1428 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!((mu_i) <= (mu_pat1Set.mu_length))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (!(mu_Spy_known[mu_construct8By14( mu_pat1Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
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
    r = what_rule - 987;
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

/*** Variable declaration ***/
mu_1_Message mu_encMsg("encMsg",8);

if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_ag) == (mu_intruder.mu_B) )
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
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("decrypty8, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr93;
bool mu__boolexpr94;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr93;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1428;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 1449 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr95;
bool mu__boolexpr96;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr95) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1428;
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
mu_1_indexType mu_msgPat1("msgPat1",88);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",96);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_intruderType) )
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
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("encrypty7, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (!(mu_Spy_known[mu_construct7By64( mu_pat6Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr97;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1449;
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 1890 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (!(mu_Spy_known[mu_construct7By64( mu_pat6Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
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
    r = what_rule - 1449;
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

/*** Variable declaration ***/
mu_1_Message mu_encMsg("encMsg",8);

if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_ag) == (mu_intruder.mu_B) )
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
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("decrypty7, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr105;
bool mu__boolexpr106;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr105;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1890;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 1911 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr107;
bool mu__boolexpr108;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr107) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1890;
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
mu_1_indexType mu_msgPat6("msgPat6",88);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",96);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_intruderType) )
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
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("encrypty5, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (!(mu_Spy_known[mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr109;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1911;
    static mu_1_indexType mu_j;
    mu_j.value((r % 21) + 0);
    r = r / 21;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 2352 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
bool mu__boolexpr116;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (!(mu_Spy_known[mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr113) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1911;
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

/*** Variable declaration ***/
mu_1_Message mu_encMsg("encMsg",8);

if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_ag) == (mu_intruder.mu_B) )
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
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    return tsprintf("decrypty5, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
bool mu__boolexpr117;
bool mu__boolexpr118;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr117;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2352;
    static mu_1_indexType mu_i;
    mu_i.value((r % 21) + 0);
    r = r / 21;
    while (what_rule < 2373 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr119;
bool mu__boolexpr120;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr119) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2352;
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
mu_1_indexType mu_msgPat3("msgPat3",88);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",96);

mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_intruderType) )
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
    return tsprintf("intruderGetMsg3");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr121;
  if (!((mu_ch[3].mu_empty) == (mu_false))) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_ch[3].mu_receiver) == (mu_intruderType)) ; 
}
    return mu__boolexpr121;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2373;
    while (what_rule < 2374 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr122;
  if (!((mu_ch[3].mu_empty) == (mu_false))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_ch[3].mu_receiver) == (mu_intruderType)) ; 
}
	      if (mu__boolexpr122) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2373;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat8("flag_pat8",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

mu_msg.clear();
mu_msgNo.clear();
mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat8 ( mu_msg, mu_flag_pat8 );
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_ch[3].mu_empty = mu_true;
mu_intruder.mu_st = mu_gotmsg3;
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
    return tsprintf("intruderGetMsg2");
  }
  bool Condition(unsigned r)
  {
    return (mu_ch[2].mu_empty) == (mu_false);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2374;
    while (what_rule < 2375 )
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
    r = what_rule - 2374;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

mu_msg.clear();
mu_msgNo.clear();
mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
mu_isPat7 ( mu_msg, mu_flag_pat7 );
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
mu_ch[2].mu_empty = mu_true;
mu_intruder.mu_st = mu_gotmsg2;
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
    return tsprintf("intruderGetMsg1");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr123;
  if (!((mu_ch[1].mu_empty) == (mu_false))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_ch[1].mu_receiver) == (mu_intruderType)) ; 
}
    return mu__boolexpr123;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2375;
    while (what_rule < 2376 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr124;
  if (!((mu_ch[1].mu_empty) == (mu_false))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_ch[1].mu_receiver) == (mu_intruderType)) ; 
}
	      if (mu__boolexpr124) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2375;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat5("flag_pat5",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

mu_msg.clear();
mu_msgNo.clear();
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
}
mu_ch[1].mu_empty = mu_true;
mu_intruder.mu_st = mu_gotmsg1;
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
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleB3, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return (mu_bobs[mu_i].mu_st) == (mu_B3);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2376;
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 2377 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_bobs[mu_i].mu_st) == (mu_B3)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2376;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
mu_bobs[mu_i].mu_st = mu_B1;
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
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleB2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr125;
bool mu__boolexpr126;
  if (!((mu_bobs[mu_i].mu_st) == (mu_B2))) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_ch[3].mu_receiver) == (mu_bobs[mu_i].mu_B)) ; 
}
    return mu__boolexpr125;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2377;
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 2378 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr127;
bool mu__boolexpr128;
  if (!((mu_bobs[mu_i].mu_st) == (mu_B2))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_ch[3].mu_receiver) == (mu_bobs[mu_i].mu_B)) ; 
}
	      if (mu__boolexpr127) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2377;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_AgentType mu_loc_B("loc_B",0);

/*** Variable declaration ***/
mu_1_NonceType mu_loc_Nb("loc_Nb",8);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_destruct3 ( mu_msg, mu_loc_Nb, mu_loc_B );
bool mu__boolexpr129;
  if (!((mu_loc_B) == (mu_bobs[mu_i].mu_B))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_loc_Nb) == (mu_bobs[mu_i].mu_Nb)) ; 
}
if ( mu__boolexpr129 )
{
mu_bobs[mu_i].mu_st = mu_B3;
mu_printMsg ( mu_msg );
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
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleB1, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr130;
bool mu__boolexpr131;
  if (!((mu_bobs[mu_i].mu_st) == (mu_B1))) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_ch[1].mu_receiver) == (mu_bobs[mu_i].mu_B)) ; 
}
    return mu__boolexpr130;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2378;
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 2379 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!((mu_bobs[mu_i].mu_st) == (mu_B1))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_ch[1].mu_receiver) == (mu_bobs[mu_i].mu_B)) ; 
}
	      if (mu__boolexpr132) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2378;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_bobNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_AgentType mu_loc_A("loc_A",0);

/*** Variable declaration ***/
mu_1_AgentType mu_loc_B("loc_B",8);

/*** Variable declaration ***/
mu_1_NonceType mu_loc_Na("loc_Na",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo1("msgNo1",24);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_destruct1 ( mu_msg, mu_loc_Na, mu_loc_A, mu_loc_B );
if ( (mu_loc_B) == (mu_bobs[mu_i].mu_B) )
{
mu_ch[1].mu_empty = mu_true;
mu_cons2 ( mu_loc_Na, mu_bobs[mu_i].mu_Nb, mu_loc_A, mu_msg, mu_msgNo1 );
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_empty = mu_false;
mu_bobs[mu_i].mu_st = mu_B2;
if (mu_loc_A.isundefined())
  mu_ch[2].mu_receiver.undefine();
else
  mu_ch[2].mu_receiver = mu_loc_A;
mu_ch[2].mu_sender = mu_bobs[mu_i].mu_B;
cout << "2. B -> I\n";
mu_printMsg ( mu_ch[2].mu_msg );
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
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleA3, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return (mu_alices[mu_i].mu_st) == (mu_A3);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2379;
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 2380 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_alices[mu_i].mu_st) == (mu_A3)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2379;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
mu_alices[mu_i].mu_st = mu_A1;
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
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleA2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!((mu_alices[mu_i].mu_st) == (mu_A2))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_intruder.mu_st) == (mu_emitted2)) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_ch[2].mu_receiver) == (mu_alices[mu_i].mu_A)) ; 
}
    return mu__boolexpr134;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2380;
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 2381 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
  if (!((mu_alices[mu_i].mu_st) == (mu_A2))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_intruder.mu_st) == (mu_emitted2)) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_ch[2].mu_receiver) == (mu_alices[mu_i].mu_A)) ; 
}
	      if (mu__boolexpr137) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2380;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_AgentType mu_loc_A("loc_A",0);

/*** Variable declaration ***/
mu_1_AgentType mu_loc_B("loc_B",8);

/*** Variable declaration ***/
mu_1_NonceType mu_loc_Na("loc_Na",16);

/*** Variable declaration ***/
mu_1_NonceType mu_loc_Nb("loc_Nb",24);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",32);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_destruct2 ( mu_msg, mu_loc_Na, mu_loc_Nb, mu_loc_A );
bool mu__boolexpr140;
  if (!((mu_loc_A) == (mu_alices[mu_i].mu_A))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_loc_Na) == (mu_alices[mu_i].mu_Na)) ; 
}
if ( mu__boolexpr140 )
{
mu_ch[2].mu_empty = mu_true;
mu_cons3 ( mu_loc_Nb, mu_alices[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[3].mu_msg = mu_msg;
mu_alices[mu_i].mu_st = mu_A3;
mu_ch[3].mu_receiver = mu_intruderType;
mu_ch[3].mu_sender = mu_alices[mu_i].mu_A;
mu_ch[3].mu_empty = mu_false;
cout << "3. A -> I\n";
mu_printMsg ( mu_ch[3].mu_msg );
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
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("roleA1, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr141;
  if (!((mu_alices[mu_i].mu_st) == (mu_A1))) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
    return mu__boolexpr141;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2381;
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 2382 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr142;
  if (!((mu_alices[mu_i].mu_st) == (mu_A1))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
	      if (mu__boolexpr142) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2381;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_aliceNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",88);

mu_msg.clear();
mu_cons1 ( mu_alices[mu_i].mu_Na, mu_alices[mu_i].mu_A, mu_alices[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_alices[mu_i].mu_A;
mu_ch[1].mu_receiver = mu_intruderType;
mu_alices[mu_i].mu_st = mu_A2;
cout << "1. A -> I\n";
mu_printMsg ( mu_ch[1].mu_msg );
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
  if (what_rule<21)
    { R0.NextRule(what_rule);
      if (what_rule<21) return; }
  if (what_rule>=21 && what_rule<42)
    { R1.NextRule(what_rule);
      if (what_rule<42) return; }
  if (what_rule>=42 && what_rule<63)
    { R2.NextRule(what_rule);
      if (what_rule<63) return; }
  if (what_rule>=63 && what_rule<504)
    { R3.NextRule(what_rule);
      if (what_rule<504) return; }
  if (what_rule>=504 && what_rule<525)
    { R4.NextRule(what_rule);
      if (what_rule<525) return; }
  if (what_rule>=525 && what_rule<966)
    { R5.NextRule(what_rule);
      if (what_rule<966) return; }
  if (what_rule>=966 && what_rule<987)
    { R6.NextRule(what_rule);
      if (what_rule<987) return; }
  if (what_rule>=987 && what_rule<1428)
    { R7.NextRule(what_rule);
      if (what_rule<1428) return; }
  if (what_rule>=1428 && what_rule<1449)
    { R8.NextRule(what_rule);
      if (what_rule<1449) return; }
  if (what_rule>=1449 && what_rule<1890)
    { R9.NextRule(what_rule);
      if (what_rule<1890) return; }
  if (what_rule>=1890 && what_rule<1911)
    { R10.NextRule(what_rule);
      if (what_rule<1911) return; }
  if (what_rule>=1911 && what_rule<2352)
    { R11.NextRule(what_rule);
      if (what_rule<2352) return; }
  if (what_rule>=2352 && what_rule<2373)
    { R12.NextRule(what_rule);
      if (what_rule<2373) return; }
  if (what_rule>=2373 && what_rule<2374)
    { R13.NextRule(what_rule);
      if (what_rule<2374) return; }
  if (what_rule>=2374 && what_rule<2375)
    { R14.NextRule(what_rule);
      if (what_rule<2375) return; }
  if (what_rule>=2375 && what_rule<2376)
    { R15.NextRule(what_rule);
      if (what_rule<2376) return; }
  if (what_rule>=2376 && what_rule<2377)
    { R16.NextRule(what_rule);
      if (what_rule<2377) return; }
  if (what_rule>=2377 && what_rule<2378)
    { R17.NextRule(what_rule);
      if (what_rule<2378) return; }
  if (what_rule>=2378 && what_rule<2379)
    { R18.NextRule(what_rule);
      if (what_rule<2379) return; }
  if (what_rule>=2379 && what_rule<2380)
    { R19.NextRule(what_rule);
      if (what_rule<2380) return; }
  if (what_rule>=2380 && what_rule<2381)
    { R20.NextRule(what_rule);
      if (what_rule<2381) return; }
  if (what_rule>=2381 && what_rule<2382)
    { R21.NextRule(what_rule);
      if (what_rule<2382) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=20) return R0.Condition(r-0);
  if (r>=21 && r<=41) return R1.Condition(r-21);
  if (r>=42 && r<=62) return R2.Condition(r-42);
  if (r>=63 && r<=503) return R3.Condition(r-63);
  if (r>=504 && r<=524) return R4.Condition(r-504);
  if (r>=525 && r<=965) return R5.Condition(r-525);
  if (r>=966 && r<=986) return R6.Condition(r-966);
  if (r>=987 && r<=1427) return R7.Condition(r-987);
  if (r>=1428 && r<=1448) return R8.Condition(r-1428);
  if (r>=1449 && r<=1889) return R9.Condition(r-1449);
  if (r>=1890 && r<=1910) return R10.Condition(r-1890);
  if (r>=1911 && r<=2351) return R11.Condition(r-1911);
  if (r>=2352 && r<=2372) return R12.Condition(r-2352);
  if (r>=2373 && r<=2373) return R13.Condition(r-2373);
  if (r>=2374 && r<=2374) return R14.Condition(r-2374);
  if (r>=2375 && r<=2375) return R15.Condition(r-2375);
  if (r>=2376 && r<=2376) return R16.Condition(r-2376);
  if (r>=2377 && r<=2377) return R17.Condition(r-2377);
  if (r>=2378 && r<=2378) return R18.Condition(r-2378);
  if (r>=2379 && r<=2379) return R19.Condition(r-2379);
  if (r>=2380 && r<=2380) return R20.Condition(r-2380);
  if (r>=2381 && r<=2381) return R21.Condition(r-2381);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=20) { R0.Code(r-0); return; } 
  if (r>=21 && r<=41) { R1.Code(r-21); return; } 
  if (r>=42 && r<=62) { R2.Code(r-42); return; } 
  if (r>=63 && r<=503) { R3.Code(r-63); return; } 
  if (r>=504 && r<=524) { R4.Code(r-504); return; } 
  if (r>=525 && r<=965) { R5.Code(r-525); return; } 
  if (r>=966 && r<=986) { R6.Code(r-966); return; } 
  if (r>=987 && r<=1427) { R7.Code(r-987); return; } 
  if (r>=1428 && r<=1448) { R8.Code(r-1428); return; } 
  if (r>=1449 && r<=1889) { R9.Code(r-1449); return; } 
  if (r>=1890 && r<=1910) { R10.Code(r-1890); return; } 
  if (r>=1911 && r<=2351) { R11.Code(r-1911); return; } 
  if (r>=2352 && r<=2372) { R12.Code(r-2352); return; } 
  if (r>=2373 && r<=2373) { R13.Code(r-2373); return; } 
  if (r>=2374 && r<=2374) { R14.Code(r-2374); return; } 
  if (r>=2375 && r<=2375) { R15.Code(r-2375); return; } 
  if (r>=2376 && r<=2376) { R16.Code(r-2376); return; } 
  if (r>=2377 && r<=2377) { R17.Code(r-2377); return; } 
  if (r>=2378 && r<=2378) { R18.Code(r-2378); return; } 
  if (r>=2379 && r<=2379) { R19.Code(r-2379); return; } 
  if (r>=2380 && r<=2380) { R20.Code(r-2380); return; } 
  if (r>=2381 && r<=2381) { R21.Code(r-2381); return; } 
}
int Priority(unsigned short r)
{
  if (r<=20) { return R0.Priority(); } 
  if (r>=21 && r<=41) { return R1.Priority(); } 
  if (r>=42 && r<=62) { return R2.Priority(); } 
  if (r>=63 && r<=503) { return R3.Priority(); } 
  if (r>=504 && r<=524) { return R4.Priority(); } 
  if (r>=525 && r<=965) { return R5.Priority(); } 
  if (r>=966 && r<=986) { return R6.Priority(); } 
  if (r>=987 && r<=1427) { return R7.Priority(); } 
  if (r>=1428 && r<=1448) { return R8.Priority(); } 
  if (r>=1449 && r<=1889) { return R9.Priority(); } 
  if (r>=1890 && r<=1910) { return R10.Priority(); } 
  if (r>=1911 && r<=2351) { return R11.Priority(); } 
  if (r>=2352 && r<=2372) { return R12.Priority(); } 
  if (r>=2373 && r<=2373) { return R13.Priority(); } 
  if (r>=2374 && r<=2374) { return R14.Priority(); } 
  if (r>=2375 && r<=2375) { return R15.Priority(); } 
  if (r>=2376 && r<=2376) { return R16.Priority(); } 
  if (r>=2377 && r<=2377) { return R17.Priority(); } 
  if (r>=2378 && r<=2378) { return R18.Priority(); } 
  if (r>=2379 && r<=2379) { return R19.Priority(); } 
  if (r>=2380 && r<=2380) { return R20.Priority(); } 
  if (r>=2381 && r<=2381) { return R21.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=20) return R0.Name(r-0);
  if (r>=21 && r<=41) return R1.Name(r-21);
  if (r>=42 && r<=62) return R2.Name(r-42);
  if (r>=63 && r<=503) return R3.Name(r-63);
  if (r>=504 && r<=524) return R4.Name(r-504);
  if (r>=525 && r<=965) return R5.Name(r-525);
  if (r>=966 && r<=986) return R6.Name(r-966);
  if (r>=987 && r<=1427) return R7.Name(r-987);
  if (r>=1428 && r<=1448) return R8.Name(r-1428);
  if (r>=1449 && r<=1889) return R9.Name(r-1449);
  if (r>=1890 && r<=1910) return R10.Name(r-1890);
  if (r>=1911 && r<=2351) return R11.Name(r-1911);
  if (r>=2352 && r<=2372) return R12.Name(r-2352);
  if (r>=2373 && r<=2373) return R13.Name(r-2373);
  if (r>=2374 && r<=2374) return R14.Name(r-2374);
  if (r>=2375 && r<=2375) return R15.Name(r-2375);
  if (r>=2376 && r<=2376) return R16.Name(r-2376);
  if (r>=2377 && r<=2377) return R17.Name(r-2377);
  if (r>=2378 && r<=2378) return R18.Name(r-2378);
  if (r>=2379 && r<=2379) return R19.Name(r-2379);
  if (r>=2380 && r<=2380) return R20.Name(r-2380);
  if (r>=2381 && r<=2381) return R21.Name(r-2381);
  return NULL;
}
};
const unsigned numrules = 2382;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 2382


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
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_alices[mu_i].mu_st = mu_A1;
mu_alices[mu_i].mu_B = mu_intruderType;
};
};
mu_alices[1].mu_Na = mu_Na;
mu_alices[1].mu_A = mu_Alice;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_bobs[mu_i].mu_st = mu_B1;
};
};
mu_bobs[1].mu_B = mu_Bob;
mu_bobs[1].mu_Nb = mu_Nb;
mu_intruder.mu_st = mu_wait;
mu_intruder.mu_B = mu_Bob;
{
for(int mu_i = 1; mu_i <= 3; mu_i++) {
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
mu_pat8Set.mu_content[mu_i] = 0;
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
for(int mu_i = 0; mu_i <= 20; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_intruderType;
mu_msgs[mu_msg_end].mu_k.mu_encTyp = mu_SK;
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_Bob;
mu_msgs[mu_msg_end].mu_k.mu_encTyp = mu_PK;
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
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
int mu__invariant_143() // Invariant "sec"
{
bool mu__quant144; 
mu__quant144 = TRUE;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
bool mu__boolexpr145;
bool mu__boolexpr146;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_msgs[mu_i].mu_noncePart) == (mu_Nb)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = TRUE ;
  else {
  mu__boolexpr145 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr145) )
  { mu__quant144 = FALSE; break; }
};
};
return mu__quant144;
};

bool mu__condition_147() // Condition for Rule "sec"
{
  return mu__invariant_143( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"sec", &mu__condition_147, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
end1:NoScalarset
eve:NoScalarset
emit:NoScalarset
Spy_known:NoScalarset
eve_end:NoScalarset
msg_end:NoScalarset
pat7Set:NoScalarset
pat5Set:NoScalarset
pat3Set:NoScalarset
pat1Set:NoScalarset
bobs:NoScalarset
alices:NoScalarset
ch:NoScalarset
intruder:NoScalarset
msgs:NoScalarset
pat2Set:NoScalarset
pat4Set:NoScalarset
pat6Set:NoScalarset
pat8Set:NoScalarset
ded_end:NoScalarset
msg:NoScalarset
endn:NoScalarset
end2:NoScalarset
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
        mu_end1.MultisetSort();
        mu_eve.MultisetSort();
        mu_emit.MultisetSort();
        mu_Spy_known.MultisetSort();
        mu_eve_end.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_pat7Set.MultisetSort();
        mu_pat5Set.MultisetSort();
        mu_pat3Set.MultisetSort();
        mu_pat1Set.MultisetSort();
        mu_bobs.MultisetSort();
        mu_alices.MultisetSort();
        mu_ch.MultisetSort();
        mu_intruder.MultisetSort();
        mu_msgs.MultisetSort();
        mu_pat2Set.MultisetSort();
        mu_pat4Set.MultisetSort();
        mu_pat6Set.MultisetSort();
        mu_pat8Set.MultisetSort();
        mu_ded_end.MultisetSort();
        mu_msg.MultisetSort();
        mu_endn.MultisetSort();
        mu_end2.MultisetSort();
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
void mu_1_aliceNums::Permute(PermSet& Perm, int i) {};
void mu_1_aliceNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_aliceNums::Canonicalize(PermSet& Perm) {};
void mu_1_aliceNums::SimpleLimit(PermSet& Perm) {};
void mu_1_aliceNums::ArrayLimit(PermSet& Perm) {};
void mu_1_aliceNums::Limit(PermSet& Perm) {};
void mu_1_aliceNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_bobNums::Permute(PermSet& Perm, int i) {};
void mu_1_bobNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_bobNums::Canonicalize(PermSet& Perm) {};
void mu_1_bobNums::SimpleLimit(PermSet& Perm) {};
void mu_1_bobNums::ArrayLimit(PermSet& Perm) {};
void mu_1_bobNums::Limit(PermSet& Perm) {};
void mu_1_bobNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msgLen::Permute(PermSet& Perm, int i) {};
void mu_1_msgLen::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msgLen::Canonicalize(PermSet& Perm) {};
void mu_1_msgLen::SimpleLimit(PermSet& Perm) {};
void mu_1_msgLen::ArrayLimit(PermSet& Perm) {};
void mu_1_msgLen::Limit(PermSet& Perm) {};
void mu_1_msgLen::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_DeductionsNums::Permute(PermSet& Perm, int i) {};
void mu_1_DeductionsNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_DeductionsNums::Canonicalize(PermSet& Perm) {};
void mu_1_DeductionsNums::SimpleLimit(PermSet& Perm) {};
void mu_1_DeductionsNums::ArrayLimit(PermSet& Perm) {};
void mu_1_DeductionsNums::Limit(PermSet& Perm) {};
void mu_1_DeductionsNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msgpassingNums::Permute(PermSet& Perm, int i) {};
void mu_1_msgpassingNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msgpassingNums::Canonicalize(PermSet& Perm) {};
void mu_1_msgpassingNums::SimpleLimit(PermSet& Perm) {};
void mu_1_msgpassingNums::ArrayLimit(PermSet& Perm) {};
void mu_1_msgpassingNums::Limit(PermSet& Perm) {};
void mu_1_msgpassingNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_eventNums::Permute(PermSet& Perm, int i) {};
void mu_1_eventNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_eventNums::Canonicalize(PermSet& Perm) {};
void mu_1_eventNums::SimpleLimit(PermSet& Perm) {};
void mu_1_eventNums::ArrayLimit(PermSet& Perm) {};
void mu_1_eventNums::Limit(PermSet& Perm) {};
void mu_1_eventNums::MultisetLimit(PermSet& Perm)
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
void mu_1_AliceStatus::Permute(PermSet& Perm, int i) {};
void mu_1_AliceStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AliceStatus::Canonicalize(PermSet& Perm) {};
void mu_1_AliceStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_AliceStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_AliceStatus::Limit(PermSet& Perm) {};
void mu_1_AliceStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_BobStatus::Permute(PermSet& Perm, int i) {};
void mu_1_BobStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_BobStatus::Canonicalize(PermSet& Perm) {};
void mu_1_BobStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_BobStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_BobStatus::Limit(PermSet& Perm) {};
void mu_1_BobStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_IntruderStatus::Permute(PermSet& Perm, int i) {};
void mu_1_IntruderStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_IntruderStatus::Canonicalize(PermSet& Perm) {};
void mu_1_IntruderStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_IntruderStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_IntruderStatus::Limit(PermSet& Perm) {};
void mu_1_IntruderStatus::MultisetLimit(PermSet& Perm)
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
void mu_1_DeduceType::Permute(PermSet& Perm, int i) {};
void mu_1_DeduceType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_DeduceType::Canonicalize(PermSet& Perm) {};
void mu_1_DeduceType::SimpleLimit(PermSet& Perm) {};
void mu_1_DeduceType::ArrayLimit(PermSet& Perm) {};
void mu_1_DeduceType::Limit(PermSet& Perm) {};
void mu_1_DeduceType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_TDeduction::Permute(PermSet& Perm, int i)
{
};
void mu_1_TDeduction::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_TDeduction::Canonicalize(PermSet& Perm)
{
};
void mu_1_TDeduction::SimpleLimit(PermSet& Perm){}
void mu_1_TDeduction::ArrayLimit(PermSet& Perm){}
void mu_1_TDeduction::Limit(PermSet& Perm)
{
};
void mu_1_TDeduction::MultisetLimit(PermSet& Perm)
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
void mu_1_RoleInit::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleInit::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleInit::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleInit::SimpleLimit(PermSet& Perm){}
void mu_1_RoleInit::ArrayLimit(PermSet& Perm){}
void mu_1_RoleInit::Limit(PermSet& Perm)
{
};
void mu_1_RoleInit::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleResp::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleResp::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleResp::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleResp::SimpleLimit(PermSet& Perm){}
void mu_1_RoleResp::ArrayLimit(PermSet& Perm){}
void mu_1_RoleResp::Limit(PermSet& Perm)
{
};
void mu_1_RoleResp::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleIntruder::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleIntruder::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleIntruder::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleIntruder::SimpleLimit(PermSet& Perm){}
void mu_1_RoleIntruder::ArrayLimit(PermSet& Perm){}
void mu_1_RoleIntruder::Limit(PermSet& Perm)
{
};
void mu_1_RoleIntruder::MultisetLimit(PermSet& Perm)
{
};
void mu_1_Event::Permute(PermSet& Perm, int i)
{
};
void mu_1_Event::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Event::Canonicalize(PermSet& Perm)
{
};
void mu_1_Event::SimpleLimit(PermSet& Perm){}
void mu_1_Event::ArrayLimit(PermSet& Perm){}
void mu_1_Event::Limit(PermSet& Perm)
{
};
void mu_1_Event::MultisetLimit(PermSet& Perm)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<21; j++)
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
              
              mu_end1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_end1.MultisetSort();
              mu_eve.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_eve.MultisetSort();
              mu_emit.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_eve_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_eve_end.MultisetSort();
              mu_msg_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
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
              mu_bobs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_bobs.MultisetSort();
              mu_alices.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_alices.MultisetSort();
              mu_ch.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_intruder.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_intruder.MultisetSort();
              mu_msgs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
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
              mu_ded_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ded_end.MultisetSort();
              mu_msg.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg.MultisetSort();
              mu_endn.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_endn.MultisetSort();
              mu_end2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_end2.MultisetSort();
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

          mu_end1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_end1.MultisetSort();
          mu_eve.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_eve.MultisetSort();
          mu_emit.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_emit.MultisetSort();
          mu_Spy_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Spy_known.MultisetSort();
          mu_eve_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_eve_end.MultisetSort();
          mu_msg_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg_end.MultisetSort();
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
          mu_bobs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_bobs.MultisetSort();
          mu_alices.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_alices.MultisetSort();
          mu_ch.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ch.MultisetSort();
          mu_intruder.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_intruder.MultisetSort();
          mu_msgs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msgs.MultisetSort();
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
          mu_ded_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ded_end.MultisetSort();
          mu_msg.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg.MultisetSort();
          mu_endn.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_endn.MultisetSort();
          mu_end2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_end2.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_end1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_end1.MultisetSort();
              mu_eve.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_eve.MultisetSort();
              mu_emit.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_eve_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_eve_end.MultisetSort();
              mu_msg_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
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
              mu_bobs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_bobs.MultisetSort();
              mu_alices.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_alices.MultisetSort();
              mu_ch.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_intruder.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_intruder.MultisetSort();
              mu_msgs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
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
              mu_ded_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ded_end.MultisetSort();
              mu_msg.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg.MultisetSort();
              mu_endn.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_endn.MultisetSort();
              mu_end2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_end2.MultisetSort();
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
      mu_end1.MultisetSort();
      mu_eve.MultisetSort();
      mu_emit.MultisetSort();
      mu_Spy_known.MultisetSort();
      mu_eve_end.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_pat7Set.MultisetSort();
      mu_pat5Set.MultisetSort();
      mu_pat3Set.MultisetSort();
      mu_pat1Set.MultisetSort();
      mu_bobs.MultisetSort();
      mu_alices.MultisetSort();
      mu_ch.MultisetSort();
      mu_intruder.MultisetSort();
      mu_msgs.MultisetSort();
      mu_pat2Set.MultisetSort();
      mu_pat4Set.MultisetSort();
      mu_pat6Set.MultisetSort();
      mu_pat8Set.MultisetSort();
      mu_ded_end.MultisetSort();
      mu_msg.MultisetSort();
      mu_endn.MultisetSort();
      mu_end2.MultisetSort();
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
        mu_end1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_end1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_eve.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_eve.MultisetSort();
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
        mu_eve_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_eve_end.MultisetSort();
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
        mu_bobs.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_bobs.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_alices.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_alices.MultisetSort();
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
        mu_intruder.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_intruder.MultisetSort();
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
        mu_ded_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ded_end.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msg.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msg.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_endn.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_endn.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_end2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_end2.MultisetSort();
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
