static void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_memcpy_34_unionType VAR2;
    wchar_t VAR3[100];
    VAR1 = VAR3;
    
    wmemset(VAR1, VAR4'', 50-1); 
    VAR1[50-1] = VAR4''; 
    VAR2.VAR5 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR6;
        {
            wchar_t VAR7[50] = VAR4"";
            
            memcpy(VAR7, VAR1, wcslen(VAR1)*sizeof(wchar_t));
            VAR7[50-1] = VAR4''; 
            FUN2(VAR1);
        }
    }
}