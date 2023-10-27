import java.util.Scanner;

public class UserInputs {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Inserisci il tuo nome: ");
        String nome = scanner.nextLine();


        int eta = 0;
        System.out.print("Inserisci la tua eta': ");
        try {
            eta = scanner.nextInt();
        } catch(Exception e){
            System.out.println("Devi usare il tipo di input giusto");
            eta = 0;
            }; 
        
       // si puo' usare .nextDouble() e .nextFloat() per non inserire numeri interi


        System.out.println("Ti chiami: " + nome);
        System.out.println("Hai: " + eta + " anni");

        scanner.close();

    }

}