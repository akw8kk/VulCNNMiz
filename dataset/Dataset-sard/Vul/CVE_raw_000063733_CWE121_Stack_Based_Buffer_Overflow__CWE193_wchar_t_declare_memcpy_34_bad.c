void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memcpy_34_unionType VAR2;
    wchar_t VAR3[10];
    wchar_t VAR4[10+1];
    
    VAR1 = VAR3;
    VAR1[0] = VAR5''; 
    VAR2.VAR6 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR7;
        {
            wchar_t VAR8[10+1] = VAR9;
            
            
            memcpy(VAR1, VAR8, (wcslen(VAR8) + 1) * sizeof(wchar_t));
            FUN2(VAR1);
        }
    }
}