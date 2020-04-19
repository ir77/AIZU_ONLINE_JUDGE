use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    let vec: Vec<&str> = input.split_whitespace().collect();

    let input1: u32 = vec[0].parse().unwrap_or(0);
    let input2: u32 = vec[1].parse().unwrap_or(0);


    println!("{} {}", input1*input2, (input1+input2)*2);
}
