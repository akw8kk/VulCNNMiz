static void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cpy_34_unionType VAR2;
    wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    
    VAR1 = VAR4;
    VAR1[0] = VAR5''; 
    VAR2.VAR6 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR7;
        {
            wchar_t VAR8[100];
            wmemset(VAR8, VAR5'', 100-1); 
            VAR8[100-1] = VAR5''; 
            
            wcscpy(VAR1, VAR8);
            FUN3(VAR1);
        }
    }
}