static void FUN1()
{
    wchar_t * VAR1;
    CWE127_Buffer_Underread__wchar_t_declare_cpy_34_unionType VAR2;
    wchar_t VAR3[100];
    wmemset(VAR3, VAR4'', 100-1);
    VAR3[100-1] = VAR4'';
    
    VAR1 = VAR3;
    VAR2.VAR5 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR6;
        {
            wchar_t VAR7[100*2];
            wmemset(VAR7, VAR4'', 100*2-1); 
            VAR7[100*2-1] = VAR4''; 
            
            wcscpy(VAR7, VAR1);
            FUN2(VAR7);
        }
    }
}